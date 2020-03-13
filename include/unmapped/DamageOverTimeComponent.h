#pragma once



class DamageOverTimeComponent {

public:
    DamageOverTimeComponent(DamageOverTimeComponent &&); // _ZN23DamageOverTimeComponentC2EOS_
    void addAdditionalSaveData(CompoundTag &)const; // _ZNK23DamageOverTimeComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN23DamageOverTimeComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void getHurtValue()const; // _ZNK23DamageOverTimeComponent12getHurtValueEv
    void getDamageTimeInterval()const; // _ZNK23DamageOverTimeComponent21getDamageTimeIntervalEv
    void getDamageTime()const; // _ZNK23DamageOverTimeComponent13getDamageTimeEv
    void setDamageTime(int); // _ZN23DamageOverTimeComponent13setDamageTimeEi
};
