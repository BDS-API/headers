#pragma once

#include <string>
#include "ActorDamageSource.h"


class ActorDamageByBlockSource : ActorDamageSource {

public:
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void clone()const;
    ~ActorDamageByBlockSource();
    virtual bool isBlockSource()const;
    void getBlock()const;
//  ActorDamageByBlockSource(ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageByBlockSource(Block const&, ActorDamageCause); //TODO: incomplete function definition
};
