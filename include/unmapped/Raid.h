#pragma once

#include "../bedrock/util/Vec3.h"
#include "./Raid.h"
#include <memory>
#include "../bedrock/nbt/CompoundTag.h"
#include <unordered_set>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <functional>
#include <string>


class Raid {

public:
    static long NUM_GROUPS_ON_EASY;
    static long NUM_GROUPS_ON_NORMAL;
    static long NUM_GROUPS_ON_HARD;
    static long INVALID_SPAWN_POINT;


    void getCurrentRaidState()const;
    void getCurrentWave()const;
    void getTotalWaves()const;
    void getTicksInCurrentRaidState()const;
    void getRaiders()const;
//  void setOnGroupSpawnedCallback(std::function<void (Raid const&)> &&); //TODO: incomplete function definition
//  void setOnAwardRewardsCallback(std::function<void (Raid const&)> &&); //TODO: incomplete function definition
//  void setOnHelpLocateRaidersCallback(std::function<void (Raid const&)> &&); //TODO: incomplete function definition
    ~Raid();
    void getCurrentGroupSpawnPoint()const;
//  Raid(int, int, int, Difficulty, unsigned char, std::function<bool (unsigned long, Vec3 &)> &&, std::function<bool (unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<std::function &>, std::equal_to<std::function &>, std::allocator<std::function &>> &)> &&, std::function<bool (std::function const&&)> &&); //TODO: incomplete function definition
//  void _setNumGroupsInRaidBasedOnDifficulty(Difficulty); //TODO: incomplete function definition
    void getBossBarFilledFraction()const;
    void _calcBossBarFilledFraction(float, float, float)const;
    void getRemainingRaiders()const;
    void appendDebugInfo(std::string &)const;
    void tick();
    void _tickPreparingGroup();
    void _tickPickingSpawnPoint();
    void _tickSpawningGroup();
    void _tickGroupInPlay();
    void _tickAwardingRewards();
//  void _changeState(Raid::RaidState); //TODO: incomplete function definition
    void readAdditionalSaveData(CompoundTag const&);
    void addAdditionalSaveData(CompoundTag &)const;
};
