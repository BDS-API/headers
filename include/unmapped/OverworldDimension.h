#pragma once

#include "Dimension.h"


class OverworldDimension : public Dimension {

public:
    virtual ~OverworldDimension(); // _ZN18OverworldDimensionD2Ev
    virtual void __fake_function0(); // fake
    virtual void createGenerator(); // _ZN18OverworldDimension15createGeneratorEv
    virtual void translatePosAcrossDimension__incomplete0(Vec3 const&, long)const; //TODO: incomplete function definition // _ZNK18OverworldDimension27translatePosAcrossDimensionERK4Vec311AutomaticIDI9DimensioniE
    OverworldDimension(Level &, Scheduler &); // _ZN18OverworldDimensionC2ER5LevelR9Scheduler
};
