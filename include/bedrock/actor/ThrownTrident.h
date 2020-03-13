#pragma once

#include "AbstractArrow.h"


class ThrownTrident : AbstractArrow {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN13ThrownTrident15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~ThrownTrident(); // _ZN13ThrownTridentD2Ev
    virtual void normalTick(); // _ZN13ThrownTrident10normalTickEv
    virtual void playerTouch(Player &); // _ZN13ThrownTrident11playerTouchER6Player
    virtual bool isEnchanted()const; // _ZNK13ThrownTrident11isEnchantedEv
    virtual void despawn(); // _ZN13ThrownTrident7despawnEv
    virtual void outOfWorld(); // _ZN13ThrownTrident10outOfWorldEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN13ThrownTrident5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN13ThrownTrident22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN13ThrownTrident21addAdditionalSaveDataER11CompoundTag
    virtual void shoot(Vec3 const&, float, float, Vec3 const&); // _ZN13ThrownTrident5shootERK4Vec3ffS2_
    virtual void _getPickupItem()const; // _ZNK13ThrownTrident14_getPickupItemEv
    ThrownTrident(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13ThrownTridentC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void returnWithLoyalty(int); // _ZN13ThrownTrident17returnWithLoyaltyEi
    void getClientSideReturnTridentTickCount()const; // _ZNK13ThrownTrident35getClientSideReturnTridentTickCountEv
    void getPickupItem()const; // _ZNK13ThrownTrident13getPickupItemEv
    void setTridentItem(ItemStack const&); // _ZN13ThrownTrident14setTridentItemERK9ItemStack
};
