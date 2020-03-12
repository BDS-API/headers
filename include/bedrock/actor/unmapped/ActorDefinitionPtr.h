#pragma once



class ActorDefinitionPtr {

public:
    static long NONE;

    void _move(ActorDefinitionPtr &&);
    ~ActorDefinitionPtr();
    void operator*();
    void _deref();
    void operator->()const;
    ActorDefinitionPtr();
    void onGroupDestroyed();
    ActorDefinitionPtr(ActorDefinitionPtr const&);
    void onGroupReloaded();
    void operator->();
    ActorDefinitionPtr(ActorDefinitionPtr &&);
    ActorDefinitionPtr(ActorDefinitionGroup &, ActorDefinition &);
};
