#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class ShulkerBullet : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~ShulkerBullet();
    virtual void normalTick();
    virtual bool isPickable();
    virtual bool isOnFire()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    ShulkerBullet(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
