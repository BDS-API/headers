#pragma once

#include "ITickingSystem.h"


class TrailSystem : ITickingSystem {

public:
    class BlockPositions;

    ~TrailSystem(); // _ZN11TrailSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN11TrailSystem4tickER14EntityRegistry
    TrailSystem(); // _ZN11TrailSystemC2Ev
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, TrailComponent &); //TODO: incomplete function definition // _ZN11TrailSystem14_tickComponentER13EntityContextR13FlagComponentI15ActorTickedFlagER14ActorComponentR14TrailComponent
    void _calculateBlockSpawnPositions(Actor &, Vec3 &); // _ZN11TrailSystem29_calculateBlockSpawnPositionsER5ActorR4Vec3
    class BlockPositions {

    public:
        BlockPositions(); // _ZN11TrailSystem14BlockPositionsC2Ev
    };
};
