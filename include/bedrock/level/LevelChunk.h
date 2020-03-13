#pragma once

#include "../util/Brightness.h"
#include <vector>
#include <memory>
#include "../util/ChunkPos.h"
#include <string>


class LevelChunk {

public:
    class HardcodedSpawningArea;

    static long UPDATE_MAP_BIT_SHIFT;

    bool isOwnedByTickingThread()const; // _ZNK10LevelChunk22isOwnedByTickingThreadEv
    void getAllocatedHeight()const; // _ZNK10LevelChunk18getAllocatedHeightEv
    void getSubChunks()const; // _ZNK10LevelChunk12getSubChunksEv
    void onTickingStarted(); // _ZN10LevelChunk16onTickingStartedEv
    void onTickingStopped(); // _ZN10LevelChunk16onTickingStoppedEv
    void createNew(Dimension &, ChunkPos, bool); // _ZN10LevelChunk9createNewER9Dimension8ChunkPosb
    void createNewNoCustomDeleter(Dimension &, ChunkPos, bool); // _ZN10LevelChunk24createNewNoCustomDeleterER9Dimension8ChunkPosb
    LevelChunk(Dimension &, ChunkPos const&, bool); // _ZN10LevelChunkC2ER9DimensionRK8ChunkPosb
//  void _reassignSubChunks(buffer_span_mut<SubChunk>); //TODO: incomplete function definition // _ZN10LevelChunk18_reassignSubChunksE15buffer_span_mutI8SubChunkE
//  void _createSubChunk(unsigned long, bool, SubChunkInitMode); //TODO: incomplete function definition // _ZN10LevelChunk15_createSubChunkEmb16SubChunkInitMode
    void _assertBlockEntityAccess()const; // _ZNK10LevelChunk24_assertBlockEntityAccessEv
    ~LevelChunk(); // _ZN10LevelChunkD2Ev
    void _placeBlockEntity(std::shared_ptr<BlockActor>); // _ZN10LevelChunk17_placeBlockEntityESt10shared_ptrI10BlockActorE
    void _createBlockEntity(BlockPos const&, BlockSource *, Block const&, Block const&); // _ZN10LevelChunk18_createBlockEntityERK8BlockPosP11BlockSourceRK5BlockS7_
    void _setLight(ChunkBlockPos const&, Brightness); // _ZN10LevelChunk9_setLightERK13ChunkBlockPos10Brightness
    void _lightingCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *); // _ZN10LevelChunk18_lightingCallbacksERK13ChunkBlockPosRK5BlockS5_P11BlockSource
    void getHeightmap(ChunkBlockPos const&)const; // _ZNK10LevelChunk12getHeightmapERK13ChunkBlockPos
    void _recalcHeight(ChunkBlockPos const&, BlockSource *); // _ZN10LevelChunk13_recalcHeightERK13ChunkBlockPosP11BlockSource
    void placeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>); // _ZN10LevelChunk14placeCallbacksERK13ChunkBlockPosRK5BlockS5_P11BlockSourceSt10shared_ptrI10BlockActorE
    void trySetLightingTaskActive(); // _ZN10LevelChunk24trySetLightingTaskActiveEv
    void resetLightingTaskActive(); // _ZN10LevelChunk23resetLightingTaskActiveEv
    void _removeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *); // _ZN10LevelChunk16_removeCallbacksERK13ChunkBlockPosRK5BlockS5_P11BlockSource
    void getBlock(ChunkBlockPos const&)const; // _ZNK10LevelChunk8getBlockERK13ChunkBlockPos
    void setBlock(ChunkBlockPos const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>); // _ZN10LevelChunk8setBlockERK13ChunkBlockPosRK5BlockP11BlockSourceSt10shared_ptrI10BlockActorE
    void setExtraBlock(ChunkBlockPos const&, Block const&, BlockSource *); // _ZN10LevelChunk13setExtraBlockERK13ChunkBlockPosRK5BlockP11BlockSource
    void getExtraBlock(ChunkBlockPos const&)const; // _ZNK10LevelChunk13getExtraBlockERK13ChunkBlockPos
    void fetchBlocks(BlockPos const&, BlockVolume &)const; // _ZNK10LevelChunk11fetchBlocksERK8BlockPosR11BlockVolume
    void getPosition()const; // _ZNK10LevelChunk11getPositionEv
    bool isBlockInChunk(BlockPos const&)const; // _ZNK10LevelChunk14isBlockInChunkERK8BlockPos
    void borderBlocksAreEnabled(); // _ZN10LevelChunk22borderBlocksAreEnabledEv
    void getBorder(ChunkBlockPos const&)const; // _ZNK10LevelChunk9getBorderERK13ChunkBlockPos
    void setBorder(ChunkBlockPos const&, bool); // _ZN10LevelChunk9setBorderERK13ChunkBlockPosb
