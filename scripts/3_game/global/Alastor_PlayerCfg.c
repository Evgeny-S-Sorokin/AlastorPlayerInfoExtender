// Script File

class Alastor_PlayerCfg
{
	
	//----------------------------------------------------------------------
	//-file info------------------------------------
	static const string mod_dir	 = "$profile:AlastorMods\\";
	static const string file_dir = mod_dir + "PlayerCfg\\";

	//-Player parametrs----------------------
	private string _spawn_type 		= "UberPepega";
	private string _loadout_type 	= "UberPepega";
	private string _face			= "SurvivorM_Cyril";
	private string _player_desc		= "Default player description";
	private string _helm_slot_desc	= "Default helmet slot description";
	private string _gl_slot_desc	= "Default glasses slot description";
	private string _mask_slot_desc	= "Default mask slot description";
	private string _body_slot_desc	= "Default body slot description";
	private string _hand_slot_desc	= "Default hand slot description";
	private string _legs_slot_desc	= "Default legs slot description";
	private string _foot_slot_desc	= "Default foot slot description";
	
	//----------------------------------------------------------------------
	
	void Alastor_PlayerCfg( PlayerIdentity identity )
	{
		if ( GetGame().IsClient() )
		{
			return;
		}
		else {}
		
		string func_name = "Alastor_PlayerCfg";
		string file_name;
		string file_path;
		
		g_log.info( "Checking mod directory [" + mod_dir + "]", func_name );
		if ( !FileExist( mod_dir ) )
		{
			g_log.error( "No directory [" + mod_dir + "]. Creating one!", func_name );
			MakeDirectory( mod_dir );
		}
		else {}
		
		g_log.info( "Checking file directory [" + file_dir + "]", func_name );
		if ( !FileExist( file_dir ) )
		{
			g_log.error( "No directory [" + file_dir + "]. Creating one!", func_name );
			MakeDirectory( file_dir );		
		}
		else {}
		
		string Steam64_ID = identity.GetPlainId();
		if ( ( Steam64_ID != "" ) )
		{
			file_name = Steam64_ID + ".json";
			file_path = file_dir + file_name;	
		}
		else 
		{
			g_log.error( "Failed to get player's Steam64_ID!", func_name );
			file_name  = "Default.json";
			file_path = file_dir + file_name;
		}
		
		g_log.info( "Reading config [" + file_path + "]", func_name );
		if ( !FileExist( file_path ) )
		{
			g_log.error( "No file [" + file_path + "]. Creating one!", func_name );
			save( file_path );
		}
		else {}
		
		load( file_path );
	}
	
	// Getters
	string get_spawn_type()
	{
		return _spawn_type;
	}
	string get_loadout_type()
	{
		return _loadout_type;
	}
	string get_face()
	{
		return _face;
	}
	string get_player_desc()
	{
		return _player_desc;
	}
	string get_helm_slot_desc()
	{
		return _helm_slot_desc;
	}
	string get_gl_slot_desc()
	{
		return _gl_slot_desc;
	}
	string get_mask_slot_desc()
	{
		return _mask_slot_desc;
	}
	string get_body_slot_desc()
	{
		return _body_slot_desc;
	}
	string get_hand_slot_desc()
	{
		return _hand_slot_desc;
	}
	string get_legs_slot_desc()
	{
		return _legs_slot_desc;
	}
	string get_foot_slot_desc()
	{
		return _foot_slot_desc;
	}
	
	//----------------------------------------------------------------------
	
	//-load cfg from file--------------------------
	protected bool load( string file_path )
	{
		string func_name = "load              ";
		
		if ( FileExist( file_path ) )
		{
			g_log.info( "Loading config from [" + file_path + "]", func_name );
			JsonFileLoader< Alastor_PlayerCfg >.JsonLoadFile( file_path, this );
			return true;
		}
		else 
		{
			return false;
		}
	}
	
	//-save cfg to file---------------------------
	protected void save( string file_path )
	{
		g_log.info( "Saving [" + file_path + "]", "save" );
		JsonFileLoader< Alastor_PlayerCfg >.JsonSaveFile( file_path, this );
	}
	
	//----------------------------------------------------------------------
	
}