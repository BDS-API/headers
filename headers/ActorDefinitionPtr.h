#pragma once

class ActorDefinitionPtr {

public:
    static long ActorDefinitionPtr::NONE;


    void onGroupDestroyed(void);
    void ActorDefinitionPtr(void);
    void ActorDefinitionPtr(ActorDefinitionGroup &, ActorDefinition &);
    void onGroupReloaded(void);
    void ActorDefinitionPtr(ActorDefinitionPtr&&);
    void _move(ActorDefinitionPtr&&);
    void ActorDefinitionPtr(ActorDefinitionPtr const&);
    void _deref(void);
};
