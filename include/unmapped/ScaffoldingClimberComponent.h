#pragma once

class ScaffoldingClimberComponent {

public:

    ScaffoldingClimberComponent(ScaffoldingClimberComponent&&);
    bool isScaffoldingAtHeight(Actor &, AABB const&, int);
};
