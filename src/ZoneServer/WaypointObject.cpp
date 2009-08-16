/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2008 The swgANH Team

---------------------------------------------------------------------------------------
*/

#include "MathLib/Quaternion.h"
#include "WaypointObject.h"


//=============================================================================

WaypointObject::WaypointObject() : Object()
{
	mType = ObjType_Waypoint;
	mCoords = Anh_Math::Vector3();
	mActive = false;
	mName = L"";
	mWPType = Waypoint_blue;
	mPlanetCRC = 0;
}

//=============================================================================

WaypointObject::~WaypointObject()
{
}

//=============================================================================

