#pragma once

#include "../../../unmapped/EntitySensorComponent"
#include "../../actor/unmapped/ActorComponent"
#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"


class EntitySensorSystem : ITickingSystem {

public:
    virtual EntitySensorSystem::~EntitySensorSystem()
    virtual void tick(EntityRegistry &);

    EntitySensorSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, EntitySensorComponent &);
};
