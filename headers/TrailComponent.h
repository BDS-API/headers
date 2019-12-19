#pragma once

class TrailComponent {

public:
    static long MAX_SPAWN_OFFSET;


    void TrailComponent(TrailComponent&&);
    void TrailComponent(void);
    void initFromDefinition(Actor &);
};
