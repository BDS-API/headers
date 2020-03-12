#pragma once

#include <string>
#include "MobSpawnHerdInfo.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "SpawnConditions.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class MobSpawnRules {

public:
    static long MAX_SPAWN_DISTANCE;
    static long MIN_DEFAULT_SPAWN_DISTANCE;
    static long MAX_DEFAULT_SPAWN_DISTANCE;
    static long MAX_WORLD_AGE;

    void getMinSpawnDistance()const;
    void getPersistence()const;
    void getSpawnOnBlockListMutable();
    void setSurfaceSpawner();
    void addPermutation(int, int, ActorDefinitionIdentifier const&);
    void setPersistence(bool);
    void getPermutations()const;
    void getPopulationCap(SpawnConditions const&)const;
    void setUnderwaterSpawner();
    void setSpawnDistances(int, int);
    void setSpawnDistanceCap(int);
    void setExperimentalGameplay();
    void setPlayerInVillageDistance(unsigned int);
    void getHerdList()const;
//  void setDifficultyRange(Difficulty, Difficulty); //TODO: incomplete function definition
    void selectRandomHerd(Random &)const;
    bool canSpawnInConditions(SpawnConditions const&, BlockSource &)const;
    void addHerd(int, int, std::string const&);
    void setMoonBrightnessRange(float, float);
    void setBrightnessRange(int, int, bool);
    void setPopulationCap(int, int);
    std::string getMobToDelayId()const;
    bool isUnderwaterSpawner()const;
    void getSpawnOnBlockList()const;
    void setHeightRange(int, int);
    void getDelaySpawnChance()const;
    void getSpawnCount(SpawnConditions const&, BlockSource &, Random &, MobSpawnHerdInfo const&)const;
    void setDelaySpawnChance(int);
    void setRarity(int);
    ~MobSpawnRules();
    void getDelayRange()const;
    MobSpawnRules();
    void setWorldAgeRange(unsigned long, unsigned long);
    void setUndergroundSpawner();
    void getGuaranteedPermutations()const;
    void setPlayerInVillageBorderTolerance(unsigned int);
    void setDelayRange(int, int, std::string);
    void setMobEventType(std::string const&);
    void getMaxSpawnDistance()const;
    MobSpawnRules(MobSpawnRules &&);
    MobSpawnRules(MobSpawnRules const&);
    void setLavaSpawner();
    void getHerdListMutable();
};
