#pragma once



class AgeableComponent {

public:
    AgeableComponent(AgeableComponent &&); // _ZN16AgeableComponentC2EOS_
    void setAge(int); // _ZN16AgeableComponent6setAgeEi
    void getAge()const; // _ZNK16AgeableComponent6getAgeEv
    void addAdditionalSaveData(CompoundTag &)const; // _ZNK16AgeableComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN16AgeableComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN16AgeableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
};
