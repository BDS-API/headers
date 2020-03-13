#pragma once



class BehaviorTreeDefinitionPtr {

public:
    static long NONE;

    BehaviorTreeDefinitionPtr(); // _ZN25BehaviorTreeDefinitionPtrC2Ev
    BehaviorTreeDefinitionPtr(BehaviorTreeGroup &, BehaviorTreeDefinition &); // _ZN25BehaviorTreeDefinitionPtrC2ER17BehaviorTreeGroupR22BehaviorTreeDefinition
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr &&); // _ZN25BehaviorTreeDefinitionPtrC2EOS_
    void _move(BehaviorTreeDefinitionPtr &&); // _ZN25BehaviorTreeDefinitionPtr5_moveEOS_
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr const&); // _ZN25BehaviorTreeDefinitionPtrC2ERKS_
    ~BehaviorTreeDefinitionPtr(); // _ZN25BehaviorTreeDefinitionPtrD2Ev
    void _deref(); // _ZN25BehaviorTreeDefinitionPtr6_derefEv
    void onGroupDestroyed(); // _ZN25BehaviorTreeDefinitionPtr16onGroupDestroyedEv
    void operator->(); // _ZN25BehaviorTreeDefinitionPtrptEv
};
