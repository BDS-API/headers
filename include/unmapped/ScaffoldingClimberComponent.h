#pragma once

#include "../bedrock/util/AABB"
#include "../bedrock/actor/Actor"


class ScaffoldingClimberComponent {

public:

    ScaffoldingClimberComponent(ScaffoldingClimberComponent&&);
    bool isScaffoldingAtHeight(Actor &, AABB const&, int);
};
