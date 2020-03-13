#pragma once



class BlockBreakSensorComponent {

public:
    bool hasValidListener()const; // _ZNK25BlockBreakSensorComponent16hasValidListenerEv
    ~BlockBreakSensorComponent(); // _ZN25BlockBreakSensorComponentD2Ev
    BlockBreakSensorComponent(BlockBreakSensorComponent &&); // _ZN25BlockBreakSensorComponentC2EOS_
    void initialize(Actor &); // _ZN25BlockBreakSensorComponent10initializeER5Actor
    void updateSensorPos(Vec3 const&); // _ZN25BlockBreakSensorComponent15updateSensorPosERK4Vec3
    void updateRadius(float); // _ZN25BlockBreakSensorComponent12updateRadiusEf
    void getBlockSets()const; // _ZNK25BlockBreakSensorComponent12getBlockSetsEv
    BlockBreakSensorComponent(); // _ZN25BlockBreakSensorComponentC2Ev
};
