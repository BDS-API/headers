#pragma once

#include "Dimension.h"


class OverworldDimension : Dimension {

public:
    ~OverworldDimension(); // _ZN18OverworldDimensionD2Ev
    virtual void createGenerator(); // _ZN18OverworldDimension15createGeneratorEv
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition // _ZNK18OverworldDimension27translatePosAcrossDimensionERK4Vec311AutomaticIDI9DimensioniE
    OverworldDimension(Level &, Scheduler &); // _ZN18OverworldDimensionC2ER5LevelR9Scheduler
};
