#pragma once

#include "../Actor"
#include "../../../unmapped/Block"


class ActorDamageByBlockSource : ActorDamageSource {

public:
    virtual ActorDamageByBlockSource::~ActorDamageByBlockSource()
    virtual bool isBlockSource()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void clone()const;

    ActorDamageByBlockSource(Block const&, ActorDamageCause);
    ActorDamageByBlockSource(ActorDamageCause);
    void getBlock()const;
};
