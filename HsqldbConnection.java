
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

/**
 * This is a helper class to access an hsqldb database.
 * The database scripts are supposed to be present in directory:
 * resources/db
 */
public class HsqldbConnection extends DatabaseConnection {

  /**
   * Creates the connection.
   * @param db_file_name_prefix the database name,
   * which is the prefix of the database file
   * @throws SQLException
   */
  public HsqldbConnection()//String db_file_name_prefix)
  throws SQLException {
    try {
      Class.forName("org.hsqldb.jdbcDriver");
    } catch (ClassNotFoundException e) {
      throw new SQLException("HSQLDB database driver not found");
    }
    String db_file_name_prefix = "localDB";
    connection = DriverManager.getConnection(
                   "jdbc:hsqldb:resources/db/" + db_file_name_prefix, "SA", "");
    super.update("SET IGNORECASE TRUE");
    super.update("SET DATABASE DEFAULT TABLE TYPE CACHED");
  }
  
  /**
   * Shuts down the database and closes the connection.
   */
  public void close() throws SQLException {
    Statement st = createStatement();
    st.execute("SHUTDOWN");
    super.close();
  }
}
