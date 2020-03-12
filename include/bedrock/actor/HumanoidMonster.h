#pragma once

#include "Monster.h"


class HumanoidMonster : Monster {

public:
    static long MAX_WEARING_ARMOR_CHANCE;
    static long MAX_PICKUP_LOOT_CHANCE;
    static long MAX_ENCHANTED_ARMOR_CHANCE;
    static long MAX_ENCHANTED_WEAPON_CHANCE;

    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void doHurtTarget(Actor *);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~HumanoidMonster();
    HumanoidMonster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
