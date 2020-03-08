#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class HumanoidMonster : Monster {

public:
    static long MAX_WEARING_ARMOR_CHANCE;
    static long MAX_PICKUP_LOOT_CHANCE;
    static long MAX_ENCHANTED_ARMOR_CHANCE;
    static long MAX_ENCHANTED_WEAPON_CHANCE;

    HumanoidMonster::~HumanoidMonster()
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void doHurtTarget(Actor *);

    HumanoidMonster(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
