// Script File

modded class PlayerBase
{
	
	//-----------------------------------------------------------------------------------------
	
	void set_spawn_type( string spawn_type )
	{
		_spawn_type = spawn_type;
	}
	void set_loadout_type( string loadout_type )
	{
		_loadout_type = loadout_type;
	}
	void set_face( string face )
	{
		_face = face;
	}
	void set_description( string description )
	{
		_description = description;
	}
	void set_helm_slot_desc( string helm_slot_desc )
	{
		_helm_slot_desc = helm_slot_desc;
	}
	void set_gl_slot_desc ( string gl_slot_desc )
	{
		_gl_slot_desc = gl_slot_desc;
	}
	void set_mask_slot_desc( string mask_slot_desc )
	{
		_mask_slot_desc = mask_slot_desc;
	}
	void set_body_slot_desc( string body_slot_desc )
	{
		_body_slot_desc = body_slot_desc;
	}
	void set_hand_slot_desc( string hand_slot_desc )
	{
		_hand_slot_desc = hand_slot_desc;
	}
	void set_legs_slot_desc( string legs_slot_desc )
	{
		_legs_slot_desc = legs_slot_desc;
	}
	void set_foot_slot_desc( string foot_slot_desc )
	{
		_foot_slot_desc = foot_slot_desc;
	}
	
	
	
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
	string get_description()
	{
		return _description;
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
	
	//-----------------------------------------------------------------------------------------
	
	protected string _spawn_type;
	protected string _loadout_type;
	protected string _face;
	
	protected string _description;
	protected string _helm_slot_desc;
	protected string _gl_slot_desc;
	protected string _mask_slot_desc;
	protected string _body_slot_desc;
	protected string _hand_slot_desc;
	protected string _legs_slot_desc;
	protected string _foot_slot_desc;
	
	//-----------------------------------------------------------------------------------------
	
}