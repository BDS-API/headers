#pragma once

#include "../../../unmapped/EntitySensorComponent.h"
#include "../../actor/unmapped/ActorComponent.h"
#include "ITickingSystem.h"
#include "../../../unmapped/EntityContext.h"
#include "../../../unmapped/EntityRegistry.h"


class EntitySensorSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~EntitySensorSystem();
    EntitySensorSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, EntitySensorComponent &); //TODO: incomplete function definition
};
