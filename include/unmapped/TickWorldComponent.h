#pragma once

#include "./TickWorldComponent.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/level/tickingarea/ITickingArea.h"
#include <memory>


class TickWorldComponent {

public:

    TickWorldComponent();
    TickWorldComponent(TickWorldComponent &&);
    void removeArea();
    ~TickWorldComponent();
    void initFromDefinition(Actor &);
    void getChunkRadius()const;
    void getMaxDistToPlayers()const;
    bool isAlwaysActive()const;
    bool hasTickingArea()const;
    void getTickingArea();
    void setTickingArea(Actor &, std::shared_ptr<ITickingArea>);
    void updateArea(Actor &);
};
