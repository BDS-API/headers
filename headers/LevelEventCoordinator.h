#pragma once

class LevelEventCoordinator {

public:

    void LevelEventCoordinator(void);
    void sendLevelInitialized(Level &);
    void sendLevelRemovedActor(Level &, Actor &);
    void sendLevelAddedActor(Level &, Actor &);
    void sendLevelTick(void);
    void sendLevelWeatherChanged(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool);
};
