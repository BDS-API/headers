#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class EvocationFang : Actor {

public:
    virtual EvocationFang::~EvocationFang()
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void getSourceUniqueID()const;
    virtual void getLifeSpan()const;

    EvocationFang(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void dealDamageTo(Mob &);
};
