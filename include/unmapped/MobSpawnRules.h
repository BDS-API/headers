#pragma once

#include <string>


class MobSpawnRules {

public:
    static long MAX_SPAWN_DISTANCE;
    static long MIN_DEFAULT_SPAWN_DISTANCE;
    static long MAX_DEFAULT_SPAWN_DISTANCE;
    static long MAX_WORLD_AGE;

    ~MobSpawnRules(); // _ZN13MobSpawnRulesD2Ev
    MobSpawnRules(MobSpawnRules const&); // _ZN13MobSpawnRulesC2ERKS_
    void getMaxSpawnDistance()const; // _ZNK13MobSpawnRules19getMaxSpawnDistanceEv
    void getMinSpawnDistance()const; // _ZNK13MobSpawnRules19getMinSpawnDistanceEv
    MobSpawnRules(); // _ZN13MobSpawnRulesC2Ev
    void setBrightnessRange(int, int, bool); // _ZN13MobSpawnRules18setBrightnessRangeEiib
    void setMoonBrightnessRange(float, float); // _ZN13MobSpawnRules22setMoonBrightnessRangeEff
    void setHeightRange(int, int); // _ZN13MobSpawnRules14setHeightRangeEii
//  void setDifficultyRange(Difficulty, Difficulty); //TODO: incomplete function definition // _ZN13MobSpawnRules18setDifficultyRangeE10DifficultyS0_
    void setSurfaceSpawner(); // _ZN13MobSpawnRules17setSurfaceSpawnerEv
    void setUndergroundSpawner(); // _ZN13MobSpawnRules21setUndergroundSpawnerEv
    void setUnderwaterSpawner(); // _ZN13MobSpawnRules20setUnderwaterSpawnerEv
    void setLavaSpawner(); // _ZN13MobSpawnRules14setLavaSpawnerEv
    void setPlayerInVillageDistance(unsigned int); // _ZN13MobSpawnRules26setPlayerInVillageDistanceEj
    void setPlayerInVillageBorderTolerance(unsigned int); // _ZN13MobSpawnRules33setPlayerInVillageBorderToleranceEj
    void setRarity(int); // _ZN13MobSpawnRules9setRarityEi
    void setPopulationCap(int, int); // _ZN13MobSpawnRules16setPopulationCapEii
    void setSpawnDistanceCap(int); // _ZN13MobSpawnRules19setSpawnDistanceCapEi
    void setSpawnDistances(int, int); // _ZN13MobSpawnRules17setSpawnDistancesEii
    void setExperimentalGameplay(); // _ZN13MobSpawnRules23setExperimentalGameplayEv
    void setWorldAgeRange(unsigned long, unsigned long); // _ZN13MobSpawnRules16setWorldAgeRangeEmm
    void setDelayRange(int, int, std::string); // _ZN13MobSpawnRules13setDelayRangeEiiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setDelaySpawnChance(int); // _ZN13MobSpawnRules19setDelaySpawnChanceEi
    void getDelaySpawnChance()const; // _ZNK13MobSpawnRules19getDelaySpawnChanceEv
    void addHerd(int, int, std::string const&); // _ZN13MobSpawnRules7addHerdEiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addPermutation(int, int, ActorDefinitionIdentifier const&); // _ZN13MobSpawnRules14addPermutationEiiRK25ActorDefinitionIdentifier
    void setMobEventType(std::string const&); // _ZN13MobSpawnRules15setMobEventTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setPersistence(bool); // _ZN13MobSpawnRules14setPersistenceEb
    void getPersistence()const; // _ZNK13MobSpawnRules14getPersistenceEv
    bool isUnderwaterSpawner()const; // _ZNK13MobSpawnRules19isUnderwaterSpawnerEv
    void selectRandomHerd(Random &)const; // _ZNK13MobSpawnRules16selectRandomHerdER6Random
    void getHerdListMutable(); // _ZN13MobSpawnRules18getHerdListMutableEv
    void getHerdList()const; // _ZNK13MobSpawnRules11getHerdListEv
    void getPermutations()const; // _ZNK13MobSpawnRules15getPermutationsEv
    void getGuaranteedPermutations()const; // _ZNK13MobSpawnRules25getGuaranteedPermutationsEv
    bool canSpawnInConditions(SpawnConditions const&, BlockSource &)const; // _ZNK13MobSpawnRules20canSpawnInConditionsERK15SpawnConditionsR11BlockSource
    void getSpawnCount(SpawnConditions const&, BlockSource &, Random &, MobSpawnHerdInfo const&)const; // _ZNK13MobSpawnRules13getSpawnCountERK15SpawnConditionsR11BlockSourceR6RandomRK16MobSpawnHerdInfo
    void getPopulationCap(SpawnConditions const&)const; // _ZNK13MobSpawnRules16getPopulationCapERK15SpawnConditions
    void getSpawnOnBlockListMutable(); // _ZN13MobSpawnRules26getSpawnOnBlockListMutableEv
    void getSpawnOnBlockList()const; // _ZNK13MobSpawnRules19getSpawnOnBlockListEv
    std::string getMobToDelayId()const; // _ZNK13MobSpawnRules15getMobToDelayIdB5cxx11Ev
    void getDelayRange()const; // _ZNK13MobSpawnRules13getDelayRangeEv
    MobSpawnRules(MobSpawnRules &&); // _ZN13MobSpawnRulesC2EOS_
};
