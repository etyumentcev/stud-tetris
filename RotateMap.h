#ifndef FACTMAP_H
#define FACTMAP_H

#include <map>
#include"RotateFabric.h"
#include"RotateLFig.h"
#include"RotateTFig.h"
#include"RotateZFig.h"
#include"RotateSq.h"
#include"RotateLine.h"



class RotateMap
{
public:
	RotateMap();
	map <int, RotateFabric*>rotation;
	~RotateMap();
};

#endif