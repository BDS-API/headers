#pragma once

#include "ITickingSystem.h"


class EntitySensorSystem : ITickingSystem {

public:
    ~EntitySensorSystem(); // _ZN18EntitySensorSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN18EntitySensorSystem4tickER14EntityRegistry
    EntitySensorSystem(); // _ZN18EntitySensorSystemC2Ev
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, EntitySensorComponent &); //TODO: incomplete function definition // _ZN18EntitySensorSystem14_tickComponentER13EntityContextR13FlagComponentI15ActorTickedFlagER14ActorComponentR21EntitySensorComponent
};
