#pragma once



class ActorDefinitionPtr {

public:
    static long NONE;


    void onGroupDestroyed(void);
    ActorDefinitionPtr(void);
    ActorDefinitionPtr(ActorDefinitionGroup &, ActorDefinition &);
    void onGroupReloaded(void);
    ActorDefinitionPtr(ActorDefinitionPtr&&);
    void _move(ActorDefinitionPtr&&);
    ActorDefinitionPtr(ActorDefinitionPtr const&);
    void _deref(void);
};
