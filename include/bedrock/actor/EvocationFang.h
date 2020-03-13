#pragma once

#include "Actor.h"


class EvocationFang : Actor {

public:
    ~EvocationFang(); // _ZN13EvocationFangD2Ev
    virtual void normalTick(); // _ZN13EvocationFang10normalTickEv
    virtual void getShadowRadius()const; // _ZNK13EvocationFang15getShadowRadiusEv
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN13EvocationFang17handleEntityEventE10ActorEventi
    virtual void getSourceUniqueID()const; // _ZNK13EvocationFang17getSourceUniqueIDEv
    virtual void getLifeSpan()const; // _ZNK13EvocationFang11getLifeSpanEv
    EvocationFang(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13EvocationFangC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void dealDamageTo(Mob &); // _ZN13EvocationFang12dealDamageToER3Mob
};
