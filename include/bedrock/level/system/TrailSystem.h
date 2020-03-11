#pragma once

#include "./ITickingSystem.h"
#include "../../actor/Actor.h"
#include "../../util/Vec3.h"
#include "../../actor/unmapped/ActorComponent.h"
#include "../../../unmapped/TrailComponent.h"
#include "../../../unmapped/EntityRegistry.h"
#include "../../../unmapped/EntityContext.h"


class TrailSystem : ITickingSystem {

public:
    virtual ~TrailSystem();
    virtual void tick(EntityRegistry &);

    TrailSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TrailComponent &); //TODO: incomplete function definition
    void _calculateBlockSpawnPositions(Actor &, Vec3 &);
};
