#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class ShulkerBullet : Actor {

public:
    virtual void normalTick();
    virtual bool isOnFire()const;
    ~ShulkerBullet();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual bool isPickable();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ShulkerBullet(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
