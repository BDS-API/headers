#pragma once

#include <string>
#include "ActorDamageSource.h"


class ActorDamageByActorSource : public ActorDamageSource {

public:
    virtual ~ActorDamageByActorSource(); // _ZN24ActorDamageByActorSourceD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isEntitySource()const; // _ZNK24ActorDamageByActorSource14isEntitySourceEv
    virtual void getDeathMessage(std::string, Actor *)const; // _ZNK24ActorDamageByActorSource15getDeathMessageENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP5Actor
    virtual void getIsCreative()const; // _ZNK24ActorDamageByActorSource13getIsCreativeEv
    virtual void getIsWorldBuilder()const; // _ZNK24ActorDamageByActorSource17getIsWorldBuilderEv
    virtual void getEntityUniqueID()const; // _ZNK24ActorDamageByActorSource17getEntityUniqueIDEv
    virtual void getEntityType()const; // _ZNK24ActorDamageByActorSource13getEntityTypeEv
    virtual void getEntityCategories()const; // _ZNK24ActorDamageByActorSource19getEntityCategoriesEv
    virtual void getDamagingEntityUniqueID()const; // _ZNK24ActorDamageByActorSource25getDamagingEntityUniqueIDEv
    virtual void getDamagingEntityType()const; // _ZNK24ActorDamageByActorSource21getDamagingEntityTypeEv
    virtual void clone()const; // _ZNK24ActorDamageByActorSource5cloneEv
//    ActorDamageByActorSource(Actor &, long); //TODO: incomplete function definition // _ZN24ActorDamageByActorSourceC2ER5Actor16ActorDamageCause
//    ActorDamageByActorSource(BlockSource &, long); //TODO: incomplete function definition // _ZN24ActorDamageByActorSourceC2ER11BlockSource16ActorDamageCause
};