//  void addHardcodedSpawningArea(BoundingBox const&, HardcodedSpawnAreaType); //TODO: incomplete function definition // _ZN10LevelChunk24addHardcodedSpawningAreaERK11BoundingBox22HardcodedSpawnAreaType
    void getMin()const; // _ZNK10LevelChunk6getMinEv
    void getMax()const; // _ZNK10LevelChunk6getMaxEv
//  void removeHardcodedSpawningArea(HardcodedSpawnAreaType); //TODO: incomplete function definition // _ZN10LevelChunk27removeHardcodedSpawningAreaE22HardcodedSpawnAreaType
    void findHardcodedSpawnAt(BlockPos const&); // _ZN10LevelChunk20findHardcodedSpawnAtERK8BlockPos
    void getSpawningAreas()const; // _ZNK10LevelChunk16getSpawningAreasEv
    void getPreWorldGenHeightmap(ChunkBlockPos const&)const; // _ZNK10LevelChunk23getPreWorldGenHeightmapERK13ChunkBlockPos
    void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>); // _ZN10LevelChunk23setPreWorldGenHeightMapESt10unique_ptrISt6vectorIsSaIsEESt14default_deleteIS3_EE
    void getTickQueue(); // _ZN10LevelChunk12getTickQueueEv
    void getTickQueue()const; // _ZNK10LevelChunk12getTickQueueEv
    void getRandomTickQueue(); // _ZN10LevelChunk18getRandomTickQueueEv
    void getRandomTickQueue()const; // _ZNK10LevelChunk18getRandomTickQueueEv
    void getBrightness(ChunkBlockPos const&)const; // _ZNK10LevelChunk13getBrightnessERK13ChunkBlockPos
    void getBrightness(ChunkBlockPos const&, Brightness)const; // _ZNK10LevelChunk13getBrightnessERK13ChunkBlockPos10Brightness
    void getRawBrightness(ChunkBlockPos const&, Brightness)const; // _ZNK10LevelChunk16getRawBrightnessERK13ChunkBlockPos10Brightness
    bool hasEntity(Actor &); // _ZN10LevelChunk9hasEntityER5Actor
    void addEntity(std::unique_ptr<Actor>); // _ZN10LevelChunk9addEntityESt10unique_ptrI5ActorSt14default_deleteIS1_EE
    void removeEntity(Actor &); // _ZN10LevelChunk12removeEntityER5Actor
    void removeBlockEntity(BlockPos const&); // _ZN10LevelChunk17removeBlockEntityERK8BlockPos
    bool isSkyLit(ChunkBlockPos const&)const; // _ZNK10LevelChunk8isSkyLitERK13ChunkBlockPos
