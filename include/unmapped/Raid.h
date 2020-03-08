#pragma once

#include "../bedrock/nbt/CompoundTag"


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
    void setOnGroupSpawnedCallback(std::function<void ()(Raid const&)> &&);
    void setOnAwardRewardsCallback(std::function<void ()(Raid const&)> &&);
    void setOnHelpLocateRaidersCallback(std::function<void ()(Raid const&)> &&);
    void getCurrentGroupSpawnPoint()const;
    Raid(int, int, int, Difficulty, unsigned char, std::function<bool ()(unsigned long, Vec3 &)> &&, std::function&&<bool ()(unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<std::function&>, std::equal_to<std::function&>, std::allocator<std::function&>> &)>, std::function&&<bool ()(std::function& const&)>);
    void _setNumGroupsInRaidBasedOnDifficulty(Difficulty);
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
    void _changeState(Raid::RaidState);
    void readAdditionalSaveData(CompoundTag const&);
    void addAdditionalSaveData(CompoundTag &)const;
};
