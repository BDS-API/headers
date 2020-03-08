#pragma once



class MobSpawnRules {

public:
    static long MAX_SPAWN_DISTANCE;
    static long MIN_DEFAULT_SPAWN_DISTANCE;
    static long MAX_DEFAULT_SPAWN_DISTANCE;
    static long MAX_WORLD_AGE;


    MobSpawnRules(MobSpawnRules const&);
    void getMaxSpawnDistance(void)const;
    void getMinSpawnDistance(void)const;
    MobSpawnRules(void);
    void setBrightnessRange(int, int, bool);
    void setMoonBrightnessRange(float, float);
    void setHeightRange(int, int);
    void setDifficultyRange(Difficulty, Difficulty);
    void setSurfaceSpawner(void);
    void setUndergroundSpawner(void);
    void setUnderwaterSpawner(void);
    void setLavaSpawner(void);
    void setPlayerInVillageDistance(unsigned int);
    void setPlayerInVillageBorderTolerance(unsigned int);
    void setRarity(int);
    void setPopulationCap(int, int);
    void setSpawnDistanceCap(int);
    void setSpawnDistances(int, int);
    void setExperimentalGameplay(void);
    void setWorldAgeRange(unsigned long, unsigned long);
    void setDelayRange(int, int, std::string);
    void setDelaySpawnChance(int);
    void getDelaySpawnChance(void)const;
    void addHerd(int, int, std::string const&);
    void addPermutation(int, int, ActorDefinitionIdentifier const&);
    void setMobEventType(std::string const&);
    void setPersistence(bool);
    void getPersistence(void)const;
    bool isUnderwaterSpawner(void)const;
    void selectRandomHerd(Random &)const;
    void getHerdListMutable(void);
    void getHerdList(void)const;
    void getPermutations(void)const;
    void getGuaranteedPermutations(void)const;
    bool canSpawnInConditions(SpawnConditions const&, BlockSource &)const;
    void getSpawnCount(SpawnConditions const&, BlockSource &, Random &, MobSpawnHerdInfo const&)const;
    void getPopulationCap(SpawnConditions const&)const;
    void getSpawnOnBlockListMutable(void);
    void getSpawnOnBlockList(void)const;
    void getDelayRange(void)const;
    MobSpawnRules(MobSpawnRules&&);
};
