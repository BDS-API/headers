#pragma once

#include <string>
#include "ActorDamageSource.h"


class ActorDamageByBlockSource : public ActorDamageSource {

public:
    virtual ~ActorDamageByBlockSource(); // _ZN24ActorDamageByBlockSourceD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isBlockSource()const; // _ZNK24ActorDamageByBlockSource13isBlockSourceEv
    virtual void getDeathMessage(std::string, Actor *)const; // _ZNK24ActorDamageByBlockSource15getDeathMessageENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP5Actor
    virtual void clone()const; // _ZNK24ActorDamageByBlockSource5cloneEv
//    ActorDamageByBlockSource(Block const&, long); //TODO: incomplete function definition // _ZN24ActorDamageByBlockSourceC2ERK5Block16ActorDamageCause
//    ActorDamageByBlockSource(long); //TODO: incomplete function definition // _ZN24ActorDamageByBlockSourceC2E16ActorDamageCause
    void getBlock()const; // _ZNK24ActorDamageByBlockSource8getBlockEv
};
