#pragma once

class Raid {

public:
    static long Raid::NUM_GROUPS_ON_EASY;
    static long Raid::NUM_GROUPS_ON_NORMAL;
    static long Raid::NUM_GROUPS_ON_HARD;
    static long Raid::INVALID_SPAWN_POINT;


    void getCurrentRaidState(void)const;
    void getCurrentWave(void)const;
    void getTotalWaves(void)const;
    void getTicksInCurrentRaidState(void)const;
    void getRaiders(void)const;
    void setOnGroupSpawnedCallback(std::function<void ()(Raid const&)> &&);
    void setOnAwardRewardsCallback(std::function<void ()(Raid const&)> &&);
    void setOnHelpLocateRaidersCallback(std::function<void ()(Raid const&)> &&);
    void getCurrentGroupSpawnPoint(void)const;
    void Raid(int, int, int, Difficulty, unsigned char, std::function<bool ()(unsigned long, Vec3 &)> &&, std::function&&<bool ()(unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<std::function&>, std::equal_to<std::function&>, std::allocator<std::function&>> &)>, std::function&&<bool ()(std::function& const&)>);
    void _setNumGroupsInRaidBasedOnDifficulty(Difficulty);
    void getBossBarFilledFraction(void)const;
    void _calcBossBarFilledFraction(float, float, float)const;
    void getRemainingRaiders(void)const;
    void appendDebugInfo(std::string &)const;
    void tick(void);
    void _tickPreparingGroup(void);
    void _tickPickingSpawnPoint(void);
    void _tickSpawningGroup(void);
    void _tickGroupInPlay(void);
    void _tickAwardingRewards(void);
    void _changeState(Raid::RaidState);
    void readAdditionalSaveData(CompoundTag const&);
    void addAdditionalSaveData(CompoundTag &)const;
};
