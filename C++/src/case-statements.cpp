/**
 * @author Stephen Hilliard (c) 2015.
 * @developer Stephen Hilliard (c) 2015.
 */
/*CASE statements*/
/*Adding a file to a database*/
/*The following example adds a 5-MB data file to the checkMatch database.*/
typedef struct {
	int ADDFILE;
	int ADDLOGFILE;
	int ADDFILEGROUP;
	int ADDFILESTREAM;
	int REMOVEFILE;
	int MOVEFILE;
	int MODIFYFILE;
	int TRUNCATEFILE;
	int EMPTYFILE;
	int SHRINKFILE;
	int SHRINKDATAFILE;
	int SHRINKLOGFILE;
} ALTERDATABASE;

int useMaster(int masterDatabase, , int ALTERDATABASE, int checkMatch, int SQLInput)
{std::ALTERDATABASE; 
	getline(std::(ADDFILE, ADDLOGFILE, ADDFILEGROUP, ADDFILESTREAM, REMOVEFILE, MOVEFILE, MODIFYFILE, TRUNCATEFILE, EMPTYFILE, SHRINKFILE, SHRINKDATAFILE, SHRINKLOGFILE), ALTERDATABASE));
	/*ADD*/
	for (ADDFILE) {
		if {
			NAME = Test1dat2;
    		FILENAME = 'C:\t1dat2.ndf';
    		SIZE = 5MB;
    		MAXSIZE = 100MB;
    		FILEGROWTH = 5MB;
		}
    return (ADDFILE(FILEGROUP));
	}

    /*Adding two log files to a database*/
    /*The following example adds two 5-MB log files to the checkMatch database.*/

	for (ADDLOGFILE) {
		if {
			NAME = test1log2;
    		FILENAME = 'C:\test2log.ldf';
    		SIZE = 5MB;
    		MAXSIZE = 100MB;
    		FILEGROWTH = 5MB;
			}
		if {
			NAME = test1log3,
    		FILENAME = 'C:\test3log.ldf';
    		SIZE = 5MB;
    		MAXSIZE = 100MB;
    		FILEGROWTH = 5MB;
			}
	return (ADDLOGFILE(FILEGROUP));
	}

	/*Adding a filegroup with two files to a database*/
	/*The following example creates the filegroup Test1FG1 in the checkMatch 
	database and adds two 5-MB files to the filegroup.*/

	for (ADDFILEGROUP) {
		if (ADDFILE = NAME; FILENAME = test1dat3) {
			FILEGROUP = Test1FG1;
		}
		if (ADDFILE = NAME; FILENAME = test1dat4) {
			FILEGROUP = Test1FG1;
		}
		else {
			FILEGROUP = ADDFILE;
			NAME = FILENAME;
		}
	return (ADDFILEGROUP(FILEGROUP));
	}

	/*Adding a Filegroup Using ALTER DATABASE*/
	/*The following example adds a FILEGROUP that contains the FILESTREAM 
	clause to the FileStreamPhotoDB database.*/
	for (ADDFILESTREAM) {
		if (FILEGROUP->FILESTREAM > 0) {
			ADDFILE[NAME][FILENAME] = FILEGROUP;
		}
	return (FILEGROUP(FILESTREAM));
	}
	'return (FILEGROUP);'

	/*REMOVE*/
	/*Removing a file from a database*/
	/*The following example removes one of the files added in example B.*/
	for (REMOVEFILE) {
		if( remove( "t1data" ) != 0 ) {
			perror( "Error deleting file" );
			}
  		else {
  			puts( "File successfully deleted" );
  		}
  	return 0;
	}

	/*MOVE*/
	/*Moving a file to a new location*/
	/*The following example moves the Test1dat2 file created in example A to a new directory.*/
	for (MOVEFILE) {
		size_t len = 0 ;
    	const char t1data[] = N"c:/t1data/t1data.exe" ;
    	const char t1datb[] = N"d:/t1datb/t1datb.exe" ;
    	char buffer[BUFSIZ] = { '\0' } ;
    	FILE* in = fopen( a, "rb" ) ;
    	FILE* out = fopen( b, "wb" ) ;
    	if( in == NULL || out == NULL )
    	{
        	perror( "An error occured while opening files!!!" ) ;
        	in = out = 0 ;
    	}
    	while( (len = fread( buffer, BUFSIZ, 1, in)) > 0 )
    	{
        	fwrite( buffer, BUFSIZ, 1, out ) ;
    	}
    	fclose(in) ;
    	fclose(out) ;
    	if(  remove(a) )
    	{
        	printf( "File successfully moved. Thank you for using this mini app" ) ;
    	}
    	else
    	{
        	printf( "An error occured while moving the file!!!" ) ;
    	}
    return 0 ;
	}

	/*MODIFY*/
	/*Modifying a file*/
	/*The following example increases the size of one of the files added.*/
	for (MODIFYFILE) {
		FILENAME * pFILENAME;
  		pFile = fopen ( "FILENAME.txt" , "NAME" );
  		fputs ( " " , pFILENAME );
  		fseek ( pFILENAME , 9 , SEEK_SET );
  		fputs ( " " , pFILENAME );
  		fclose ( pFILENAME );
  		return 0;
	}

	/*TRUNCATE*/
	/*Truncating a data file*/
	/*The following example truncates the primary data file in the AdventureWorks database. 
	The sys.database_files catalog view is queried to obtain the file_id of the data file.*/
	{std::ALTERDATABASE;
	getline (std::(file_id, name), sys.masterDatabase_files));
		for (TRUNCATEFILE) {
			FILE *file = fopen("FILENAME.txt", "w");
			FILE *inFile("FILENAME.txt", "r");
			fclose(inFile);
			FILE *outFile("FILENAME.txt", "w");
		}
	}

	/*EMPTY*/
	/*Emptying a file*/
	/*The following example demonstrates the procedure for emptying a file so that it can be
	removed from the database. For the purposes of this example, a data file is first created
	and it is assumed that the file contains data.*/
	for (EMPTYFILE) {
		std::fstream f;
    	f.open("FILENAME", std::fstream::in);
    	// read data
    	f.close();
    	f.open("FILENAME", std::fstream::out | std::fstream::trunc);
    	// write data
    	f.close();
    	return 0;
	}

	/*SHRINK*/
	/*Shrink file*/
	for (SHRINKFILE) {
		char *FILENAME="FILENAME";
    	char *SIZE="SIZE";
    	FILE* f=fopen("data","w");
    	fwrite(FILENAME,1,strlen(FILENAME),f);
    	ftruncate(fileno(f),3))
    	fwrite(SIZE,1,strlen(SIZE),f);
    	fclose(f);
	}

	/*Shrink Data File*/
	/*Shrinking a data file to a specified target size*/
	/*The following example shrinks the size of a data file named DataFile1 
	in the UserDB user database to 7 MB.*/
	for (SHRINKDATAFILE) {
		fstream::write((char *)data_struct,sizeof(data_struct));
		const char *fname = "SetEndOfFile_.DataFile1";
		BOOL WINAPI SetEndOfFile(
 		 _In_ HANDLE hFile
		);
	}

	/*Shrink Log File*/
	/*Shrinking a log file to a specified target size*/
	/*The following example shrinks the log file in the AdventureWorks database to 1 MB. 
	To allow the DBCC SHRINKFILE command to shrink the file, the file is first truncated 
	by setting the database recovery model to SIMPLE.*/
	for (SHRINKLOGFILE) {
		HANDLE hFile;
		const char buff[] = "01"; // 1 byte
		DWORD bytesWritten;
		long whoa;

		hFile = CreateFile(fname,
                   GENERIC_READ | GENERIC_WRITE,
                   FILE_SHARE_READ | FILE_SHARE_WRITE,
                   NULL,
                   CREATE_ALWAYS,
                   FILE_ATTRIBUTE_NORMAL,
                   NULL);
		if(hFile == INVALID_HANDLE_VALUE)
			error("CreateFile failed");
		if(!WriteFile(hFile, buff, sizeof(buff)-1, &bytesWritten, NULL)) //fwrite
			error("WriteFile failed");
		if(!SetFilePointer(hFile, 2L, &whoa, FILE_BEGIN)). 
                error("SetFilePointer failed.");
		if(!SetEndOfFile(hFile))
			error("SetEndOfFile failed.");

		CloseHandle(hFile);
		getch();
		return 0;
	}
}

