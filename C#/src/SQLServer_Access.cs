/**
 * @author Stephen Hilliard (c) 2015.
 * @developer Stephen Hilliard (c) 2015.
 */
using System.Data.SqlClient;
SqlConnection myConnection = new SqlConnection("user id=username;" + 
                                       "password=password;server=serverurl;" + 
                                       "Trusted_Connection=yes;" + 
                                       "database=database; " + 
                                       "connection timeout=30");
SqlConnection.Open() {
	try
	{
    	myConnection.Open();
	}
	catch(Exception e)
	{
    Console.WriteLine(e.ToString());
	}
}

SqlCommand  myCommand = new SqlCommand("Command String", myConnection);
SqlCommand myCommand= new SqlCommand("INSERT INTO table (Column1, Column2) " +
                                     "Values ('string', 1)", myConnection);
myCommand.ExecuteNonQuery();

try
{
    SqlDataReader myReader = null;
    SqlCommand    myCommand = new SqlCommand("select * from table", 
                                             myConnection);
    myReader = myCommand.ExecuteReader();
    while(myReader.Read())
    {
        Console.WriteLine(myReader["Column1"].ToString());
        Console.WriteLine(myReader["Column2"].ToString());
    }
}
catch (Exception e)
{
    Console.WriteLine(e.ToString());
}
SqlCommand myCommand = new SqlCommand(
 "SELECT * FROM table WHERE Column = " + input.Text, myConnection);
SqlParameter myParam = new SqlParameter("@Param1", SqlDbType.VarChar, 11);
myParam.Value = "Garden Hose";
        
SqlParameter myParam2 = new SqlParameter("@Param2", SqlDbType.Int, 4);
myParam2.Value = 42;
SqlParameter myParam3 = new SqlParameter("@Param3", SqlDbType.Text);
myParam.Value = "Note that I am not specifying size. " + 
  "If I did that it would trunicate the text.";
 SqlCommand myCommand = new SqlCommand(
  "SELECT * FROM table WHERE Column = @Param2", myConnection);
myCommand.Parameters.Add(myParam2);
osql -E -S %SERVER%\%INSTANCE% -Q "sp_grantlogin 'NT AUTHORITY\NETWORK SERVICE'"
osql -E -S %SERVER%\%INSTANCE% -d %DATABASE% -Q 
  "sp_grantdbaccess 'NT AUTHORITY\NETWORK SERVICE'"
osql -E -S %SERVER%\%INSTANCE% -d %DATABASE% -Q 
  "sp_addrolemember 'db_owner', 'NT AUTHORITY\NETWORK SERVICE'"
osql -E -S %SERVER%\%INSTANCE% -Q "sp_grantlogin '%MACHINENAME%\ASPNET'"
osql -E -S %SERVER%\%INSTANCE% -d %DATABASE% 
  -Q "sp_grantdbaccess '%MACHINENAME%\ASPNET'"
osql -E -S %SERVER%\%INSTANCE% -d %DATABASE% 
  -Q "sp_addrolemember 'db_owner', '%MACHINENAME%\ASPNET'"