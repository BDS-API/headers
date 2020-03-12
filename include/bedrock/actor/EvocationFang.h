#pragma once

#include "Actor.h"


class EvocationFang : Actor {

public:
    virtual void normalTick();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    ~EvocationFang();
    virtual void getShadowRadius()const;
    virtual void getSourceUniqueID()const;
    virtual void getLifeSpan()const;
    void dealDamageTo(Mob &);
    EvocationFang(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
