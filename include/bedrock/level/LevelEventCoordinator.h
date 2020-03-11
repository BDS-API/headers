#pragma once

#include "./Level.h"
#include "../actor/Actor.h"
#include <string>


class LevelEventCoordinator {

public:

    ~LevelEventCoordinator();
    LevelEventCoordinator();
    void sendLevelInitialized(Level &);
    void sendLevelRemovedActor(Level &, Actor &);
    void sendLevelAddedActor(Level &, Actor &);
    void sendLevelTick();
    void sendLevelWeatherChanged(std::string const&, bool, bool);
};
