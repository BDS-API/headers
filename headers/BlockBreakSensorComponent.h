#pragma once

class BlockBreakSensorComponent {

public:

    bool hasValidListener(void)const;
    void BlockBreakSensorComponent(BlockBreakSensorComponent&&);
    void initialize(Actor &);
    void updateSensorPos(Vec3 const&);
    void updateRadius(float);
    void getBlockSets(void)const;
    void BlockBreakSensorComponent(void);
};
