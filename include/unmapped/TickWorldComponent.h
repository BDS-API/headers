#pragma once

#include "../bedrock/level/tickingarea/ITickingArea"
#include "../bedrock/actor/Actor"


class TickWorldComponent {

public:

    TickWorldComponent(void);
    TickWorldComponent(TickWorldComponent&&);
    void removeArea();
    void initFromDefinition(Actor &);
    void getChunkRadius()const;
    void getMaxDistToPlayers()const;
    bool isAlwaysActive()const;
    bool hasTickingArea()const;
    void getTickingArea();
    void setTickingArea(Actor &, std::shared_ptr<ITickingArea>);
    void updateArea(Actor &);
};
