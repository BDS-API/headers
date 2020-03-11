#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "./Mob.h"


class EvocationFang : Actor {

public:
    virtual ~EvocationFang();
    virtual void normalTick();
    virtual void getShadowRadius()const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void getSourceUniqueID()const;
    virtual void getLifeSpan()const;

    EvocationFang(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void dealDamageTo(Mob &);
};
