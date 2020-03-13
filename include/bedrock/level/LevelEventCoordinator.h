#pragma once

#include <string>


class LevelEventCoordinator {

public:
    ~LevelEventCoordinator(); // _ZN21LevelEventCoordinatorD2Ev
    LevelEventCoordinator(); // _ZN21LevelEventCoordinatorC2Ev
    void sendLevelInitialized(Level &); // _ZN21LevelEventCoordinator20sendLevelInitializedER5Level
    void sendLevelRemovedActor(Level &, Actor &); // _ZN21LevelEventCoordinator21sendLevelRemovedActorER5LevelR5Actor
    void sendLevelAddedActor(Level &, Actor &); // _ZN21LevelEventCoordinator19sendLevelAddedActorER5LevelR5Actor
    void sendLevelTick(); // _ZN21LevelEventCoordinator13sendLevelTickEv
    void sendLevelWeatherChanged(std::string const&, bool, bool); // _ZN21LevelEventCoordinator23sendLevelWeatherChangedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbb
};
