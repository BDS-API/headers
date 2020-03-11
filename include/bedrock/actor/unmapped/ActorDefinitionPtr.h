#pragma once

#include "../../definition/ActorDefinition.h"
#include "./ActorDefinitionPtr.h"
#include "./ActorDefinitionGroup.h"


class ActorDefinitionPtr {

public:
    static long NONE;


    void operator->()const;
    void operator->();
    void onGroupDestroyed();
    ActorDefinitionPtr();
    ActorDefinitionPtr(ActorDefinitionGroup &, ActorDefinition &);
    void onGroupReloaded();
    ActorDefinitionPtr(ActorDefinitionPtr &&);
    void _move(ActorDefinitionPtr &&);
    ActorDefinitionPtr(ActorDefinitionPtr const&);
    void _deref();
    ~ActorDefinitionPtr();
    void operator*();
};
