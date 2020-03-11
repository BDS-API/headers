#pragma once

#include "../bedrock/actor/Actor.h"
#include "./ScaffoldingClimberComponent.h"
#include "../bedrock/util/AABB.h"


class ScaffoldingClimberComponent {

public:

    ScaffoldingClimberComponent(ScaffoldingClimberComponent &&);
    bool isScaffoldingAtHeight(Actor &, AABB const&, int);
};
