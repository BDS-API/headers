#pragma once

#include "../../../unmapped/Block.h"
#include "../Actor.h"
#include "./ActorDamageSource.h"
#include <string>


class ActorDamageByBlockSource : ActorDamageSource {

public:
    virtual ~ActorDamageByBlockSource();
    virtual bool isBlockSource()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void clone()const;

//  ActorDamageByBlockSource(Block const&, ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageByBlockSource(ActorDamageCause); //TODO: incomplete function definition
    void getBlock()const;
};
