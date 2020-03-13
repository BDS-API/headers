#pragma once

#include <string>


namespace VanillaLevelChunkUpgrade {

    void upgradeLevelChunk(LevelChunk &, BlockSource &); // _ZN24VanillaLevelChunkUpgrade17upgradeLevelChunkER10LevelChunkR11BlockSource
    void fixUselessDynamicWater(LevelChunk &, BlockSource &); // _ZN24VanillaLevelChunkUpgrade22fixUselessDynamicWaterER10LevelChunkR11BlockSource
    void convertOcelotTagToCat(CompoundTag &); // _ZN24VanillaLevelChunkUpgrade21convertOcelotTagToCatER11CompoundTag
    void convertVillagerV1TagToV2(CompoundTag &, BlockSource &); // _ZN24VanillaLevelChunkUpgrade24convertVillagerV1TagToV2ER11CompoundTagR11BlockSource
    void convertZombieVillagerV1TagToV2(CompoundTag &, BlockSource &); // _ZN24VanillaLevelChunkUpgrade30convertZombieVillagerV1TagToV2ER11CompoundTagR11BlockSource
    void convertVillagerV2TagToV1(CompoundTag &); // _ZN24VanillaLevelChunkUpgrade24convertVillagerV2TagToV1ER11CompoundTag
    void convertZombieVillagerV2TagToV1(CompoundTag &); // _ZN24VanillaLevelChunkUpgrade30convertZombieVillagerV2TagToV1ER11CompoundTag
    void convertVillagerV1TagToV2(CompoundTag &); // _ZN24VanillaLevelChunkUpgrade24convertVillagerV1TagToV2ER11CompoundTag
    std::string getV1BehaviorFromDefinitionsList(ListTag const*); // _ZN24VanillaLevelChunkUpgrade32getV1BehaviorFromDefinitionsListB5cxx11EPK7ListTag
    std::string getV1CareerFromDefinitionsList(ListTag const*); // _ZN24VanillaLevelChunkUpgrade30getV1CareerFromDefinitionsListB5cxx11EPK7ListTag
    void addBiomeSpecificVillageSkins(CompoundTag &, BlockSource &); // _ZN24VanillaLevelChunkUpgrade28addBiomeSpecificVillageSkinsER11CompoundTagR11BlockSource
    void convertZombieVillagerV1TagToV2(CompoundTag &); // _ZN24VanillaLevelChunkUpgrade30convertZombieVillagerV1TagToV2ER11CompoundTag
};
