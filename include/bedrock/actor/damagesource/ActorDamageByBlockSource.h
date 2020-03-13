#pragma once

#include <string>
#include "ActorDamageSource.h"


class ActorDamageByBlockSource : ActorDamageSource {

public:
    ~ActorDamageByBlockSource(); // _ZN24ActorDamageByBlockSourceD2Ev
    virtual bool isBlockSource()const; // _ZNK24ActorDamageByBlockSource13isBlockSourceEv
    virtual void getDeathMessage(std::string, Actor *)const; // _ZNK24ActorDamageByBlockSource15getDeathMessageENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP5Actor
    virtual void clone()const; // _ZNK24ActorDamageByBlockSource5cloneEv
//  ActorDamageByBlockSource(Block const&, ActorDamageCause); //TODO: incomplete function definition // _ZN24ActorDamageByBlockSourceC2ERK5Block16ActorDamageCause
//  ActorDamageByBlockSource(ActorDamageCause); //TODO: incomplete function definition // _ZN24ActorDamageByBlockSourceC2E16ActorDamageCause
    void getBlock()const; // _ZNK24ActorDamageByBlockSource8getBlockEv
};
