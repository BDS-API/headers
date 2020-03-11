#pragma once

#include "./ITickingSystem.h"
#include "../../actor/unmapped/ActorComponent.h"
#include "../../../unmapped/EntityRegistry.h"
#include "../../../unmapped/EntityContext.h"
#include "../../../unmapped/EntitySensorComponent.h"


class EntitySensorSystem : ITickingSystem {

public:
    virtual ~EntitySensorSystem();
    virtual void tick(EntityRegistry &);

    EntitySensorSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, EntitySensorComponent &); //TODO: incomplete function definition
};
