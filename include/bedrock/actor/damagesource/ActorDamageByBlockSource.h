#pragma once

#include "../../../unmapped/Block"
#include "../Actor"


class ActorDamageByBlockSource : ActorDamageSource {

public:
    virtual ActorDamageByBlockSource::~ActorDamageByBlockSource();
    virtual bool isBlockSource(void)const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void clone(void)const;

    ActorDamageByBlockSource(Block const&, ActorDamageCause);
    ActorDamageByBlockSource(ActorDamageCause);
    void getBlock(void)const;
};
