#pragma once

#include <string>


namespace VanillaLevelChunkUpgrade {

    void convertVillagerV2TagToV1(CompoundTag &);
    std::string getV1BehaviorFromDefinitionsList(ListTag const*);
    void fixUselessDynamicWater(LevelChunk &, BlockSource &);
    void convertZombieVillagerV2TagToV1(CompoundTag &);
    void addBiomeSpecificVillageSkins(CompoundTag &, BlockSource &);
    void convertZombieVillagerV1TagToV2(CompoundTag &, BlockSource &);
    void convertVillagerV1TagToV2(CompoundTag &, BlockSource &);
    void upgradeLevelChunk(LevelChunk &, BlockSource &);
    void convertOcelotTagToCat(CompoundTag &);
    void convertZombieVillagerV1TagToV2(CompoundTag &);
    std::string getV1CareerFromDefinitionsList(ListTag const*);
    void convertVillagerV1TagToV2(CompoundTag &);
};
