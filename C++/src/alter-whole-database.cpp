/**
 * @author Stephen Hilliard (c) 2015.
 * @developer Stephen Hilliard (c) 2015.
 */
/*Alter Database Whole*/

using System;
using Microsoft.SqlServer.Server;
using System.IO;

public partial class ALTERDATABASE(database_name  || CURRENT)  {
	int MODIFYNAME(new_database_name) = {
		if (int MODIFYNAME == int new_database_name) {
			return (COLLATE(collation_name[] = [file_and_filegroup_options] || [set_database_options]));
		}
	};

	int add_or_modify_files() {
		if (ADDFILE[filespec] = [ ,...n ]) {
			return (FILEGROUP(filegroup_name);
		}
		if (ADDLOGFILE[filespec] = [ ,...n ]) {
			return (REMOVEFILE(logical_file_name));
		}
		if (MODIFYFILE = [filespec]) {
			NAME = logical_file_name, 
			return (NEWNAME = new_logical_name);
		}
		else return (FILENAME = ' new_path/os_file_name ');
	};

	int filespec() {
		|| NAME = logical_file_name;
   		|| NEWNAME = new_logical_name;
    	|| FILENAME = ('os_file_name' | 'filestream_path' | 'memory_optimized_data_path');
   		|| SIZE = size [ KB | MB | GB | TB ];
    	|| MAXSIZE = (max_size [ KB | MB | GB | TB ] | UNLIMITED);
    	|| FILEGROWTH = growth_increment [ KB | MB | GB | TB| % ];
    	|| OFFLINE;
	};

	int add_or_modify_filegroups() {
		if (ADDFILEGROUP[filegroup_name] == FILESTREAM[MEMORY_OPTIMIZED_DATA]) {
			(REMOVEFILE (FILEGROUP[filegroup_name]));
			return (MODIFYFILE(FILEGROUP[filegroup_name]));
		}
		if (MODIFYFILE == FILEGROUP[filegroup_name]) {
			return (filegroup_updatability_option(NAME[new_filegroup_name]));
		}
		if (filegroup_updatability_option == NAME[new_filegroup_name]) {
			private:
  				int _x;
  				int _y;
			public:
  				__AUTOGROWSINGLEFILE int x = {AUTOGROW_SINGLE_FILE};
  				return *this;
				__AUTOGROWALLFILES int y = {AUTOGROW_ALL_FILES};
  				return *this;

			if (FILEGROUP == [x][y]) {
				return (AUTOGROW_ALL_FILES);
			}
			else {
				return (AUTOGROW_SINGLE_FILE);
			}
		}
	};

	int filegroup_updatability_option() {
		private:
  			int _x;
  			int _y;
		public:
  			__READONLY int x = {READ_ONLY};
  			return *this;
			__READWRITE int y = {READ_WRITE};
  			return *this;

		if (FILEGROUP == [x][y]) {
			return (READ_WRITE);
		}
		else {
			return (READ_ONLY);
		}
	}
	ALTERDATABASE(xtp_db *ADDFILEGROUP, int start, int end, xtp_fg *MEMORY_OPTIMIZED_DATA) {
		return (ALTERDATABASE (xtp_db *ADDFILE(([NAME] == 'xtp_mod'), ([FILENAME] == 'data\xtp_mod'))([FILEGROUP] *xtp_fg));
	}
};

public partial class ALTERDATABASE(database_name  || CURRENT)  {
    [SqlFunction]
    int optionspec () {
  		int auto_option(AUTO_CLOSE, AUTO_CREATE_STATISTICS, AUTO_SHRINK, AUTO_UPDATE_STATISTICS, AUTO_UPDATE_STATISTICS_ASYNC) = {
  			int AUTO_CLOSE[ON] = {return (TRUE)};
  			int AUTO_CREATE_STATISTICS[ON] = {
  				if (INCREMENTAL > 0) return (TRUE);
  				else return(FALSE)};
  			int AUTO_SHRINK[ON] = {return (TRUE);}
  			int AUTO_UPDATE_STATISTICS[ON] = {return (TRUE)};
  			int AUTO_UPDATE_STATISTICS_ASYNC[ON] = {return (TRUE)};
  		}; 
    	int change_tracking_option(CHANGE_TRACKING) = {
    		int CHANGE_TRACKING[ON] = {
    			if (CHANGE_TRACKING > 0) return (change_tracking_option_list);
    			int change_tracking_option_list(AUTO_CLEANUP, CHANGE_RETENTION) = {
    				int AUTO_CLEANUP[ON] = {return (TRUE)};
    				int CHANGE_RETENTION = {
    					if (CHANGE_RETENTION > 0) return(int retention_period);
    					int retention_period[] = {DAYS || HOURS || MINUTES};
    				}
    			}
    		}
    	}; 
		int containment_option(CONTAINMENT) = {
			int CONTAINMENT[] = {NONE || PARTIAL};
		}; 
    	int cursor_option(CURSOR_CLOSE_ON_COMMIT, CURSOR_DEFAULT) = {
    		int CURSOR_CLOSE_ON_COMMIT[ON] = {return (TRUE)};
    		int CURSOR_DEFAULT[] = {LOCAL || GLOBAL};
    	}; 
    	int database_mirroring_option(ALTERDATABASE) = {return (int Database Mirroring)};
    	int date_correlation_optimization_option(DATE_CORRELATION_OPTIMIZATION) = {
    		int DATE_CORRELATION_OPTIMIZATION[ON] = {return (TRUE)};
    	};
    	int db_encryption_option(ENCRYPTION) = {
    		int ENCRYPTION[ON] = {return (TRUE)};
    	};
    	int db_state_option[] = {ONLINE || OFFLINE || EMERGENCY};
    	int db_update_option[] = {READ_ONLY || READ_WRITE}; 
    	int db_user_access_option[] = {SINGLE_USER || RESTRICTED_USER || MULTI_USER}; 
    	int delayed_durability_option(DELAYED_DURABILITY) = {
    		int DELAYED_DURABILITY[] = {DISABLED || ALLOWED || FORCED};
    	};
    	int external_access_option(DB_CHAINING, TRUSTWORTHY, DEFAULT_FULLTEXT_LANGUAGE, DEFAULT_LANGUAGE, NESTED_TRIGGERS, TRANSFORM_NOISE_WORDS, TWO_DIGIT_YEAR_CUTOFF) = {
    		int DB_CHAINING[ON] = {return (TRUE)};
    		int TRUSTWORTHY[ON] = {return (TRUE)};
    		int DEFAULT_FULLTEXT_LANGUAGE[] = {(lcid), || (language name) || (language alias)};
    		int DEFAULT_LANGUAGE[] = {(lcid) || (language name) || (<)language alias)};
    		int NESTED_TRIGGERS[ON] = {return (TRUE)};
    		int TRANSFORM_NOISE_WORDS[ON] = {return (TRUE)};
    		int TWO_DIGIT_YEAR_CUTOFF[] = {1753,...,2049,...,9999};
    	};
    	int FILESTREAM_option(NON_TRANSACTED_ACCESS, DIRECTORY_NAME) = {
    		int NON_TRANSACTED_ACCESS[] = {OFF || READ_ONLY || FULL};
    		int DIRECTORY_NAME() = {return(directory_name)};
    	};
    	int HADR_options(ALTERDATABASE) = {return(SET(HADR)};
    	int mixed_page_allocation_option(MIXED_PAGE_ALLOCATION) = {
    		int MIXED_PAGE_ALLOCATION[ON] = {return (TRUE)};
    	};
    	int parameterization_option(PARAMETERIZATION) = {
    		int PARAMETERIZATION[] = {SIMPLE || FORCED};
    	};
    	int query_store_options(QUERY_STORE) = {
    		int QUERY_STORE[ON] = {
    			return (query_store_option_list);
    			if (int QUERY_STORE >= [,... n]) {
    				return (query_store_option_list)
    			};
    			else { return (CLEAR([ALL]))};
    		};
    	};
    	int query_store_option_list(OPERATION_MODE, CLEANUP_POLICY, DATA_FLUSH_INTERVAL_SECONDS, MAX_STORAGE_SIZE_MB, INTERVAL_LENGTH_MINUTES, SIZE_BASED_CLEANUP_MODE, QUERY_CAPTURE_MODE, MAX_PLANS_PER_QUERY) = {
    		int OPERATION_MODE[] = {READ_WRITE || READ_ONLY};
    		int CLEANUP_POLICY(STALE_QUERY_THRESHOLD_DAYS) = {
    			int STALE_QUERY_THRESHOLD_DAYS(number) = {return (TRUE)};
    		};
    		int DATA_FLUSH_INTERVAL_SECONDS(number) = {return (TRUE)};
    		int MAX_STORAGE_SIZE_MB(number) = {return (TRUE)};
    		int INTERVAL_LENGTH_MINUTES(number) = {return (TRUE)};
    		int SIZE_BASED_CLEANUP_MODE[] = {AUTO || OFF};
    		int QUERY_CAPTURE_MODE[] = {AUTO || NONE};
    		int MAX_PLANS_PER_QUERY(number) = {return (TRUE)};
    	};
    	int recovery_option(RECOVERY, TORN_PAGE_DETECTION, PAGE_VERIFY) = {
    		int RECOVERY[] = {FULL || BULK_LOGGED || SIMPLE};
    		int TORN_PAGE_DETECTION[ON] = {return (TRUE)};
    		int PAGE_VERIFY[] = {CHECKSUM || TORN_PAGE_DETECTION || NONE};
    	};
    	int remote_data_archive_option(REMOTE_DATA_ARCHIVE) = {
    		int REMOTE_DATA_ARCHIVE(server_name, CREDENTIAL, db_scoped_credential_name, FEDERATED_SERVICE_ACCOUNT) = {
    			if (int CREDENTIAL == db_scoped_credential_name) {
    				return(SERVER(int server_name));
    			}
    			if (int FEDERATED_SERVICE_ACCOUNT == [ON]) {
    				return(SERVER(int server_name));
    			}
    			else return([OFF]);
    		}
    	};
    	int service_broker_option(HONOR_BROKER_PRIORITY, service_broker_option) = {
    		int HONOR_BROKER_PRIORITY[ON] = {return (TRUE)};
    		int service_broker_option[] = {ENABLE_BROKER || DISABLE_BROKER || NEW_BROKER || ERROR_BROKER_CONVERSATIONS || HONOR_BROKER_PRIORITY};
    	};
    	int snapshot_option(ALLOW_SNAPSHOT_ISOLATION, READ_COMMITTED_SNAPSHOT, MEMORY_OPTIMIZED_ELEVATE_TO_SNAPSHOT) = {
    		int ALLOW_SNAPSHOT_ISOLATION[ON] = {return (TRUE)};
    		int READ_COMMITTED_SNAPSHOT[ON] = {return (TRUE)};
    		int MEMORY_OPTIMIZED_ELEVATE_TO_SNAPSHOT[ON] = {return (TRUE)};
    	};
    	int sql_option(ANSI_NULL_DEFAULT, ANSI_NULLS, ANSI_PADDING, ANSI_WARNINGS, ARITHABORT, COMPATIBILITY_LEVEL, CONCAT_NULL_YIELDS_NULL, NUMERIC_ROUNDABORT, QUOTED_IDENTIFIER, RECURSIVE_TRIGGERS) = {
    		int ANSI_NULL_DEFAULT[ON] = {return (TRUE)};
    		int ANSI_NULLS[ON] = {return (TRUE)};
    		int ANSI_PADDING[ON] = {return (TRUE)};
    		int ANSI_WARNINGS[ON] = {return (TRUE)};
    		int ARITHABORT[ON] = {return (TRUE)};
    		int COMPATIBILITY_LEVEL[] = {90 || 100 || 110 || 120};
    		int CONCAT_NULL_YIELDS_NULL[ON] = {return (TRUE)};
    		int NUMERIC_ROUNDABORT[ON] = {return (TRUE)};
    		int QUOTED_IDENTIFIER[ON] = {return (TRUE)};
    		int RECURSIVE_TRIGGERS[ON] = {return (TRUE)};
    	}; 
    	int target_recovery_time_option(TARGET_RECOVERY_TIME) = {
    		int TARGET_RECOVERY_TIME(target_recovery_time) = {
    			int target_recovery_time[] = {SECONDS || MINUTES};
    		};
    	}; 
    	int termination() = {
    		if (ROLLBACK >> integer[SECONDS]) {
    			return (ROLLBACK(IMMEDIATE);
    		}
    		else outfile.write (NO_WAIT);
    		outfile.close();
    		infile.close();
    		return 0;
    	};
	}
	ALTERDATABASE(xtp_db *ADDFILEGROUP, int start, int end, xtp_fg *MEMORY_OPTIMIZED_DATA) {
		return (ALTERDATABASE (xtp_db *ADDFILE(([NAME] == 'xtp_mod'), ([FILENAME] == 'data\xtp_mod'))([FILEGROUP] *xtp_fg));
	}
};