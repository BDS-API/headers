#pragma once

#include "../Actor.h"
#include "../../../unmapped/Block.h"
#include "ActorDamageSource.h"
#include <string>


class ActorDamageByBlockSource : ActorDamageSource {

public:
    virtual void clone()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    ~ActorDamageByBlockSource();
    virtual bool isBlockSource()const;
    void getBlock()const;
//  ActorDamageByBlockSource(ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageByBlockSource(Block const&, ActorDamageCause); //TODO: incomplete function definition
};
