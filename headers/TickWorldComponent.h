#pragma once

class TickWorldComponent {

public:

    void TickWorldComponent(void);
    void TickWorldComponent(TickWorldComponent&&);
    void removeArea(void);
    void initFromDefinition(Actor &);
    void getChunkRadius(void)const;
    void getMaxDistToPlayers(void)const;
    bool isAlwaysActive(void)const;
    bool hasTickingArea(void)const;
    void getTickingArea(void);
    void setTickingArea(Actor &, std::shared_ptr<ITickingArea>);
    void updateArea(Actor &);
};
