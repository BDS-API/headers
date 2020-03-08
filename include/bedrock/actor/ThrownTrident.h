#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../item/ItemStack"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/DataLoadHelper"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class ThrownTrident : AbstractArrow {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    ThrownTrident::~ThrownTrident()
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
