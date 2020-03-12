#pragma once

#include "../actor/Actor.h"
#include "Level.h"
#include <string>


class LevelEventCoordinator {

public:
    void sendLevelRemovedActor(Level &, Actor &);
    void sendLevelTick();
    ~LevelEventCoordinator();
    LevelEventCoordinator();
    void sendLevelWeatherChanged(std::string const&, bool, bool);
    void sendLevelAddedActor(Level &, Actor &);
    void sendLevelInitialized(Level &);
};