//  void tryChangeState(ChunkState, ChunkState); //TODO: incomplete function definition // _ZN10LevelChunk14tryChangeStateE10ChunkStateS0_
//  void changeState(ChunkState, ChunkState); //TODO: incomplete function definition // _ZN10LevelChunk11changeStateE10ChunkStateS0_
//  void _changeTerrainDataState(ChunkTerrainDataState, ChunkTerrainDataState); //TODO: incomplete function definition // _ZN10LevelChunk23_changeTerrainDataStateE21ChunkTerrainDataStateS0_
    void _onTickingQueueChanged(); // _ZN10LevelChunk22_onTickingQueueChangedEv
    void _onRandomTickingQueueChanged(); // _ZN10LevelChunk28_onRandomTickingQueueChangedEv
//  void createSubchunk(unsigned long, bool, SubChunkInitMode); //TODO: incomplete function definition // _ZN10LevelChunk14createSubchunkEmb16SubChunkInitMode
    void getConvertedInterpolantBool(unsigned long, unsigned long)const; // _ZNK10LevelChunk27getConvertedInterpolantBoolEmm
    void enableBlockEntityAccessForThisThread()const; // _ZNK10LevelChunk36enableBlockEntityAccessForThisThreadEv
    void getEntities(Actor *, AABB const&, std::vector<Actor *> &)const; // _ZNK10LevelChunk11getEntitiesEP5ActorRK4AABBRSt6vectorIS1_SaIS1_EE
//  void getEntities(buffer_span<Actor *>, AABB const&, std::vector<Actor *> &)const; //TODO: incomplete function definition // _ZNK10LevelChunk11getEntitiesE11buffer_spanIP5ActorERK4AABBRSt6vectorIS2_SaIS2_EE
//  void getEntities(ActorType, AABB const&, std::vector<Actor *> &, bool)const; //TODO: incomplete function definition // _ZNK10LevelChunk11getEntitiesE9ActorTypeRK4AABBRSt6vectorIP5ActorSaIS6_EEb
    void getEntity(ActorUniqueID const&)const; // _ZNK10LevelChunk9getEntityERK13ActorUniqueID
    void getEntities()const; // _ZNK10LevelChunk11getEntitiesEv
    void getBlockEntities()const; // _ZNK10LevelChunk16getBlockEntitiesEv
    void getBlockEntity(ChunkBlockPos const&); // _ZN10LevelChunk14getBlockEntityERK13ChunkBlockPos
    bool hasBlockEntity(ChunkBlockPos const&); // _ZN10LevelChunk14hasBlockEntityERK13ChunkBlockPos
