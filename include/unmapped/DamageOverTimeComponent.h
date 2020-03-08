#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class DamageOverTimeComponent {

public:

    DamageOverTimeComponent(DamageOverTimeComponent&&);
    void addAdditionalSaveData(CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHurtValue()const;
    void getDamageTimeInterval()const;
    void getDamageTime()const;
    void setDamageTime(int);
};
