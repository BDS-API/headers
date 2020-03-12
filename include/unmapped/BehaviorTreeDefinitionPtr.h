#pragma once

#include "BehaviorTreeGroup.h"
#include "../bedrock/definition/BehaviorTreeDefinition.h"


class BehaviorTreeDefinitionPtr {

public:
    static long NONE;

    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr &&);
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr const&);
    BehaviorTreeDefinitionPtr(BehaviorTreeGroup &, BehaviorTreeDefinition &);
    void onGroupDestroyed();
    void _move(BehaviorTreeDefinitionPtr &&);
    BehaviorTreeDefinitionPtr();
    void _deref();
    void operator->();
    ~BehaviorTreeDefinitionPtr();
};
