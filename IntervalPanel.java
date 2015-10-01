
import javax.swing.JPanel;
import javax.swing.JSlider;
import javax.swing.JCheckBox;
import javax.swing.JLabel;
import javax.swing.ButtonGroup;
import javax.swing.JButton;

import java.util.List;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Collections;
import java.lang.Math;

import java.awt.Color;
import java.awt.Font;
import java.awt.BorderLayout;
import java.awt.Dimension;
import java.awt.BasicStroke;

import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;

import org.jfree.ui.Layer;
import org.jfree.chart.plot.Crosshair;
import org.jfree.chart.plot.ValueMarker;
import org.jfree.chart.panel.CrosshairOverlay;
import org.jfree.ui.RectangleAnchor;
import org.jfree.ui.TextAnchor;
import org.jfree.ui.LengthAdjustmentType;

class IntervalPanel extends JPanel {
  public static final int IntervalHight = 120;
  
  public JSlider sliderITR;
  public JPanel panelWEST;
  public JPanel panelCENTER;
  public PanelWEST_NORTH   panelWEST_NORTH;
  public PanelWEST_CENTER  panelWEST_CENTER;
  public PanelWEST_SOUTH   panelWEST_SOUTH;
  public  VisualPanel visualP;
  public  boolean  flagNextButton = false;
  
  public IntervalPanel(VisualPanel vp) {
    super(new BorderLayout(4, 4));
    visualP = vp;
    setPreferredSize(new Dimension(0, IntervalHight));
    setMaximumSize(getPreferredSize());
    setVisible(false);//невидимая
    
    sliderITR = new JSlider(JSlider.HORIZONTAL, 0, 100, 4);
    sliderITR.setBounds(0, 126, 60, 140) ;
    sliderITR.setMinorTickSpacing(2);
    sliderITR.setMajorTickSpacing(10);
    sliderITR.setPaintTicks(true);
    sliderITR.setPaintLabels(true);
    sliderITR.setVisible(true);
    sliderITR.setEnabled(false);
    
    sliderITR.addChangeListener(new ChangeListener() {
      public void stateChanged(ChangeEvent e) {
        if (flagNextButton) {
          flagNextButton = false;
          return;
        }//if
        double Value = (sliderITR.getValue()/100.0)*
                       visualP.getMarkerMediator().getLength() +
                       visualP.getMarkerMediator().getLowBound();
        visualP.getMarkerMediator().newValueMarker(Value, false);//новое значение тек маркера
        if (sliderITR.getValue()==100) {
          visualP.getMarkerMediator().deleteCrr();//удалить тек маркер
          renderingMButton();//обновить кнопки маркеров
        }//if
        
        renderingAlterNear();//обновить альтеры
        renderingAButton(); //обновить кнопки альтеров
        panelWEST_CENTER.renderingCButton(); //обновить кнопки удаления точки
        
      }//stateChanged
    });
    
    panelCENTER = new JPanel(new BorderLayout(4, 4));
    panelCENTER.add(sliderITR, BorderLayout.CENTER);
    
    Font lFont = new Font("TimesRoman", Font.BOLD, 16);
    JLabel markerLab = new JLabel("123.45678");
    markerLab.setFont(lFont);
    panelCENTER.add(markerLab, BorderLayout.SOUTH);
    add(panelCENTER, BorderLayout.CENTER);
    
    panelWEST = new JPanel(new BorderLayout(4, 4));
    panelWEST.setPreferredSize(new Dimension(420, 80));
    panelWEST.setMaximumSize(getPreferredSize());
    
    panelWEST_NORTH = new PanelWEST_NORTH(this);
    
    panelWEST.add(panelWEST_NORTH, BorderLayout.NORTH);
    
    panelWEST_CENTER = new PanelWEST_CENTER(this);
    
    panelWEST.add(panelWEST_CENTER, BorderLayout.CENTER);
    
    panelWEST_SOUTH = new PanelWEST_SOUTH(this);
    
    panelWEST.add(panelWEST_SOUTH, BorderLayout.SOUTH);
    
    add(panelWEST, BorderLayout.WEST);
    
  }//construct
  
  public void renderingAButton() {
    //обновить кнопки альтеров
    if (visualP.getAlterMediator().getCurrValueAlter()!=null &&
        visualP.getMarkerMediator().getCrrVertMarker().isVisible()
        
       ) {//тек альтер
      panelWEST_SOUTH.prevAlterButton.setEnabled(true);
      panelWEST_SOUTH.nextAlterButton.setEnabled(true);
      panelWEST_SOUTH.alterMemButton.setEnabled(true);
      
      boolean find = false;
      if (visualP.getAlterMediator().getAlterMem().containsKey(
            new Integer((int)Math.round(
                          visualP.getAlterMediator().getCurrValueAlter().getValue()*1000.0))))
        find = true;
      panelWEST_SOUTH.alterMemButton.setSelected(find);
      panelWEST_SOUTH.alterMemButton.selectedButton();
    }//if
    else {
      panelWEST_SOUTH.prevAlterButton.setEnabled(false);
      panelWEST_SOUTH.nextAlterButton.setEnabled(false);
      panelWEST_SOUTH.alterMemButton.setEnabled(false);
    }
  }//renderingAButton()
  
  public void renderingMButton() {
    //обновить кнопки маркеров
    if (visualP.getMarkerMediator().countMarker()>0) {
      panelWEST_NORTH.nextButton.setEnabled(true);
      panelWEST_NORTH.prevButton.setEnabled(true);
    }//if
    else {
      panelWEST_NORTH.nextButton.setEnabled(false);
      panelWEST_NORTH.prevButton.setEnabled(false);
    }//
  }//renderingMButton()
  
  public void renderingAlterNear() {
    //обновить ближние альтеры
    renderingAlter(0);
  }//renderingAlterNear()
  
  public void renderingAlterInc() {
    //инкремент и обновить дальние альтеры
    renderingAlter(1);
  }//renderingAlterFar()
  
  public void renderingAlterDec() {
    //декремент и обновить дальние альтеры
    renderingAlter(-1);
  }//renderingAlterFar()
  
  private void renderingAlter(int side) {
    if (panelWEST_SOUTH.alterButton.isSelected()) {
      switch (side) {
      case 0:
        visualP.getAlterMediator().alterViewerNear();//заполнить видимые альтеры
        break;
      case 1:
        visualP.getAlterMediator().alterViewerInc();//заполнить видимые альтеры
        break;
      case -1:
        visualP.getAlterMediator().alterViewerDec();//заполнить видимые альтеры
        break;
      default:
        ;
      }//switch
      visualP.getAlterMediator().alterShower();//отобразить альтеры
    }//if
  }//renderingAlter(boolean near_far)
  
}//class




