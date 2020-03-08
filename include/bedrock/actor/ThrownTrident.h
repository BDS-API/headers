#pragma once

#include "damagesource/ActorDamageSource"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../item/ItemStack"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class ThrownTrident : AbstractArrow {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownTrident::~ThrownTrident()
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
