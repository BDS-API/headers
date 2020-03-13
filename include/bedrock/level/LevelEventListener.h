#pragma once

#include <string>


class LevelEventListener {

public:
    ~LevelEventListener(); // _ZN18LevelEventListenerD2Ev
    virtual void onLevelInitialized(Level &); // _ZN18LevelEventListener18onLevelInitializedER5Level
    virtual void onLevelSaveData(Level &, CompoundTag &); // _ZN18LevelEventListener15onLevelSaveDataER5LevelR11CompoundTag
    virtual void onLevelAddedPlayer(Level &, Player &); // _ZN18LevelEventListener18onLevelAddedPlayerER5LevelR6Player
    virtual void onLevelRemovedPlayer(Level &, Player &); // _ZN18LevelEventListener20onLevelRemovedPlayerER5LevelR6Player
    virtual void onLevelRemovedActor(Level &, Actor &); // _ZN18LevelEventListener19onLevelRemovedActorER5LevelR5Actor
    virtual void onLevelAddedActor(Level &, Actor &); // _ZN18LevelEventListener17onLevelAddedActorER5LevelR5Actor
    virtual void onLevelTick(); // _ZN18LevelEventListener11onLevelTickEv
    virtual void onLevelWeatherChange(std::string const&, bool, bool); // _ZN18LevelEventListener20onLevelWeatherChangeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbb
    LevelEventListener(); // _ZN18LevelEventListenerC2Ev
};
