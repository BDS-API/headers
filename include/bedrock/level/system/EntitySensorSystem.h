#pragma once

#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"
#include "../../../unmapped/EntitySensorComponent"
#include "../../actor/unmapped/ActorComponent"


class EntitySensorSystem : ITickingSystem {

public:
    EntitySensorSystem::~EntitySensorSystem()
    virtual void tick(EntityRegistry &);

    EntitySensorSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, EntitySensorComponent &);
};
