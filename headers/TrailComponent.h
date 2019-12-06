#pragma once

class TrailComponent {

public:
    static long TrailComponent::MAX_SPAWN_OFFSET;


    void TrailComponent(TrailComponent&&);
    void TrailComponent(void);
    void initFromDefinition(Actor &);
};
