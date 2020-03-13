#pragma once



class GrowsCropComponent {

public:
    GrowsCropComponent(GrowsCropComponent &&); // _ZN18GrowsCropComponentC2EOS_
    void addAdditionalSaveData(CompoundTag &); // _ZN18GrowsCropComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN18GrowsCropComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    GrowsCropComponent(); // _ZN18GrowsCropComponentC2Ev
};
