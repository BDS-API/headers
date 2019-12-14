#pragma once

class ActorDamageByBlockSource : ActorDamageSource {

public:
    virtual ~ActorDamageByBlockSource();
    virtual bool isBlockSource(void)const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void clone(void)const;

    void ActorDamageByBlockSource(Block const&, ActorDamageCause);
    void ActorDamageByBlockSource(ActorDamageCause);
    void getBlock(void)const;
};
