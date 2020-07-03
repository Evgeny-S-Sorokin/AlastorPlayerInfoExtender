class CfgPatches
{
	class AlastorPlayerInfoExtender
	{
		units[]				= {};
		weapons[]			= {};
		requiredVersion		= 0.1;
		requiredAddons[]	= { "DZ_Data", "AlastorLogger" };
	};
};

class CfgMods
{
	class PlayerInfoExtender
	{
	    type 			= "mod";
		name 			= "PlayerInfoExtender";
		author 			= "Alastor";
		authorID 		= "76561198052045611";
	    dependencies[] 	= { "Game", "World" };
		
	    class defs
	    {

			class gameScriptModule
            {
                value	= "";
                files[] = { "AlastorPlayerInfoExtender/scripts/3_game" };
            };
			
			class worldScriptModule		
            {
                value	= "";
                files[] = { "AlastorPlayerInfoExtender/scripts/4_world" };
            };
			
        };
    };
};