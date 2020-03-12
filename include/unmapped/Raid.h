#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include <string>
#include <unordered_set>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/Vec3.h"
#include <functional>
#include <memory>


class Raid {

public:
    static long NUM_GROUPS_ON_EASY;
    static long NUM_GROUPS_ON_NORMAL;
    static long NUM_GROUPS_ON_HARD;
    static long INVALID_SPAWN_POINT;

    void setOnAwardRewardsCallback(std::function<void (Raid const&)> &&);
    void getCurrentRaidState()const;
    void getTotalWaves()const;
    void getTicksInCurrentRaidState()const;
    void _tickPreparingGroup();
    void setOnGroupSpawnedCallback(std::function<void (Raid const&)> &&);
    void _tickSpawningGroup();
    void getCurrentGroupSpawnPoint()const;
//  void _changeState(Raid::RaidState); //TODO: incomplete function definition
    void tick();
    ~Raid();
//  void _setNumGroupsInRaidBasedOnDifficulty(Difficulty); //TODO: incomplete function definition
    void addAdditionalSaveData(CompoundTag &)const;
    void _tickAwardingRewards();
    void _tickPickingSpawnPoint();
    void setOnHelpLocateRaidersCallback(std::function<void (Raid const&)> &&);
    void getBossBarFilledFraction()const;
    void getRaiders()const;
    void _calcBossBarFilledFraction(float, float, float)const;
    void _tickGroupInPlay();
    void getCurrentWave()const;
    void appendDebugInfo(std::string &)const;
//  Raid(int, int, int, Difficulty, unsigned char, std::function<bool (unsigned long, Vec3 &)> &&, std::function<bool (unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<std::function &>, std::equal_to<std::function &>, std::allocator<std::function &>> &)> &&, std::function<bool (std::function const&&)> &&); //TODO: incomplete function definition
    void readAdditionalSaveData(CompoundTag const&);
    void getRemainingRaiders()const;
};
