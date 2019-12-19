#pragma once

class TrailComponent {

public:
    static long MAX_SPAWN_OFFSET;


    TrailComponent(TrailComponent&&);
    TrailComponent(void);
    void initFromDefinition(Actor &);
};
