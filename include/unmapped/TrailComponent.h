#pragma once

#include "../bedrock/actor/Actor.h"
#include "./TrailComponent.h"


class TrailComponent {

public:
    static long MAX_SPAWN_OFFSET;


    TrailComponent(TrailComponent &&);
    TrailComponent();
    void initFromDefinition(Actor &);
};
