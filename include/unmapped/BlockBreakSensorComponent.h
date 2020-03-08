#pragma once

#include "../bedrock/actor/Actor"


class BlockBreakSensorComponent {

public:

    bool hasValidListener(void)const;
    BlockBreakSensorComponent(BlockBreakSensorComponent&&);
    void initialize(Actor &);
    void updateSensorPos(Vec3 const&);
    void updateRadius(float);
    void getBlockSets(void)const;
    BlockBreakSensorComponent(void);
};