//  void setAllBlocks(buffer_span<Block const*>, short); //TODO: incomplete function definition // _ZN10LevelChunk12setAllBlocksE11buffer_spanIPK5BlockEs
//  void setAllLegacyBlockIDAndData(buffer_span<BlockID>, buffer_span<NibblePair>); //TODO: incomplete function definition // _ZN10LevelChunk26setAllLegacyBlockIDAndDataE11buffer_spanI7BlockIDES0_I10NibblePairE
    void tick(BlockSource &, Tick const&); // _ZN10LevelChunk4tickER11BlockSourceRK4Tick
    void _deserializeEntity(BlockSource &, IDataInput &, std::vector<ActorLink> &); // _ZN10LevelChunk18_deserializeEntityER11BlockSourceR10IDataInputRSt6vectorI9ActorLinkSaIS5_EE
    void setUnsaved(); // _ZN10LevelChunk10setUnsavedEv
    void tickBlocks(BlockSource &); // _ZN10LevelChunk10tickBlocksER11BlockSource
    void tickBlockEntities(BlockSource &); // _ZN10LevelChunk17tickBlockEntitiesER11BlockSource
    void tickRedstoneBlocks(BlockSource &); // _ZN10LevelChunk18tickRedstoneBlocksER11BlockSource
    void tickEntitiesDirty(); // _ZN10LevelChunk17tickEntitiesDirtyEv
    void findLightningTarget(BlockPos const&, BlockSource &); // _ZN10LevelChunk19findLightningTargetERK8BlockPosR11BlockSource
    void serialize2DMaps(IDataOutput &)const; // _ZNK10LevelChunk15serialize2DMapsER11IDataOutput
    void serializeBiomes(IDataOutput &)const; // _ZNK10LevelChunk15serializeBiomesER11IDataOutput
    void serializeBorderBlocks(IDataOutput &)const; // _ZNK10LevelChunk21serializeBorderBlocksER11IDataOutput
    void serializeTicks(IDataOutput &)const; // _ZNK10LevelChunk14serializeTicksER11IDataOutput
    void serializeRandomTicks(IDataOutput &)const; // _ZNK10LevelChunk20serializeRandomTicksER11IDataOutput
    void serializeFinalization(IDataOutput &)const; // _ZNK10LevelChunk21serializeFinalizationER11IDataOutput
    void serializeHardcodedSpawners(IDataOutput &)const; // _ZNK10LevelChunk26serializeHardcodedSpawnersER11IDataOutput
    void deserializeHardcodedSpawners(IDataInput &); // _ZN10LevelChunk28deserializeHardcodedSpawnersER10IDataInput
    void serializeBlockEntities(IDataOutput &)const; // _ZNK10LevelChunk22serializeBlockEntitiesER11IDataOutput
    void serializeBiomeStates(IDataOutput &)const; // _ZNK10LevelChunk20serializeBiomeStatesER11IDataOutput
    void serializeEntities(IDataOutput &)const; // _ZNK10LevelChunk17serializeEntitiesER11IDataOutput
    void legacyDeserializeTerrain(IDataInput &); // _ZN10LevelChunk24legacyDeserializeTerrainER10IDataInput
    void checkBiomeStates(); // _ZN10LevelChunk16checkBiomeStatesEv
    void deserialize2DMaps(IDataInput &); // _ZN10LevelChunk17deserialize2DMapsER10IDataInput
    void deserializeBiomes(IDataInput &); // _ZN10LevelChunk17deserializeBiomesER10IDataInput
    void deserialize2DMapsLegacy(IDataInput &); // _ZN10LevelChunk23deserialize2DMapsLegacyER10IDataInput
    void deserializeBlockEntities(IDataInput &); // _ZN10LevelChunk24deserializeBlockEntitiesER10IDataInput
    void deserializeBorderBlocks(IDataInput &); // _ZN10LevelChunk23deserializeBorderBlocksER10IDataInput
    void legacyDeserializeBlockExtraData(IDataInput &); // _ZN10LevelChunk31legacyDeserializeBlockExtraDataER10IDataInput
    void deserializeBiomeStates(IDataInput &); // _ZN10LevelChunk22deserializeBiomeStatesER10IDataInput
    void deserializeTicks(IDataInput &); // _ZN10LevelChunk16deserializeTicksER10IDataInput
    void deserializeRandomTicks(IDataInput &); // _ZN10LevelChunk22deserializeRandomTicksER10IDataInput
    void deserializeSubChunk(unsigned char, IDataInput &); // _ZN10LevelChunk19deserializeSubChunkEhR10IDataInput
    void deserializeFinalization(IDataInput &); // _ZN10LevelChunk23deserializeFinalizationER10IDataInput
    void deserializeConversionData(IDataInput &); // _ZN10LevelChunk25deserializeConversionDataER10IDataInput
    void deserializeLoadedVersion(IDataInput &); // _ZN10LevelChunk24deserializeLoadedVersionER10IDataInput
    void _deserializeVersion(IDataInput &); // _ZN10LevelChunk19_deserializeVersionER10IDataInput
