#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "./Monster.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class HumanoidMonster : Monster {

public:
    static long MAX_WEARING_ARMOR_CHANCE;
    static long MAX_PICKUP_LOOT_CHANCE;
    static long MAX_ENCHANTED_ARMOR_CHANCE;
    static long MAX_ENCHANTED_WEAPON_CHANCE;

    virtual ~HumanoidMonster();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void doHurtTarget(Actor *);

    HumanoidMonster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
