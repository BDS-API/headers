#pragma once

#include "Fireball.h"


class WitherSkull : Fireball {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN11WitherSkull20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~WitherSkull(); // _ZN11WitherSkullD2Ev
    virtual bool isPickable(); // _ZN11WitherSkull10isPickableEv
    virtual bool isOnFire()const; // _ZNK11WitherSkull8isOnFireEv
    virtual bool canDestroyBlock(Block const&)const; // _ZNK11WitherSkull15canDestroyBlockERK5Block
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN11WitherSkull5_hurtERK17ActorDamageSourceibb
    virtual void getInertia(); // _ZN11WitherSkull10getInertiaEv
    WitherSkull(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN11WitherSkullC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setDangerous(bool); // _ZN11WitherSkull12setDangerousEb
    bool isDangerous(); // _ZN11WitherSkull11isDangerousEv
};
