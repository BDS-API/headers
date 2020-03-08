#pragma once

#include "../bedrock/Scheduler"
#include "../bedrock/util/Vec3"
#include "../bedrock/level/Level"


class OverworldDimension : Dimension {

public:
    OverworldDimension::~OverworldDimension()
    virtual void createGenerator();
    virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const;

    OverworldDimension(Level &, Scheduler &);
};
