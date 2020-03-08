#pragma once

#include "../../actor/Actor"
#include "../../actor/unmapped/ActorComponent"
#include "../../../unmapped/TrailComponent"
#include "../../util/Vec3"
#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"


class TrailSystem : ITickingSystem {

public:
    virtual TrailSystem::~TrailSystem()
    virtual void tick(EntityRegistry &);

    TrailSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TrailComponent &);
    void _calculateBlockSpawnPositions(Actor &, Vec3 &);
};
