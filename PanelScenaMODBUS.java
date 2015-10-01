
import javax.swing.JPanel;
import javax.swing.JComboBox;
import javax.swing.JButton;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.InputEvent;

import java.awt.Font;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.BorderLayout;
import java.awt.Color;
import java.io.File;
import java.io.FilenameFilter;
import java.io.IOException;

import javax.swing.BorderFactory;
import javax.swing.border.CompoundBorder;
import javax.swing.border.BevelBorder;
import javax.swing.SwingUtilities;

public  class PanelScenaMODBUS extends JPanel {
  private static JButton startButton;
  private static JButton stopButton;
  
  private JButton turboButton;
  private static JComboBox scenaCombo;
  private static ScenaScriptWorker  scenaScriptWorker;
  private static String directory, filename;
  
  private MouseListener mouseListener;
  private static PanelScenaMODBUS panelScenaMODBUS;
  private static ParserContext parserContext;//контекст анализатора
  private static File fFile;//файл сценария
  
  private int oldSpeed = 50;
  
  public static String getFilename() {
    return filename;
  }//
  
  public static File getFFile() {
    //файл сценария
    return fFile;
  }//getFFile()
  
  public static JComboBox getScenaCombo() {
    return scenaCombo;
  }//getScenaCombo()
  
  public static JButton getStartButton() {
    return startButton;
  }//
  
  public static JButton getStopButton() {
    return stopButton;
  }//
  
  public static PanelScenaMODBUS getPanelScenaMODBUS() {
    if (panelScenaMODBUS == null)panelScenaMODBUS = new PanelScenaMODBUS();
    return panelScenaMODBUS;
  }//getPanelScenaMODBUS()
  
  private  PanelScenaMODBUS() {
    super();
    parserContext = ParserContext.getParserContext();//контекст анализатора
    scenaScriptWorker = ScenaScriptWorker.getScenaScriptWorker();//обработчик скрипта
    Font toolFont = new Font("TimesRoman", Font.BOLD, 18);
    Font bFont = new Font("TimesRoman", Font.BOLD, 14);
    setVisible(false);
    setLayout(new BorderLayout(3,3));
    setPreferredSize(new Dimension(200+30, 78));
    setMaximumSize(getPreferredSize());
    JPanel buttonPanel = new JPanel(new FlowLayout(FlowLayout.CENTER, 5, 0));
    add(buttonPanel);
    startButton = new JButton("Пуск");
    startButton.setFont(bFont);
    startButton.setPreferredSize(new Dimension(70, 35));
    startButton.setToolTipText("Пуск сценария");
    buttonPanel.add(startButton);
    stopButton = new JButton("Стоп");
    stopButton.setFont(bFont);
    stopButton.setPreferredSize(new Dimension(70, 35));
    stopButton.setToolTipText("Стоп сценария");
    buttonPanel.add(stopButton);
    turboButton = new JButton("T");
    turboButton.setFont(bFont);
    turboButton.setPreferredSize(new Dimension(40, 35));
    turboButton.setToolTipText("ТУРБО");
    buttonPanel.add(turboButton);
    
    FilenameFilter  filter = new FilenameFilter() {
      public boolean accept(File dir, String name) {
        if (name.endsWith(".mst"))
          return true;
        else
          return false;
      }//accept
    }
    ;//filter
    directory = System.getProperty("user.dir");
    File dir = new File(directory);
    String[] files = dir.list(filter);
    scenaCombo = new JComboBox(files);
    scenaCombo.setFont(toolFont);
    scenaCombo.addActionListener( new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        filename = (String)scenaCombo.getSelectedItem();
        fFile  = new File(directory, filename); //открыть файл сценария
        ParserContext.clearContext(); //очистить контекст
        scenaCombo.setEditable(false);
        startButton.setEnabled(true);
        stopButton.setEnabled(true);
      }
    });
    add(scenaCombo, BorderLayout.NORTH);
    
    setBorder(new CompoundBorder(
                BorderFactory.createLineBorder(new Color(0x00c800), 2),         // Outer border
                BorderFactory.createBevelBorder(BevelBorder.RAISED)));  // Inner border
                
    startButton.addActionListener( new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        fFile  = new File(directory, filename); //открыть файл сценария
        ParserContext.clearContext(); //очистить контекст
        ClockScena.getClockScena().autostart();
      }//actionPerformed
    });
    
    stopButton.addActionListener( new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        if (ParserContext.getBr() != null) PanelToolBar.getGoButton().setEnabled(true);
        ClockScena.getClockScena().stop();
      }
    });
    
    // Define MouseListener
    mouseListener = new MouseAdapter() {
      public void mousePressed(MouseEvent mouseEvent) {
        int modifiers = mouseEvent.getModifiers();
        if ((modifiers & InputEvent.BUTTON1_MASK) ==
        InputEvent.BUTTON1_MASK) {
          oldSpeed = PopUpMenuWorker.getScenaSpeed();
          PopUpMenuWorker.setScenaSpeed(PopUpMenuWorker.getTurboSpeed());
        }
      }
      public void mouseReleased(MouseEvent mouseEvent) {
        if (SwingUtilities.isLeftMouseButton(mouseEvent)) {
          PopUpMenuWorker.setScenaSpeed(oldSpeed);
        }
      }
    };
    turboButton.addMouseListener(mouseListener);
    
  }//PanelScenaMODBUS
  
}//class

