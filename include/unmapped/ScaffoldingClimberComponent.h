#pragma once

#include "../bedrock/util/AABB.h"
#include "../bedrock/actor/Actor.h"


class ScaffoldingClimberComponent {

public:
    ScaffoldingClimberComponent(ScaffoldingClimberComponent &&);
    bool isScaffoldingAtHeight(Actor &, AABB const&, int);
};
