#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"
#include "Monster.h"


class HumanoidMonster : Monster {

public:
    static long MAX_WEARING_ARMOR_CHANCE;
    static long MAX_PICKUP_LOOT_CHANCE;
    static long MAX_ENCHANTED_ARMOR_CHANCE;
    static long MAX_ENCHANTED_WEAPON_CHANCE;

    ~HumanoidMonster();
    virtual void doHurtTarget(Actor *);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    HumanoidMonster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