class ClockScena implements ActionListener {
  private static ClockScena  clockScena = null;//скорость выполн сценария
  
  javax.swing.Timer t;
  boolean autoBool;
  
  public static ClockScena getClockScena() {
    if (clockScena==null)clockScena    = new ClockScena();
    return clockScena;
  }//getClockScena()
  
  private ClockScena() {
    t = new javax.swing.Timer(200, this);
    autoBool = false;
  }
  
  public void stop() {
    t.stop();
    autoBool = false;
  }
  
  public void start() {
    PanelToolBar.getGoButton().setEnabled(true);
    autoBool = false;
    t.start();
  }
  
  public void autostart() {
    PanelToolBar.getGoButton().setEnabled(false);
    autoBool = true;
    t.start();
  }
  
  public void actionPerformed(ActionEvent ae) {
    try {
      switch (ScenaScriptWorker.getScenaScriptWorker().scenaTransation()) {
      case SCENA_CONTINUE:
        t.setDelay(PopUpMenuWorker.getScenaSpeed());
        break;
      case SCENA_ERROR:
        stop();//останов выполнения сценария
        PanelToolBar.getGoButton().setEnabled(false);
        //if (ParserContext.getBr()!=null) ParserContext.getBr().close();
        //ParserContext.setBr(null);
        break;
      case SCENA_END://конец файла
        PanelToolBar.getGoButton().setEnabled(false);
        if (!PanelToolBar.getToggleButton().isSelected())autoBool=false;//если цикл отключен
        if (!autoBool) break;
        try {
          Thread.sleep(PanelToolBar.getPeriod_model().getNumber().intValue());
        } catch (InterruptedException ex) {
          stop();//останов выполнения сценария
          //  if (ParserContext.getBr()!=null) ParserContext.getBr().close();
          //ParserContext.setBr(null);
        }
        ParserContext.clearContext(); //очистить контекст
        autostart();
        t.setDelay(PopUpMenuWorker.getScenaSpeed());
        break;
      default:
        ;
      }//switch
    }//try
    catch (IOException e) {
      e.getMessage();
      stop();
      // try {
      //   if (ParserContext.getBr()!=null)  ParserContext.getBr().close();
      // ParserContext.setBr(null);
      // } catch (IOException ioe) {
      // System.out.println(ioe);
      //}
    }
    //проверка на автоматическое выполнение сценария
    if (!autoBool) t.stop();//однократный пуск
  }//actionPerformed
}//class
