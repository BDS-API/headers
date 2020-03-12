#pragma once

#include "AbstractArrow.h"


class ThrownTrident : AbstractArrow {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isEnchanted()const;
    ~ThrownTrident();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void despawn();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _getPickupItem()const;
    virtual void normalTick();
    virtual void outOfWorld();
    virtual void playerTouch(Player &);
    void returnWithLoyalty(int);
    void getPickupItem()const;
    ThrownTrident(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getClientSideReturnTridentTickCount()const;
    void setTridentItem(ItemStack const&);
};
