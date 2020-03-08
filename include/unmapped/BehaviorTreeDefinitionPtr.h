#pragma once

#include "../bedrock/definition/BehaviorTreeDefinition"


class BehaviorTreeDefinitionPtr {

public:
    static long NONE;


    BehaviorTreeDefinitionPtr(void);
    BehaviorTreeDefinitionPtr(BehaviorTreeGroup &, BehaviorTreeDefinition &);
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr&&);
    void _move(BehaviorTreeDefinitionPtr&&);
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr const&);
    void _deref();
    void onGroupDestroyed();
};
