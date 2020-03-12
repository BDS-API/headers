#pragma once



class BlockBreakSensorComponent {

public:
    BlockBreakSensorComponent();
    ~BlockBreakSensorComponent();
    bool hasValidListener()const;
    void getBlockSets()const;
    void updateRadius(float);
    BlockBreakSensorComponent(BlockBreakSensorComponent &&);
    void updateSensorPos(Vec3 const&);
    void initialize(Actor &);
};