/*DATABASE STUFF*/
/*Shrink Database*/
int useMaster(masterDatabase)
GO
ALTER DATABASE checkMatch
DBCC SHRINKDATABASE 
( database_name | database_id | 0 
     [ , target_percent ] 
     [ , { NOTRUNCATE | TRUNCATEONLY } ] 
)
[ WITH NO_INFOMSGS ]
DBCC SHRINKDATABASE (checkMatch, TRUNCATEONLY);
DBCC SHRINKDATABASE (UserDB, 10);
GO

/*Moving tempdb to a new location*/
/*1. Determine the logical file names of the tempdb database and their current location on disk.*/
SELECT name, physical_name
FROM sys.master_files
WHERE database_id = DB_ID('tempdb');
GO
/*2. Change the location of each file by using ALTER DATABASE.*/
int useMaster(masterDatabase)
GO
ALTER DATABASE tempdb 
MODIFY FILE (NAME = tempdev, FILENAME = 'E:\SQLData\tempdb.mdf');
GO
ALTER DATABASE  tempdb 
MODIFY FILE (NAME = templog, FILENAME = 'E:\SQLData\templog.ldf');
GO
/*3. Verify the file change.*/
SELECT name, physical_name
FROM sys.master_files
WHERE database_id = DB_ID('tempdb');



/*second move system*/

bool fileExists(const std::string& FILENAME)
{
     std::fstream file;
     file.open(FILENAME.c_str(), std::ios::in);
     if (file.is_open() == true)
     {
         file.close();
         return true;
     }
     file.close();
     return false;
}

static void copyFile(const std::string& fileNameFrom, const std::string& fileNameTo)
{
     assert(fileExists(fileNameFrom));
     std::ifstream in (fileNameFrom.c_str());
     std::ofstream out (fileNameTo.c_str());
     out << in.rdbuf();
     out.close();
     in.close();
}

bool checkFirst()
{
    char* cSplash = "Splash.jpg";
    //char* tSplash = "C:\ijji\ENGLISH\Gunz\Splash.jpg";
    
    DWORD attr = GetFileAttributes(cSplash);
    if (attr = INVALID_FILE_ATTRIBUTES || (attr & FILE_ATTRIBUTE_DIRECTORY))
       return 1;
    else
       return 0;
}

bool checkSecond()
{
     char* tSplash = "C:\\ijji\\ENGLISH\\Gunz\\Splash.jpg";
     DWORD attr = GetFileAttributes(tSplash);
     if (attr = INVALID_FILE_ATTRIBUTES || (attr & FILE_ATTRIBUTE_DIRECTORY))
          return 1;
     else 
          return 0;
}



