#include "tb_defines.hpp"
//Mission:
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,    {2}      	, {}    , 1      , {}        , 0    , "%3" },

{ 2, TEAM_BLUE, 	SPAWN_NEVER,    {1,3}      	, {}   	, 1      , {}        , 0    , "Command Headquarters" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {2,4}  		, {}    , 1      , {}        , 0    , "Nadezhdino Outskirts" },

{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {3,5}      	, {}   	, 1      , {}        , 0    , "Radar" },

{ 5, TEAM_BLUE, 	SPAWN_NEVER,    {4,6}     , {}   	, 1      , {}        , 0    , "Bus Stop" },

{ 6, TEAM_NEUTRAL, 		SPAWN_NEVER,    {5,7}		, {}    , 1      , {}        , 0    , "Cherno North" },

{ 7, TEAM_NEUTRAL, 		SPAWN_NEVER ,    {6,8}      	, {}    , 1      , {}        , 0    , "City Hall" },

{ 8, TEAM_NEUTRAL, 		SPAWN_NEVER,    {7,9}		, {}    , 1      , {}        , 0    , "Factory" },

{ 9, TEAM_RED, 	SPAWN_NEVER ,    {8,10}      	, {}    , 1      , {}        , 0    , "Gas Station" },

{ 10, TEAM_RED, 		SPAWN_NEVER,    {9,11}		, {}    , 1      , {}        , 0    , "Airstrip" },

{ 11, TEAM_RED, 		SPAWN_NEVER,    {10,12}		, {}    , 1      , {}        , 0    , "Balota Outskirts" },

{ 12, TEAM_RED, 		SPAWN_NEVER,    {11,13}		, {}    , 1      , {}        , 0    , "Logistic Headquarters" },

{ 13, TEAM_RED, 		SPAWN_XRAY,    {12}		, {}    , 1      , {}        , 0    , "%3" },

{ 14, TEAM_BLUE, 		SPAWN_LARGEFB,    {}		, {}    , 1      , {}        , 0    , "Air Base" },

{ 15, TEAM_RED, 		SPAWN_LARGEFB,    {}		, {}    , 1      , {}        , 0    , "Air Base" },

{ 16, TEAM_BLUE, 		SPAWN_INSTANT,    {}		, {}    , 1      , {1,5}        , 2    , "FB" },

{ 17, TEAM_RED, 		SPAWN_INSTANT,    {}		, {}    , 1      , {9,13}        , 2    , "FB" }



};
