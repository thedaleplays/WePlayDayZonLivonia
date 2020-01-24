modded class PlayerConstants 
{   
    //--- metabolic changes
	static const float METABOLIC_SPEED_ENERGY_SPRINT	= 0.7;		//energy loss per second: default 0.6
    //--- blood changes
	static const int BLOOD_REGEN_RATE_PER_SEC = 0.27; //default 0.3
	static const float BLOOD_REGEN_MODIFIER_ENERGY_HIGH		= 0.9; //default 1.0
	static const float BLOOD_REGEN_MODIFIER_WATER_HIGH		= 0.9; //default 1.0
	static const float HEALTH_REGEN_MIN	= 0.005;
	static const float HEALTH_REGEN_MAX	= 0.028; //default 0.03
    static const float SHOES_MOVEMENT_DAMAGE_PER_STEP = 0.017;
	static const float CHANCE_TO_BLEED_SLIDING_LADDER_PER_SEC = 0.2;
	static const float GLOVES_DAMAGE_SLIDING_LADDER_PER_SEC = -3;
}