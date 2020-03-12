#pragma once

#include <string>
#include "../actor/Actor.h"
#include "../nbt/CompoundTag.h"
#include "Level.h"
#include "../actor/Player.h"


class LevelEventListener {

public:
    virtual void onLevelAddedActor(Level &, Actor &);
    virtual void onLevelRemovedActor(Level &, Actor &);
    virtual void onLevelAddedPlayer(Level &, Player &);
    virtual void onLevelSaveData(Level &, CompoundTag &);
    virtual void onLevelInitialized(Level &);
    virtual void onLevelTick();
    ~LevelEventListener();
    virtual void onLevelRemovedPlayer(Level &, Player &);
    virtual void onLevelWeatherChange(std::string const&, bool, bool);
    LevelEventListener();
};
