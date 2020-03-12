#pragma once

#include <string>
#include <functional>


class Raid {

public:
    static long NUM_GROUPS_ON_EASY;
    static long NUM_GROUPS_ON_NORMAL;
    static long NUM_GROUPS_ON_HARD;
    static long INVALID_SPAWN_POINT;

    void _tickPickingSpawnPoint();
    void tick();
//  void _changeState(Raid::RaidState); //TODO: incomplete function definition
    void getCurrentWave()const;
    void getTotalWaves()const;
    void _tickSpawningGroup();
    ~Raid();
    void getCurrentRaidState()const;
    void setOnHelpLocateRaidersCallback(std::function<void (Raid const&)> &&);
    void _tickAwardingRewards();
    void readAdditionalSaveData(CompoundTag const&);
    void _calcBossBarFilledFraction(float, float, float)const;
    void getRaiders()const;
    void getCurrentGroupSpawnPoint()const;
//  Raid(int, int, int, Difficulty, unsigned char, std::function<bool (unsigned long, Vec3 &)> &&, std::function<bool (unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<std::function &>, std::equal_to<std::function &>, std::allocator<std::function &>> &)> &&, std::function<bool (std::function const&&)> &&); //TODO: incomplete function definition
    void setOnGroupSpawnedCallback(std::function<void (Raid const&)> &&);
//  void _setNumGroupsInRaidBasedOnDifficulty(Difficulty); //TODO: incomplete function definition
    void addAdditionalSaveData(CompoundTag &)const;
    void _tickPreparingGroup();
    void getRemainingRaiders()const;
    void _tickGroupInPlay();
    void setOnAwardRewardsCallback(std::function<void (Raid const&)> &&);
    void getTicksInCurrentRaidState()const;
    void appendDebugInfo(std::string &)const;
    void getBossBarFilledFraction()const;
};
