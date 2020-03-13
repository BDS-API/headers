#pragma once



class ExplodeComponent {

public:
    ExplodeComponent(ExplodeComponent &&); // _ZN16ExplodeComponentC2EOS_
    void initFromDefinition(Actor &, ExplodeDefinition const&); // _ZN16ExplodeComponent18initFromDefinitionER5ActorRK17ExplodeDefinition
    void addAdditionalSaveData(CompoundTag &); // _ZN16ExplodeComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN16ExplodeComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void explode(Actor &, Vec3 const&); // _ZN16ExplodeComponent7explodeER5ActorRK4Vec3
    void getFuseLength()const; // _ZNK16ExplodeComponent13getFuseLengthEv
    void setFuseLength(int); // _ZN16ExplodeComponent13setFuseLengthEi
    void getInitialFuseLength()const; // _ZNK16ExplodeComponent20getInitialFuseLengthEv
    void getIsFuseLit()const; // _ZNK16ExplodeComponent12getIsFuseLitEv
    void setAllowUnderwater(bool); // _ZN16ExplodeComponent18setAllowUnderwaterEb
    bool isFuseLit()const; // _ZNK16ExplodeComponent9isFuseLitEv
    ExplodeComponent(); // _ZN16ExplodeComponentC2Ev
};
