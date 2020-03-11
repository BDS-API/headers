#pragma once

#include "./BehaviorTreeGroup.h"
#include "../bedrock/definition/BehaviorTreeDefinition.h"
#include "./BehaviorTreeDefinitionPtr.h"


class BehaviorTreeDefinitionPtr {

public:
    static long NONE;


    BehaviorTreeDefinitionPtr();
    BehaviorTreeDefinitionPtr(BehaviorTreeGroup &, BehaviorTreeDefinition &);
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr &&);
    void _move(BehaviorTreeDefinitionPtr &&);
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr const&);
    ~BehaviorTreeDefinitionPtr();
    void _deref();
    void onGroupDestroyed();
    void operator->();
};