//  bool isSubChunkKey(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition // _ZNK10LevelChunk13isSubChunkKeyEN3gsl17basic_string_spanIKcLln1EEE
//  void deserializeKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN10LevelChunk14deserializeKeyEN3gsl17basic_string_spanIKcLln1EEES3_
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool); // _ZN10LevelChunk21getAboveTopSolidBlockERK13ChunkBlockPosbbb
    bool isAABBOverlappingChunk(BlockPos const&, BlockPos const&)const; // _ZNK10LevelChunk22isAABBOverlappingChunkERK8BlockPosS2_
    bool isAABBFullyInChunk(BlockPos const&, BlockPos const&)const; // _ZNK10LevelChunk18isAABBFullyInChunkERK8BlockPosS2_
    bool needsSaving(int, int)const; // _ZNK10LevelChunk11needsSavingEii
    bool isDirty()const; // _ZNK10LevelChunk7isDirtyEv
    void getBiome(ChunkBlockPos const&)const; // _ZNK10LevelChunk8getBiomeERK13ChunkBlockPos
    void setBiome(Biome const&, ChunkBlockPos const&); // _ZN10LevelChunk8setBiomeERK5BiomeRK13ChunkBlockPos
    void setGrassColor(int, ChunkBlockPos const&); // _ZN10LevelChunk13setGrassColorEiRK13ChunkBlockPos
    void setWaterColor(int, ChunkBlockPos const&); // _ZN10LevelChunk13setWaterColorEiRK13ChunkBlockPos
    void getGrassColor(ChunkBlockPos const&); // _ZN10LevelChunk13getGrassColorERK13ChunkBlockPos
    void getWaterColor(ChunkBlockPos const&); // _ZN10LevelChunk13getWaterColorERK13ChunkBlockPos
//  void setCachedTemperatureNoise(ChunkBlockPos const&, signed const); //TODO: incomplete function definition // _ZN10LevelChunk25setCachedTemperatureNoiseERK13ChunkBlockPosa
    void getCachedTemperatureNoise(ChunkBlockPos const&); // _ZN10LevelChunk25getCachedTemperatureNoiseERK13ChunkBlockPos
    bool wasTickedThisTick(Tick const&)const; // _ZNK10LevelChunk17wasTickedThisTickERK4Tick
    void _generateOriginalLightingSubChunk(BlockSource &, unsigned long, bool); // _ZN10LevelChunk33_generateOriginalLightingSubChunkER11BlockSourcemb
    void generateOriginalLighting(ChunkViewSource &, bool); // _ZN10LevelChunk24generateOriginalLightingER15ChunkViewSourceb
    void getDimension()const; // _ZNK10LevelChunk12getDimensionEv
    void _generateOriginalLighting(ChunkViewSource &, bool); // _ZN10LevelChunk25_generateOriginalLightingER15ChunkViewSourceb
    void runtimeRelightSubchunk(BlockSource &, unsigned long, std::vector<SubChunkLightUpdate> *, std::vector<BlockPos> &); // _ZN10LevelChunk22runtimeRelightSubchunkER11BlockSourcemPSt6vectorI19SubChunkLightUpdateSaIS3_EERS2_I8BlockPosSaIS7_EE
    void recomputeHeightMap(bool); // _ZN10LevelChunk18recomputeHeightMapEb
    void getTopRainBlockPos(ChunkBlockPos const&); // _ZN10LevelChunk18getTopRainBlockPosERK13ChunkBlockPos
    void clearDeletedEntities(); // _ZN10LevelChunk20clearDeletedEntitiesEv
    void setPendingEntities(std::string &); // _ZN10LevelChunk18setPendingEntitiesERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool hasEntitiesToSerialize()const; // _ZNK10LevelChunk22hasEntitiesToSerializeEv
    bool hasEntitiesPendingToLoad()const; // _ZNK10LevelChunk24hasEntitiesPendingToLoadEv
    void getState()const; // _ZNK10LevelChunk8getStateEv
    void _getTerrainDataState()const; // _ZNK10LevelChunk20_getTerrainDataStateEv
    void setSaved(); // _ZN10LevelChunk8setSavedEv
    void onDiscarded(); // _ZN10LevelChunk11onDiscardedEv
    void onBlockEntityChanged(); // _ZN10LevelChunk20onBlockEntityChangedEv
    void setupRedstoneCircuit(BlockSource &); // _ZN10LevelChunk20setupRedstoneCircuitER11BlockSource
    bool isRedstoneSetupDone()const; // _ZNK10LevelChunk19isRedstoneSetupDoneEv
    bool needsUpgradeFix()const; // _ZNK10LevelChunk15needsUpgradeFixEv
    void getLoadedFormat()const; // _ZNK10LevelChunk15getLoadedFormatEv
    void applySeasonsPostProcess(BlockSource &); // _ZN10LevelChunk23applySeasonsPostProcessER11BlockSource
    void checkSeasonsPostProcessDirty(); // _ZN10LevelChunk28checkSeasonsPostProcessDirtyEv
    void key()const; // _ZNK10LevelChunk3keyEv
    void getLastTick()const; // _ZNK10LevelChunk11getLastTickEv
    bool isReadOnly()const; // _ZNK10LevelChunk10isReadOnlyEv
    void getGenerator()const; // _ZNK10LevelChunk12getGeneratorEv
    void _setGenerator(ChunkSource *); // _ZN10LevelChunk13_setGeneratorEP11ChunkSource
    void getLevel()const; // _ZNK10LevelChunk8getLevelEv
