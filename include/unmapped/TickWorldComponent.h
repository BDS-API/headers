#pragma once

#include <memory>


class TickWorldComponent {

public:
    void getChunkRadius()const;
    void getMaxDistToPlayers()const;
    bool hasTickingArea()const;
    void initFromDefinition(Actor &);
    void getTickingArea();
    void setTickingArea(Actor &, std::shared_ptr<ITickingArea>);
    void updateArea(Actor &);
    TickWorldComponent(TickWorldComponent &&);
    ~TickWorldComponent();
    void removeArea();
    TickWorldComponent();
    bool isAlwaysActive()const;
};
