#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "AbstractArrow.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../item/ItemStack.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class ThrownTrident : AbstractArrow {

public:
    virtual bool isEnchanted()const;
    virtual void outOfWorld();
    virtual void _getPickupItem()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~ThrownTrident();
    virtual void despawn();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void playerTouch(Player &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void normalTick();
    void getClientSideReturnTridentTickCount()const;
    void returnWithLoyalty(int);
    void getPickupItem()const;
    ThrownTrident(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setTridentItem(ItemStack const&);
};
