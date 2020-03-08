#pragma once

#include "../actor/Actor"


class LevelEventCoordinator {

public:

    LevelEventCoordinator(void);
    void sendLevelInitialized(Level &);
    void sendLevelRemovedActor(Level &, Actor &);
    void sendLevelAddedActor(Level &, Actor &);
    void sendLevelTick();
    void sendLevelWeatherChanged(std::string const&, bool, bool);
};
