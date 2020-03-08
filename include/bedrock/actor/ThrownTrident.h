#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../item/ItemStack"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/Vec3"


class ThrownTrident : AbstractArrow {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownTrident::~ThrownTrident();
    virtual void normalTick(void);
    virtual void playerTouch(Player &);
    virtual bool isEnchanted(void)const;
    virtual void despawn(void);
    virtual void outOfWorld(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void _getPickupItem(void)const;

    ThrownTrident(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void returnWithLoyalty(int);
    void getClientSideReturnTridentTickCount(void)const;
    void getPickupItem(void)const;
    void setTridentItem(ItemStack const&);
};
