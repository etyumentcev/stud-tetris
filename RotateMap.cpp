#include "RotateMap.h"


RotateMap::RotateMap()
{
	rotation.emplace(0, new RotateLFig());
	rotation.emplace(1, new RotateLine());
	rotation.emplace(2, new RotateSq());
	rotation.emplace(3, new RotateTFig());
	rotation.emplace(4, new RotateZFig());
}


RotateMap::~RotateMap()
{
}
