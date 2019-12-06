#pragma once

class SpawnActorSystem : ITickingSystem {

public:
    virtual ~SpawnActorSystem();
    virtual void tick(EntityRegistry &);

    void SpawnActorSystem(void);
    void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, SpawnActorComponent> &);
    void _spawnActor(Actor &, SpawnActorParameters const&);
};
