#pragma once

#include <string>
#include "ActorDamageSource.h"


class RemovedActorDamageByType : ActorDamageSource {

public:
    ~RemovedActorDamageByType(); // _ZN24RemovedActorDamageByTypeD2Ev
    virtual void getDeathMessage(std::string, Actor *)const; // _ZNK24RemovedActorDamageByType15getDeathMessageENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP5Actor
    virtual void getEntityType()const; // _ZNK24RemovedActorDamageByType13getEntityTypeEv
    virtual void clone()const; // _ZNK24RemovedActorDamageByType5cloneEv
//  RemovedActorDamageByType(ActorDamageCause, ActorType); //TODO: incomplete function definition // _ZN24RemovedActorDamageByTypeC2E16ActorDamageCause9ActorType
};
