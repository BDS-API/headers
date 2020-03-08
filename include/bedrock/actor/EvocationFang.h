#pragma once

#include "../../unmapped/ActorDefinitionGroup"


class EvocationFang : Actor {

public:
    virtual EvocationFang::~EvocationFang();
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void getSourceUniqueID(void)const;
    virtual void getLifeSpan(void)const;

    EvocationFang(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void dealDamageTo(Mob &);
};
