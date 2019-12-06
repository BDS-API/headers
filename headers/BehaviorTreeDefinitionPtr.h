#pragma once

class BehaviorTreeDefinitionPtr {

public:
    static long BehaviorTreeDefinitionPtr::NONE;


    void BehaviorTreeDefinitionPtr(void);
    void BehaviorTreeDefinitionPtr(BehaviorTreeGroup &, BehaviorTreeDefinition &);
    void BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr&&);
    void _move(BehaviorTreeDefinitionPtr&&);
    void BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr const&);
    void _deref(void);
    void onGroupDestroyed(void);
};
