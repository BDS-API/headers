#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class ShulkerBullet : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    ShulkerBullet::~ShulkerBullet()
    virtual void normalTick();
    virtual bool isPickable();
    virtual bool isOnFire()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    ShulkerBullet(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
