#pragma once

#include "../actor/Actor"
#include "../actor/Player"
#include "../nbt/CompoundTag"


class LevelEventListener {

public:
    LevelEventListener::~LevelEventListener()
    virtual void onLevelInitialized(Level &);
    virtual void onLevelSaveData(Level &, CompoundTag &);
    virtual void onLevelAddedPlayer(Level &, Player &);
    virtual void onLevelRemovedPlayer(Level &, Player &);
    virtual void onLevelRemovedActor(Level &, Actor &);
    virtual void onLevelAddedActor(Level &, Actor &);
    virtual void onLevelTick();
    virtual void onLevelWeatherChange(std::string const&, bool, bool);

    LevelEventListener(void);
};
