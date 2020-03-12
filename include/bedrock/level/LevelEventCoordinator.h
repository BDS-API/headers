#pragma once

#include <string>


class LevelEventCoordinator {

public:
    void sendLevelInitialized(Level &);
    LevelEventCoordinator();
    void sendLevelAddedActor(Level &, Actor &);
    void sendLevelRemovedActor(Level &, Actor &);
    void sendLevelTick();
    ~LevelEventCoordinator();
    void sendLevelWeatherChanged(std::string const&, bool, bool);
};
