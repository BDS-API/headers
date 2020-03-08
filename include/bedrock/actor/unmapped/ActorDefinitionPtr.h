#pragma once

#include "../../definition/ActorDefinition"


class ActorDefinitionPtr {

public:
    static long NONE;


    void onGroupDestroyed();
    ActorDefinitionPtr(void);
    ActorDefinitionPtr(ActorDefinitionGroup &, ActorDefinition &);
    void onGroupReloaded();
    ActorDefinitionPtr(ActorDefinitionPtr&&);
    void _move(ActorDefinitionPtr&&);
    ActorDefinitionPtr(ActorDefinitionPtr const&);
    void _deref();
};
