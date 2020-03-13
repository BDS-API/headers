#pragma once



class TrailComponent {

public:
    static long MAX_SPAWN_OFFSET;

    TrailComponent(TrailComponent &&); // _ZN14TrailComponentC2EOS_
    TrailComponent(); // _ZN14TrailComponentC2Ev
    void initFromDefinition(Actor &); // _ZN14TrailComponent18initFromDefinitionER5Actor
};
