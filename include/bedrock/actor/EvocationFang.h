#pragma once

#include "Actor.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "Mob.h"
#include "unmapped/ActorDefinitionGroup.h"


class EvocationFang : Actor {

public:
    virtual void getLifeSpan()const;
    virtual void getSourceUniqueID()const;
    virtual void getShadowRadius()const;
    virtual void normalTick();
    ~EvocationFang();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    EvocationFang(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void dealDamageTo(Mob &);
};
