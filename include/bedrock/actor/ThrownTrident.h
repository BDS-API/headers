#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../item/ItemStack.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "./AbstractArrow.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"
#include "./Player.h"


class ThrownTrident : AbstractArrow {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~ThrownTrident();
    virtual void normalTick();
    virtual void playerTouch(Player &);
    virtual bool isEnchanted()const;
    virtual void despawn();
    virtual void outOfWorld();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void _getPickupItem()const;

    ThrownTrident(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void returnWithLoyalty(int);
    void getClientSideReturnTridentTickCount()const;
    void getPickupItem()const;
    void setTridentItem(ItemStack const&);
};
