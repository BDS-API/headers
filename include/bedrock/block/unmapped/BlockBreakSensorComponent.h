#pragma once

#include "../../actor/Actor.h"
#include "../../util/Vec3.h"


class BlockBreakSensorComponent {

public:
    void updateSensorPos(Vec3 const&);
    BlockBreakSensorComponent(BlockBreakSensorComponent &&);
    void initialize(Actor &);
    void updateRadius(float);
    void getBlockSets()const;
    BlockBreakSensorComponent();
    ~BlockBreakSensorComponent();
    bool hasValidListener()const;
};
