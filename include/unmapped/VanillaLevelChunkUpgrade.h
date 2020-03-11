#pragma once

#include "../bedrock/nbt/ListTag.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/level/LevelChunk.h"
#include <string>


class VanillaLevelChunkUpgrade {

public:

    void upgradeLevelChunk(LevelChunk &, BlockSource &);
    void fixUselessDynamicWater(LevelChunk &, BlockSource &);
    void convertOcelotTagToCat(CompoundTag &);
    void convertVillagerV1TagToV2(CompoundTag &, BlockSource &);
    void convertZombieVillagerV1TagToV2(CompoundTag &, BlockSource &);
    void convertVillagerV2TagToV1(CompoundTag &);
    void convertZombieVillagerV2TagToV1(CompoundTag &);
    void convertVillagerV1TagToV2(CompoundTag &);
    std::string getV1BehaviorFromDefinitionsList(ListTag const*);
    std::string getV1CareerFromDefinitionsList(ListTag const*);
    void addBiomeSpecificVillageSkins(CompoundTag &, BlockSource &);
    void convertZombieVillagerV1TagToV2(CompoundTag &);
};
