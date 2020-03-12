#pragma once

#include "../bedrock/level/tickingarea/ITickingArea.h"
#include "../bedrock/actor/Actor.h"
#include <memory>


class TickWorldComponent {

public:
    void setTickingArea(Actor &, std::shared_ptr<ITickingArea>);
    void initFromDefinition(Actor &);
    void getChunkRadius()const;
    ~TickWorldComponent();
    TickWorldComponent();
    bool hasTickingArea()const;
    bool isAlwaysActive()const;
    void getTickingArea();
    TickWorldComponent(TickWorldComponent &&);
    void removeArea();
    void getMaxDistToPlayers()const;
    void updateArea(Actor &);
};
