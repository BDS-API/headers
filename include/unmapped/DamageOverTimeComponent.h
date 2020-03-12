#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/Actor.h"


class DamageOverTimeComponent {

public:
    void addAdditionalSaveData(CompoundTag &)const;
    DamageOverTimeComponent(DamageOverTimeComponent &&);
    void setDamageTime(int);
    void getHurtValue()const;
    void getDamageTimeInterval()const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getDamageTime()const;
};
