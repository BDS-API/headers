#pragma once

#include "../../util/Vec3.h"
#include "./BlockBreakSensorComponent.h"
#include "../../actor/Actor.h"


class BlockBreakSensorComponent {

public:

    bool hasValidListener()const;
    ~BlockBreakSensorComponent();
    BlockBreakSensorComponent(BlockBreakSensorComponent &&);
    void initialize(Actor &);
    void updateSensorPos(Vec3 const&);
    void updateRadius(float);
    void getBlockSets()const;
    BlockBreakSensorComponent();
};
