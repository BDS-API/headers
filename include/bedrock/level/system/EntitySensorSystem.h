#pragma once

class EntitySensorSystem : ITickingSystem {

public:
    virtual EntitySensorSystem::~EntitySensorSystem();
    virtual void tick(EntityRegistry &);

    EntitySensorSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, EntitySensorComponent &);
};
