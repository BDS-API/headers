#pragma once

#include <string>
#include <functional>


class Raid {

public:
    static long NUM_GROUPS_ON_EASY;
    static long NUM_GROUPS_ON_NORMAL;
    static long NUM_GROUPS_ON_HARD;
    static long INVALID_SPAWN_POINT;

    void getCurrentRaidState()const; // _ZNK4Raid19getCurrentRaidStateEv
    void getCurrentWave()const; // _ZNK4Raid14getCurrentWaveEv
    void getTotalWaves()const; // _ZNK4Raid13getTotalWavesEv
    void getTicksInCurrentRaidState()const; // _ZNK4Raid26getTicksInCurrentRaidStateEv
    void getRaiders()const; // _ZNK4Raid10getRaidersEv
    void setOnGroupSpawnedCallback(std::function<void (Raid const&)> &&); // _ZN4Raid25setOnGroupSpawnedCallbackEOSt8functionIFvRKS_EE
    void setOnAwardRewardsCallback(std::function<void (Raid const&)> &&); // _ZN4Raid25setOnAwardRewardsCallbackEOSt8functionIFvRKS_EE
    void setOnHelpLocateRaidersCallback(std::function<void (Raid const&)> &&); // _ZN4Raid30setOnHelpLocateRaidersCallbackEOSt8functionIFvRKS_EE
    ~Raid(); // _ZN4RaidD2Ev
    void getCurrentGroupSpawnPoint()const; // _ZNK4Raid25getCurrentGroupSpawnPointEv
//  Raid(int, int, int, Difficulty, unsigned char, std::function<bool (unsigned long, Vec3 &)> &&, std::function<bool (unsigned long, Vec3, unsigned char, std::unordered_set<ActorUniqueID, std::hash<std::function &>, std::equal_to<std::function &>, std::allocator<std::function &>> &)> &&, std::function<bool (std::function const&&)> &&); //TODO: incomplete function definition // _ZN4RaidC2Eiii10DifficultyhOSt8functionIFbmR4Vec3EEOS1_IFbmS2_hRSt13unordered_setI13ActorUniqueIDSt4hashIS8_ESt8equal_toIS8_ESaIS8_EEEEOS1_IFbRKS8_EE
//  void _setNumGroupsInRaidBasedOnDifficulty(Difficulty); //TODO: incomplete function definition // _ZN4Raid36_setNumGroupsInRaidBasedOnDifficultyE10Difficulty
    void getBossBarFilledFraction()const; // _ZNK4Raid24getBossBarFilledFractionEv
    void _calcBossBarFilledFraction(float, float, float)const; // _ZNK4Raid26_calcBossBarFilledFractionEfff
    void getRemainingRaiders()const; // _ZNK4Raid19getRemainingRaidersEv
    void appendDebugInfo(std::string &)const; // _ZNK4Raid15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void tick(); // _ZN4Raid4tickEv
    void _tickPreparingGroup(); // _ZN4Raid19_tickPreparingGroupEv
    void _tickPickingSpawnPoint(); // _ZN4Raid22_tickPickingSpawnPointEv
    void _tickSpawningGroup(); // _ZN4Raid18_tickSpawningGroupEv
    void _tickGroupInPlay(); // _ZN4Raid16_tickGroupInPlayEv
    void _tickAwardingRewards(); // _ZN4Raid20_tickAwardingRewardsEv
//  void _changeState(Raid::RaidState); //TODO: incomplete function definition // _ZN4Raid12_changeStateENS_9RaidStateE
    void readAdditionalSaveData(CompoundTag const&); // _ZN4Raid22readAdditionalSaveDataERK11CompoundTag
    void addAdditionalSaveData(CompoundTag &)const; // _ZNK4Raid21addAdditionalSaveDataER11CompoundTag
};