//  void setFinalized(LevelChunk::Finalization); //TODO: incomplete function definition // _ZN10LevelChunk12setFinalizedENS_12FinalizationE
    bool hasAnyBiomeStates()const; // _ZNK10LevelChunk17hasAnyBiomeStatesEv
    void updateCachedData(BlockSource &); // _ZN10LevelChunk16updateCachedDataER11BlockSource
    void _enableBlockEntityAccessForThisThread()const; // _ZNK10LevelChunk37_enableBlockEntityAccessForThisThreadEv
    void _disableBlockEntityAccessForThisThread()const; // _ZNK10LevelChunk38_disableBlockEntityAccessForThisThreadEv
//  void _dirtyTicksCounter(LevelChunkDataField); //TODO: incomplete function definition // _ZN10LevelChunk18_dirtyTicksCounterE19LevelChunkDataField
    void getSubChunks(); // _ZN10LevelChunk12getSubChunksEv
    void getMaxSubChunks()const; // _ZNK10LevelChunk15getMaxSubChunksEv
    void getMaxSubChunkCnt(); // _ZN10LevelChunk17getMaxSubChunkCntEv
//  void fillBiomes(BiomeChunkData const&); //TODO: incomplete function definition // _ZN10LevelChunk10fillBiomesERK14BiomeChunkData
    std::string getSerializedEntitiesBuffer(); // _ZN10LevelChunk27getSerializedEntitiesBufferB5cxx11Ev
    void _setDBChunkSurroundedByNeighbors(bool); // _ZN10LevelChunk32_setDBChunkSurroundedByNeighborsEb
    void setDebugDisplaySavedState(bool); // _ZN10LevelChunk25setDebugDisplaySavedStateEb
    void _getDBChunkSurroundedByNeighbors()const; // _ZNK10LevelChunk32_getDBChunkSurroundedByNeighborsEv
    void chunkHasConvertedDataTag()const; // _ZNK10LevelChunk24chunkHasConvertedDataTagEv
//  void getDirtyTicksCounter(LevelChunkDataField)const; //TODO: incomplete function definition // _ZNK10LevelChunk20getDirtyTicksCounterE19LevelChunkDataField
    class HardcodedSpawningArea {

    public:
        HardcodedSpawningArea(); // _ZN10LevelChunk21HardcodedSpawningAreaC2Ev
        void operator==(LevelChunk::HardcodedSpawningArea const&)const; // _ZNK10LevelChunk21HardcodedSpawningAreaeqERKS0_
        HardcodedSpawningArea(LevelChunk::HardcodedSpawningArea const&); // _ZN10LevelChunk21HardcodedSpawningAreaC2ERKS0_
    };
};
