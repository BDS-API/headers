#pragma once

#include "../../../unmapped/EntityContext"
#include "../../../unmapped/EntityRegistry"
#include "../../actor/Actor"


class TrailSystem : ITickingSystem {

public:
    virtual TrailSystem::~TrailSystem();
    virtual void tick(EntityRegistry &);

    TrailSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TrailComponent &);
    void _calculateBlockSpawnPositions(Actor &, Vec3 &);
};
