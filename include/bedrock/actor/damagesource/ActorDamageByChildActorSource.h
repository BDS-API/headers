#pragma once

#include <string>
#include "ActorDamageByActorSource.h"


class ActorDamageByChildActorSource : public ActorDamageByActorSource {

public:
    virtual ~ActorDamageByChildActorSource(); // _ZN29ActorDamageByChildActorSourceD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isChildEntitySource()const; // _ZNK29ActorDamageByChildActorSource19isChildEntitySourceEv
    virtual void getDeathMessage(std::string, Actor *)const; // _ZNK29ActorDamageByChildActorSource15getDeathMessageENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP5Actor
    virtual void getDamagingEntityIsCreative()const; // _ZNK29ActorDamageByChildActorSource27getDamagingEntityIsCreativeEv
    virtual void getDamagingEntityIsWorldBuilder()const; // _ZNK29ActorDamageByChildActorSource31getDamagingEntityIsWorldBuilderEv
    virtual void getDamagingEntityUniqueID()const; // _ZNK29ActorDamageByChildActorSource25getDamagingEntityUniqueIDEv
    virtual void getDamagingEntityType()const; // _ZNK29ActorDamageByChildActorSource21getDamagingEntityTypeEv
    virtual void getDamagingEntityCategories()const; // _ZNK29ActorDamageByChildActorSource27getDamagingEntityCategoriesEv
    virtual void clone()const; // _ZNK29ActorDamageByChildActorSource5cloneEv
//    ActorDamageByChildActorSource(Actor &, Actor &, long); //TODO: incomplete function definition // _ZN29ActorDamageByChildActorSourceC2ER5ActorS1_16ActorDamageCause
//    ActorDamageByChildActorSource(BlockSource &, long); //TODO: incomplete function definition // _ZN29ActorDamageByChildActorSourceC2ER11BlockSource16ActorDamageCause
};
