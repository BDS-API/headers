#pragma once

class ScaffoldingClimberComponent {

public:

    void ScaffoldingClimberComponent(ScaffoldingClimberComponent&&);
    bool isScaffoldingAtHeight(Actor &, AABB const&, int);
};
