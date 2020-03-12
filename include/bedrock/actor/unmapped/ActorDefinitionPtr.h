#pragma once

#include "ActorDefinitionGroup.h"
#include "../../definition/ActorDefinition.h"


class ActorDefinitionPtr {

public:
    static long NONE;

    void operator->()const;
    ActorDefinitionPtr();
    void operator->();
    void onGroupDestroyed();
    void _deref();
    ActorDefinitionPtr(ActorDefinitionPtr &&);
    ~ActorDefinitionPtr();
    void operator*();
    void onGroupReloaded();
    ActorDefinitionPtr(ActorDefinitionGroup &, ActorDefinition &);
    ActorDefinitionPtr(ActorDefinitionPtr const&);
    void _move(ActorDefinitionPtr &&);
};
