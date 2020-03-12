#pragma once

#include "ITickingSystem.h"


class TrailSystem : ITickingSystem {

public:
    class BlockPositions;

    ~TrailSystem();
    virtual void tick(EntityRegistry &);
    void _calculateBlockSpawnPositions(Actor &, Vec3 &);
    TrailSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TrailComponent &); //TODO: incomplete function definition
    class BlockPositions {

    public:
        BlockPositions();
    };
};
