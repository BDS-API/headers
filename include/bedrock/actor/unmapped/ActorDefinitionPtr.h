#pragma once



class ActorDefinitionPtr {

public:
    static long NONE;

    void operator->()const; // _ZNK18ActorDefinitionPtrptEv
    void operator->(); // _ZN18ActorDefinitionPtrptEv
    void onGroupDestroyed(); // _ZN18ActorDefinitionPtr16onGroupDestroyedEv
    ActorDefinitionPtr(); // _ZN18ActorDefinitionPtrC2Ev
    ActorDefinitionPtr(ActorDefinitionGroup &, ActorDefinition &); // _ZN18ActorDefinitionPtrC2ER20ActorDefinitionGroupR15ActorDefinition
    void onGroupReloaded(); // _ZN18ActorDefinitionPtr15onGroupReloadedEv
    ActorDefinitionPtr(ActorDefinitionPtr &&); // _ZN18ActorDefinitionPtrC2EOS_
    void _move(ActorDefinitionPtr &&); // _ZN18ActorDefinitionPtr5_moveEOS_
    ActorDefinitionPtr(ActorDefinitionPtr const&); // _ZN18ActorDefinitionPtrC2ERKS_
    void _deref(); // _ZN18ActorDefinitionPtr6_derefEv
    ~ActorDefinitionPtr(); // _ZN18ActorDefinitionPtrD2Ev
    void operator*(); // _ZN18ActorDefinitionPtrdeEv
};
