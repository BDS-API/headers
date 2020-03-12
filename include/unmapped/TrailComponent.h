#pragma once

#include "../bedrock/actor/Actor.h"


class TrailComponent {

public:
    static long MAX_SPAWN_OFFSET;

    TrailComponent();
    TrailComponent(TrailComponent &&);
    void initFromDefinition(Actor &);
};
