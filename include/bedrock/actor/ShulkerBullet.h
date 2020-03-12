#pragma once

#include "Actor.h"


class ShulkerBullet : Actor {

public:
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual bool isOnFire()const;
    ~ShulkerBullet();
    virtual void normalTick();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool isPickable();
    ShulkerBullet(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
