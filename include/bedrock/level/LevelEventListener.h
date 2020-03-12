#pragma once

#include <string>


class LevelEventListener {

public:
    virtual void onLevelAddedPlayer(Level &, Player &);
    virtual void onLevelWeatherChange(std::string const&, bool, bool);
    virtual void onLevelRemovedActor(Level &, Actor &);
    ~LevelEventListener();
    virtual void onLevelSaveData(Level &, CompoundTag &);
    virtual void onLevelRemovedPlayer(Level &, Player &);
    virtual void onLevelInitialized(Level &);
    virtual void onLevelTick();
    virtual void onLevelAddedActor(Level &, Actor &);
    LevelEventListener();
};
