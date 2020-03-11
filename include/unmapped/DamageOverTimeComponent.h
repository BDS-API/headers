#pragma once

#include "../bedrock/actor/Actor.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./DamageOverTimeComponent.h"


class DamageOverTimeComponent {

public:

    DamageOverTimeComponent(DamageOverTimeComponent &&);
    void addAdditionalSaveData(CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHurtValue()const;
    void getDamageTimeInterval()const;
    void getDamageTime()const;
    void setDamageTime(int);
};
