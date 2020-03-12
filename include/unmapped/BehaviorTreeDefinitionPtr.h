#pragma once



class BehaviorTreeDefinitionPtr {

public:
    static long NONE;

    void _move(BehaviorTreeDefinitionPtr &&);
    BehaviorTreeDefinitionPtr(BehaviorTreeGroup &, BehaviorTreeDefinition &);
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr const&);
    BehaviorTreeDefinitionPtr();
    ~BehaviorTreeDefinitionPtr();
    void operator->();
    void onGroupDestroyed();
    void _deref();
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr &&);
};
