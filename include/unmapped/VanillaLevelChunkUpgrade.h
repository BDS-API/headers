#pragma once

#include "../bedrock/level/LevelChunk"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/nbt/CompoundTag"


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
    void addBiomeSpecificVillageSkins(CompoundTag &, BlockSource &);
    void convertZombieVillagerV1TagToV2(CompoundTag &);
};
