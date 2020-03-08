#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Actor"


class DamageOverTimeComponent {

public:

    DamageOverTimeComponent(DamageOverTimeComponent&&);
    void addAdditionalSaveData(CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHurtValue(void)const;
    void getDamageTimeInterval(void)const;
    void getDamageTime(void)const;
    void setDamageTime(int);
};
