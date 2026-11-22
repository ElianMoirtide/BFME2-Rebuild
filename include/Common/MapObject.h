#pragma once
#ifndef BFME2_MAPOBJECT_H
#define BFME2_MAPOBJECT_H

#include <stddef.h>
#include "Common/GameType.h"

class ThingTemplate;

class MapObject
{
public:
	const ThingTemplate *getThingTemplate() const;

	unsigned char m_pad00[0x18];
	ThingTemplate *m_thingTemplate;
};

typedef char MapObjectThingTemplateOffset[(offsetof(MapObject, m_thingTemplate) == 0x18) ? 1 : -1];

#endif
