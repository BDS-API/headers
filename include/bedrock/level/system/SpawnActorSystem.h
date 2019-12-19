#pragma once

class SpawnActorSystem : ITickingSystem {

public:
    virtual SpawnActorSystem::~SpawnActorSystem();
    virtual void tick(EntityRegistry &);

    SpawnActorSystem(void);
    void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, SpawnActorComponent> &);
    void _spawnActor(Actor &, SpawnActorParameters const&);
};
