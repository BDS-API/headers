#pragma once

#include "../../../unmapped/TrailComponent.h"
#include "../../util/Vec3.h"
#include "../../actor/unmapped/ActorComponent.h"
#include "../../actor/Actor.h"
#include "ITickingSystem.h"
#include "../../../unmapped/EntityContext.h"
#include "../../../unmapped/EntityRegistry.h"


class TrailSystem : ITickingSystem {

public:
    class BlockPositions;

    virtual void tick(EntityRegistry &);
    ~TrailSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TrailComponent &); //TODO: incomplete function definition
    TrailSystem();
    void _calculateBlockSpawnPositions(Actor &, Vec3 &);
    class BlockPositions {

    public:
        BlockPositions();
    };
};
