#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/Scheduler.h"
#include "./Dimension.h"
#include "../bedrock/level/Level.h"


class OverworldDimension : Dimension {

public:
    virtual ~OverworldDimension();
    virtual void createGenerator();
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition

    OverworldDimension(Level &, Scheduler &);
};
