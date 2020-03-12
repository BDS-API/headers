#pragma once

#include "ITickingSystem.h"


class EntitySensorSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~EntitySensorSystem();
    EntitySensorSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, EntitySensorComponent &); //TODO: incomplete function definition
};
