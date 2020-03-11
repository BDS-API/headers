#pragma once

#include "../actor/Actor.h"
#include "./Level.h"
#include "../actor/Player.h"
#include "../nbt/CompoundTag.h"
#include <string>


class LevelEventListener {

public:
    virtual ~LevelEventListener();
    virtual void onLevelInitialized(Level &);
    virtual void onLevelSaveData(Level &, CompoundTag &);
    virtual void onLevelAddedPlayer(Level &, Player &);
    virtual void onLevelRemovedPlayer(Level &, Player &);
    virtual void onLevelRemovedActor(Level &, Actor &);
    virtual void onLevelAddedActor(Level &, Actor &);
    virtual void onLevelTick();
    virtual void onLevelWeatherChange(std::string const&, bool, bool);

    LevelEventListener();
};
