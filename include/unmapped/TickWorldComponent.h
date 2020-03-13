#pragma once

#include <memory>


class TickWorldComponent {

public:
    TickWorldComponent(); // _ZN18TickWorldComponentC2Ev
    TickWorldComponent(TickWorldComponent &&); // _ZN18TickWorldComponentC2EOS_
    void removeArea(); // _ZN18TickWorldComponent10removeAreaEv
    ~TickWorldComponent(); // _ZN18TickWorldComponentD2Ev
    void initFromDefinition(Actor &); // _ZN18TickWorldComponent18initFromDefinitionER5Actor
    void getChunkRadius()const; // _ZNK18TickWorldComponent14getChunkRadiusEv
    void getMaxDistToPlayers()const; // _ZNK18TickWorldComponent19getMaxDistToPlayersEv
    bool isAlwaysActive()const; // _ZNK18TickWorldComponent14isAlwaysActiveEv
    bool hasTickingArea()const; // _ZNK18TickWorldComponent14hasTickingAreaEv
    void getTickingArea(); // _ZN18TickWorldComponent14getTickingAreaEv
    void setTickingArea(Actor &, std::shared_ptr<ITickingArea>); // _ZN18TickWorldComponent14setTickingAreaER5ActorSt10shared_ptrI12ITickingAreaE
    void updateArea(Actor &); // _ZN18TickWorldComponent10updateAreaER5Actor
};
