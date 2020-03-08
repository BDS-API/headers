#pragma once

#include "../bedrock/level/Level"
#include "../bedrock/util/Vec3"
#include "../bedrock/Scheduler"


class OverworldDimension : Dimension {

public:
    virtual OverworldDimension::~OverworldDimension()
    virtual void createGenerator();
    virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const;

    OverworldDimension(Level &, Scheduler &);
};
