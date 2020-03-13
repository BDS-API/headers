#pragma once

#include "Monster.h"


class HumanoidMonster : Monster {

public:
    static long MAX_WEARING_ARMOR_CHANCE;
    static long MAX_PICKUP_LOOT_CHANCE;
    static long MAX_ENCHANTED_ARMOR_CHANCE;
    static long MAX_ENCHANTED_WEAPON_CHANCE;

    ~HumanoidMonster(); // _ZN15HumanoidMonsterD2Ev
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN15HumanoidMonster22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN15HumanoidMonster21addAdditionalSaveDataER11CompoundTag
    virtual void doHurtTarget(Actor *); // _ZN15HumanoidMonster12doHurtTargetEP5Actor
    HumanoidMonster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN15HumanoidMonsterC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
