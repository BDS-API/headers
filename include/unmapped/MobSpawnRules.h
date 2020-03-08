#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"


class MobSpawnRules {

public:
    static long MAX_SPAWN_DISTANCE;
    static long MIN_DEFAULT_SPAWN_DISTANCE;
    static long MAX_DEFAULT_SPAWN_DISTANCE;
    static long MAX_WORLD_AGE;


    MobSpawnRules(MobSpawnRules const&);
    void getMaxSpawnDistance()const;
    void getMinSpawnDistance()const;
    MobSpawnRules(void);
    void setBrightnessRange(int, int, bool);
    void setMoonBrightnessRange(float, float);
    void setHeightRange(int, int);
    void setDifficultyRange(Difficulty, Difficulty);
    void setSurfaceSpawner();
    void setUndergroundSpawner();
    void setUnderwaterSpawner();
    void setLavaSpawner();
    void setPlayerInVillageDistance(unsigned int);
    void setPlayerInVillageBorderTolerance(unsigned int);
    void setRarity(int);
    void setPopulationCap(int, int);
    void setSpawnDistanceCap(int);
    void setSpawnDistances(int, int);
    void setExperimentalGameplay();
    void setWorldAgeRange(unsigned long, unsigned long);
    void setDelayRange(int, int, std::string);
    void setDelaySpawnChance(int);
    void getDelaySpawnChance()const;
    void addHerd(int, int, std::string const&);
    void addPermutation(int, int, ActorDefinitionIdentifier const&);
    void setMobEventType(std::string const&);
    void setPersistence(bool);
    void getPersistence()const;
    bool isUnderwaterSpawner()const;
    void selectRandomHerd(Random &)const;
    void getHerdListMutable();
    void getHerdList()const;
    void getPermutations()const;
    void getGuaranteedPermutations()const;
    bool canSpawnInConditions(SpawnConditions const&, BlockSource &)const;
    void getSpawnCount(SpawnConditions const&, BlockSource &, Random &, MobSpawnHerdInfo const&)const;
    void getPopulationCap(SpawnConditions const&)const;
    void getSpawnOnBlockListMutable();
    void getSpawnOnBlockList()const;
    void getDelayRange()const;
    MobSpawnRules(MobSpawnRules&&);
};
