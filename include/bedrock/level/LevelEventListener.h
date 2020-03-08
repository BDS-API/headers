#pragma once

#include "../actor/Actor"
#include "../nbt/CompoundTag"
#include "../actor/Player"


class LevelEventListener {

public:
    virtual LevelEventListener::~LevelEventListener()
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
