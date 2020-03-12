#pragma once

#include "Dimension.h"


class OverworldDimension : Dimension {

public:
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    virtual void createGenerator();
    ~OverworldDimension();
    OverworldDimension(Level &, Scheduler &);
};
