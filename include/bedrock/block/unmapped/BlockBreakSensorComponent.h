#pragma once

#include "../../util/Vec3"
#include "../../actor/Actor"


class BlockBreakSensorComponent {

public:

    bool hasValidListener()const;
    BlockBreakSensorComponent(BlockBreakSensorComponent&&);
    void initialize(Actor &);
    void updateSensorPos(Vec3 const&);
    void updateRadius(float);
    void getBlockSets()const;
    BlockBreakSensorComponent(void);
};
