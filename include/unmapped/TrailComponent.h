#pragma once



class TrailComponent {

public:
    static long MAX_SPAWN_OFFSET;

    void initFromDefinition(Actor &);
    TrailComponent();
    TrailComponent(TrailComponent &&);
};
