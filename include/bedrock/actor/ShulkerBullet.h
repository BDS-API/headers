#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class ShulkerBullet : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ShulkerBullet::~ShulkerBullet()
    virtual void normalTick();
    virtual bool isPickable();
    virtual bool isOnFire()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    ShulkerBullet(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
