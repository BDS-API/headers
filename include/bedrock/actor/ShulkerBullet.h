#pragma once

#include "Actor.h"


class ShulkerBullet : public Actor {

public:
    virtual void reloadHardcoded__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN13ShulkerBullet15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~ShulkerBullet(); // _ZN13ShulkerBulletD2Ev
    virtual void __fake_function0(); // fake
    virtual void normalTick(); // _ZN13ShulkerBullet10normalTickEv
    virtual bool isPickable(); // _ZN13ShulkerBullet10isPickableEv
    virtual bool isOnFire()const; // _ZNK13ShulkerBullet8isOnFireEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN13ShulkerBullet22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN13ShulkerBullet21addAdditionalSaveDataER11CompoundTag
    ShulkerBullet(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13ShulkerBulletC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
