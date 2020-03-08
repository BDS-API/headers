#pragma once

#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"
#include "../../actor/Actor"
#include "../../util/Vec3"
#include "../../actor/unmapped/ActorComponent"
#include "../../../unmapped/TrailComponent"


class TrailSystem : ITickingSystem {

public:
    TrailSystem::~TrailSystem()
    virtual void tick(EntityRegistry &);

    TrailSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TrailComponent &);
    void _calculateBlockSpawnPositions(Actor &, Vec3 &);
};
