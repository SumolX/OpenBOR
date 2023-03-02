/*
 * OpenBOR - http://www.chronocrash.com
 * -----------------------------------------------------------------------
 * All rights reserved. See LICENSE in OpenBOR root for license details.
 *
 * Copyright (c) 2004 - 2019 OpenBOR Team
 */

// Entity Properties
// 2018-04-02
// Caskey, Damon V.

typedef enum
{
	ENTITY_PROPERTY_AI_DISABLE,
	ENTITY_PROPERTY_AI_TARGET_ENTITY,
	ENTITY_PROPERTY_ALTERNATE_IDLE,
	ENTITY_PROPERTY_ALTERNATE_WALK,
	ENTITY_PROPERTY_ANIMATION,
	ENTITY_PROPERTY_ANIMATION_FRAME,
	ENTITY_PROPERTY_ANIMATION_ID,
	ENTITY_PROPERTY_ANIMATION_ID_PREVIOUS,
	ENTITY_PROPERTY_ANIMATION_STATE,
	ENTITY_PROPERTY_ANIMATION_TIME,
	ENTITY_PROPERTY_ARROW_STATE,
	ENTITY_PROPERTY_ATTACK_ID_INCOMING,
	ENTITY_PROPERTY_ATTACK_ID_OUTGOING,
	ENTITY_PROPERTY_ATTACK_STATE,
	ENTITY_PROPERTY_AUTOKILL,
	ENTITY_PROPERTY_BACK_HIT_DIRECTION,
	ENTITY_PROPERTY_BIND,
	ENTITY_PROPERTY_BLAST_STATE,
	ENTITY_PROPERTY_BLINK,
	ENTITY_PROPERTY_BLOCK_STATE,
	ENTITY_PROPERTY_BOSS,
	ENTITY_PROPERTY_CHARGE_STATE,
	ENTITY_PROPERTY_CHILD,
	ENTITY_PROPERTY_COLORSET_DEFAULT,
	ENTITY_PROPERTY_COLORSET_DYING_HEALTH_1,
	ENTITY_PROPERTY_COLORSET_DYING_HEALTH_2,
	ENTITY_PROPERTY_COLORSET_DYING_INDEX_1,
	ENTITY_PROPERTY_COLORSET_DYING_INDEX_2,
	ENTITY_PROPERTY_COLORSET_TABLE,
	ENTITY_PROPERTY_COLORSET_TIME,
	ENTITY_PROPERTY_COMBO_STEP,
	ENTITY_PROPERTY_COMBO_TIME,
	ENTITY_PROPERTY_COMMAND_TIME,
	ENTITY_PROPERTY_DAMAGE_ON_LANDING,
	ENTITY_PROPERTY_DEAD,
	ENTITY_PROPERTY_DEFENSE_COLLECTION,
	ENTITY_PROPERTY_DESTINATION_X,
	ENTITY_PROPERTY_DESTINATION_Z,
	ENTITY_PROPERTY_DIE_ON_LANDING,
	ENTITY_PROPERTY_DRAWMETHOD,
	ENTITY_PROPERTY_DROP,
	ENTITY_PROPERTY_DUCK_STATE,
	ENTITY_PROPERTY_ENTVAR_COLLECTION,
	ENTITY_PROPERTY_ESCAPE_COUNT,
	ENTITY_PROPERTY_EXISTS,
	ENTITY_PROPERTY_EXPLODE,
	ENTITY_PROPERTY_FACTION,
	ENTITY_PROPERTY_FALL_STATE,
	ENTITY_PROPERTY_FREEZE_STATE,
	ENTITY_PROPERTY_FREEZE_TIME,
	ENTITY_PROPERTY_FUNCTION_TAKE_ACTION,
	ENTITY_PROPERTY_FUNCTION_TAKE_DAMAGE,
	ENTITY_PROPERTY_FUNCTION_THINK,
	ENTITY_PROPERTY_FUNCTION_TRY_MOVE,
	ENTITY_PROPERTY_GET_STATE,
	ENTITY_PROPERTY_GRAB_TARGET,
	ENTITY_PROPERTY_GRAB_WALK_STATE,
	ENTITY_PROPERTY_GUARD_TIME,
	ENTITY_PROPERTY_HP,
	ENTITY_PROPERTY_HP_OLD,
	ENTITY_PROPERTY_IDLE_STATE,
	ENTITY_PROPERTY_IN_PAIN,
	ENTITY_PROPERTY_IN_PAIN_BACK,
	ENTITY_PROPERTY_INVINCIBLE_STATE,
	ENTITY_PROPERTY_INVINCIBLE_TIME,
	ENTITY_PROPERTY_ITEM_DATA,
	ENTITY_PROPERTY_JUMP_ANIMATION_ID,
	ENTITY_PROPERTY_JUMP_STATE,
	ENTITY_PROPERTY_JUMP_VELOCITY_X,
	ENTITY_PROPERTY_JUMP_VELOCITY_Y,
	ENTITY_PROPERTY_JUMP_VELOCITY_Z,
	ENTITY_PROPERTY_KNOCKDOWN_COUNT,
	ENTITY_PROPERTY_KNOCKDOWN_TIME,
	ENTITY_PROPERTY_LAST_DAMAGE_TYPE,
	ENTITY_PROPERTY_LAST_HIT,
	ENTITY_PROPERTY_LIFESPAN,
	ENTITY_PROPERTY_LINK,
	ENTITY_PROPERTY_MODEL,
	ENTITY_PROPERTY_MODEL_DATA,
	ENTITY_PROPERTY_MODEL_DEFAULT,
	ENTITY_PROPERTY_MOVE_TIME,
	ENTITY_PROPERTY_MOVE_X,
	ENTITY_PROPERTY_MOVE_Z,
	ENTITY_PROPERTY_MP,
	ENTITY_PROPERTY_MP_CHARGE_TIME,
	ENTITY_PROPERTY_MP_OLD,
	ENTITY_PROPERTY_MP_TIME,
	ENTITY_PROPERTY_NAME,
	ENTITY_PROPERTY_NEXT_ATTACK_TIME,
	ENTITY_PROPERTY_NEXT_HIT_TIME,
	ENTITY_PROPERTY_NOGRAB,
	ENTITY_PROPERTY_NOGRAB_DEFAULT,
	ENTITY_PROPERTY_OBSTRUCTED,
	ENTITY_PROPERTY_OBSTRUCTION_OVERHEAD,
	ENTITY_PROPERTY_OFFENSE_COLLECTION,
	ENTITY_PROPERTY_OPPONENT,
	ENTITY_PROPERTY_OWNER,
	ENTITY_PROPERTY_PARENT,
	ENTITY_PROPERTY_PATH_OBSTRUCTED_WAIT,
	ENTITY_PROPERTY_PAUSE_TIME,
	ENTITY_PROPERTY_PLATFORM_LAND,
	ENTITY_PROPERTY_PLAYER_INDEX,
	ENTITY_PROPERTY_POSITION_BASE,
	ENTITY_PROPERTY_POSITION_BASE_ALTERNATE,
	ENTITY_PROPERTY_POSITION_DIRECTION,
	ENTITY_PROPERTY_POSITION_X,
	ENTITY_PROPERTY_POSITION_Y,
	ENTITY_PROPERTY_POSITION_Z,
	ENTITY_PROPERTY_PROJECTILE_PRIME,
	ENTITY_PROPERTY_RECURSIVE_DAMAGE,
	ENTITY_PROPERTY_RELEASE_TIME,
	ENTITY_PROPERTY_RISE_ATTACK_DELAY,
	ENTITY_PROPERTY_RISE_ATTACK_TIME,
	ENTITY_PROPERTY_RISE_DELAY,
	ENTITY_PROPERTY_RISE_STATE,
	ENTITY_PROPERTY_RUN_STATE,
	ENTITY_PROPERTY_RUSH,
	ENTITY_PROPERTY_SCRIPT_COLLECTION,
	ENTITY_PROPERTY_SEAL_ENERGY,
	ENTITY_PROPERTY_SEAL_TIME,
	ENTITY_PROPERTY_SLEEP_TIME,
	ENTITY_PROPERTY_SORT_ID,
	ENTITY_PROPERTY_SPACE_OTHER,
	ENTITY_PROPERTY_SPAWN_TYPE,
	ENTITY_PROPERTY_SPEED_MULTIPLIER,
	ENTITY_PROPERTY_STALL_TIME,
	ENTITY_PROPERTY_THINK_TIME,
	ENTITY_PROPERTY_TIMESTAMP,
	ENTITY_PROPERTY_TO_COST,
	ENTITY_PROPERTY_TOSS_TIME,
	ENTITY_PROPERTY_TURN_STATE,
	ENTITY_PROPERTY_TURN_TIME,
	ENTITY_PROPERTY_UPDATE_MARK,
	ENTITY_PROPERTY_VELOCITY_X,
	ENTITY_PROPERTY_VELOCITY_Y,
	ENTITY_PROPERTY_VELOCITY_Z,
	ENTITY_PROPERTY_WALK_STATE,
	ENTITY_PROPERTY_WAYPOINT_COLLECTION,
	ENTITY_PROPERTY_WAYPOINT_COUNT,
	ENTITY_PROPERTY_WEAPON_ITEM,
	ENTITY_PROPERTY_WEAPON_STATE,
	ENTITY_PROPERTY_END,
} e_entity_properties;

HRESULT openbor_get_entity_property(ScriptVariant **varlist, ScriptVariant **pretvar, int paramCount);
HRESULT openbor_set_entity_property(ScriptVariant **varlist, ScriptVariant **pretvar, int paramCount);

HRESULT openbor_get_attack_id_value(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);
HRESULT openbor_set_attack_id_value(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);

