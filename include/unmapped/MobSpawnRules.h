#pragma once

#include <string>


class MobSpawnRules {

public:
    static long MAX_SPAWN_DISTANCE;
    static long MIN_DEFAULT_SPAWN_DISTANCE;
    static long MAX_DEFAULT_SPAWN_DISTANCE;
    static long MAX_WORLD_AGE;

    void getPersistence()const;
    void addPermutation(int, int, ActorDefinitionIdentifier const&);
    void setExperimentalGameplay();
    bool canSpawnInConditions(SpawnConditions const&, BlockSource &)const;
    std::string getMobToDelayId()const;
    void getDelaySpawnChance()const;
    void getHerdList()const;
    void selectRandomHerd(Random &)const;
    void setSpawnDistanceCap(int);
    void getDelayRange()const;
    void setBrightnessRange(int, int, bool);
    void setLavaSpawner();
    MobSpawnRules(MobSpawnRules const&);
    void setUnderwaterSpawner();
    void setRarity(int);
    void setPopulationCap(int, int);
    ~MobSpawnRules();
    void setMoonBrightnessRange(float, float);
    void setWorldAgeRange(unsigned long, unsigned long);
    void getMaxSpawnDistance()const;
    void setPlayerInVillageBorderTolerance(unsigned int);
    void addHerd(int, int, std::string const&);
    void setSurfaceSpawner();
    MobSpawnRules(MobSpawnRules &&);
    void setHeightRange(int, int);
    void getSpawnOnBlockListMutable();
    void setMobEventType(std::string const&);
    void getMinSpawnDistance()const;
    bool isUnderwaterSpawner()const;
    void setPersistence(bool);
    void setDelaySpawnChance(int);
//  void setDifficultyRange(Difficulty, Difficulty); //TODO: incomplete function definition
    void setSpawnDistances(int, int);
    void getHerdListMutable();
    void getSpawnCount(SpawnConditions const&, BlockSource &, Random &, MobSpawnHerdInfo const&)const;
    void getSpawnOnBlockList()const;
    void getGuaranteedPermutations()const;
    void setUndergroundSpawner();
    void setPlayerInVillageDistance(unsigned int);
    void getPermutations()const;
    void setDelayRange(int, int, std::string);
    MobSpawnRules();
    void getPopulationCap(SpawnConditions const&)const;
};
