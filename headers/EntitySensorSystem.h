#pragma once

class EntitySensorSystem : ITickingSystem {

public:
    virtual ~EntitySensorSystem();
    virtual void tick(EntityRegistry &);

    void EntitySensorSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, EntitySensorComponent &);
};
