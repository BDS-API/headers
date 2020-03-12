#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/level/LevelChunk.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/nbt/ListTag.h"


namespace VanillaLevelChunkUpgrade {

    void convertZombieVillagerV1TagToV2(CompoundTag &);
    void convertZombieVillagerV1TagToV2(CompoundTag &, BlockSource &);
    void convertZombieVillagerV2TagToV1(CompoundTag &);
    std::string getV1BehaviorFromDefinitionsList(ListTag const*);
    std::string getV1CareerFromDefinitionsList(ListTag const*);
    void convertVillagerV2TagToV1(CompoundTag &);
    void upgradeLevelChunk(LevelChunk &, BlockSource &);
    void convertOcelotTagToCat(CompoundTag &);
    void convertVillagerV1TagToV2(CompoundTag &, BlockSource &);
    void fixUselessDynamicWater(LevelChunk &, BlockSource &);
    void convertVillagerV1TagToV2(CompoundTag &);
    void addBiomeSpecificVillageSkins(CompoundTag &, BlockSource &);
};
