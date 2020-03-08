#pragma once

#include "chunksource/ChunkSource"
#include "chunk/SubChunkLightUpdate"
#include "chunksource/ChunkViewSource"
#include "../actor/unmapped/ActorUniqueID"
#include "../util/Tick"
#include "../../unmapped/Dimension"
#include "biome/Biome"
#include "../block/actor/BlockActor"
#include "../io/IDataOutput"
#include "../actor/unmapped/ActorLink"
#include "chunk/SubChunk"
#include "../block/unmapped/BlockSource"
#include "../util/Brightness"
#include "../block/unmapped/BlockID"
#include "../io/IDataInput"
#include "../../unmapped/ChunkBlockPos"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/ChunkPos"
#include "../util/AABB"
#include "../block/unmapped/BlockVolume"
#include "../actor/Actor"
#include "../../unmapped/BoundingBox"


class LevelChunk {

public:
    static long UPDATE_MAP_BIT_SHIFT;


    bool isOwnedByTickingThread()const;
    void getAllocatedHeight()const;
    void getSubChunks()const;
    void onTickingStarted();
    void onTickingStopped();
    void createNew(Dimension &, ChunkPos, bool);
    void createNewNoCustomDeleter(Dimension &, ChunkPos, bool);
    LevelChunk(Dimension &, ChunkPos const&, bool);
    void _reassignSubChunks(buffer_span_mut<SubChunk>);
    void _createSubChunk(unsigned long, bool, SubChunkInitMode);
    void _assertBlockEntityAccess()const;
    void _placeBlockEntity(std::shared_ptr<BlockActor>);
    void _createBlockEntity(BlockPos const&, BlockSource *, Block const&, Block const&);
    void _setLight(ChunkBlockPos const&, Brightness);
    void _lightingCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *);
    void getHeightmap(ChunkBlockPos const&)const;
    void _recalcHeight(ChunkBlockPos const&, BlockSource *);
    void placeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>);
    void trySetLightingTaskActive();
    void resetLightingTaskActive();
    void _removeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *);
    void getBlock(ChunkBlockPos const&)const;
    void setBlock(ChunkBlockPos const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>);
    void setExtraBlock(ChunkBlockPos const&, Block const&, BlockSource *);
    void getExtraBlock(ChunkBlockPos const&)const;
    void fetchBlocks(BlockPos const&, BlockVolume &)const;
    void getPosition()const;
    bool isBlockInChunk(BlockPos const&)const;
    void borderBlocksAreEnabled();
    void getBorder(ChunkBlockPos const&)const;
    void setBorder(ChunkBlockPos const&, bool);
    void addHardcodedSpawningArea(BoundingBox const&, HardcodedSpawnAreaType);
    void getMin()const;
    void getMax()const;
    void removeHardcodedSpawningArea(HardcodedSpawnAreaType);
    void findHardcodedSpawnAt(BlockPos const&);
    void getSpawningAreas()const;
    void getPreWorldGenHeightmap(ChunkBlockPos const&)const;
    void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>);
    void getTickQueue();
    void getTickQueue()const;
    void getRandomTickQueue();
    void getRandomTickQueue()const;
    void getBrightness(ChunkBlockPos const&)const;
    void getBrightness(ChunkBlockPos const&, Brightness)const;
    void getRawBrightness(ChunkBlockPos const&, Brightness)const;
    bool hasEntity(Actor &);
    void addEntity(std::unique_ptr<Actor, std::default_delete<Actor>>);
    void removeEntity(Actor &);
    void removeBlockEntity(BlockPos const&);
    bool isSkyLit(ChunkBlockPos const&)const;
    void tryChangeState(ChunkState, ChunkState);
    void changeState(ChunkState, ChunkState);
    void _changeTerrainDataState(ChunkTerrainDataState, ChunkTerrainDataState);
    void _onTickingQueueChanged();
    void _onRandomTickingQueueChanged();
    void createSubchunk(unsigned long, bool, SubChunkInitMode);
    void getConvertedInterpolantBool(unsigned long, unsigned long)const;
    void enableBlockEntityAccessForThisThread()const;
    void getEntities(Actor *, AABB const&, std::vector<Actor *, std::allocator<Actor *>> &)const;
    void getEntities(buffer_span<Actor *>, AABB const&, std::vector<Actor *, std::allocator<Actor *>> &)const;
    void getEntities(ActorType, AABB const&, std::vector<Actor *, std::allocator<Actor *>> &, bool)const;
    void getEntity(ActorUniqueID const&)const;
    void getEntities()const;
    void getBlockEntities()const;
    void getBlockEntity(ChunkBlockPos const&);
    bool hasBlockEntity(ChunkBlockPos const&);
    void setAllBlocks(buffer_span<Block const*>, short);
    void setAllLegacyBlockIDAndData(buffer_span<BlockID>, buffer_span<NibblePair>);
    void tick(BlockSource &, Tick const&);
    void _deserializeEntity(BlockSource &, IDataInput &, std::vector<ActorLink, std::allocator<ActorLink>> &);
    void setUnsaved();
    void tickBlocks(BlockSource &);
    void tickBlockEntities(BlockSource &);
    void tickRedstoneBlocks(BlockSource &);
    void tickEntitiesDirty();
    void findLightningTarget(BlockPos const&, BlockSource &);
    void serialize2DMaps(IDataOutput &)const;
    void serializeBiomes(IDataOutput &)const;
    void serializeBorderBlocks(IDataOutput &)const;
    void serializeTicks(IDataOutput &)const;
    void serializeRandomTicks(IDataOutput &)const;
    void serializeFinalization(IDataOutput &)const;
    void serializeHardcodedSpawners(IDataOutput &)const;
    void deserializeHardcodedSpawners(IDataInput &);
    void serializeBlockEntities(IDataOutput &)const;
    void serializeBiomeStates(IDataOutput &)const;
    void serializeEntities(IDataOutput &)const;
    void legacyDeserializeTerrain(IDataInput &);
    void checkBiomeStates();
    void deserialize2DMaps(IDataInput &);
    void deserializeBiomes(IDataInput &);
    void deserialize2DMapsLegacy(IDataInput &);
    void deserializeBlockEntities(IDataInput &);
    void deserializeBorderBlocks(IDataInput &);
    void legacyDeserializeBlockExtraData(IDataInput &);
    void deserializeBiomeStates(IDataInput &);
    void deserializeTicks(IDataInput &);
    void deserializeRandomTicks(IDataInput &);
    void deserializeSubChunk(unsigned char, IDataInput &);
    void deserializeFinalization(IDataInput &);
    void deserializeConversionData(IDataInput &);
    void deserializeLoadedVersion(IDataInput &);
    void _deserializeVersion(IDataInput &);
    bool isSubChunkKey(gsl::basic_string_span<char const, -1l>)const;
    void deserializeKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool);
    bool isAABBOverlappingChunk(BlockPos const&, BlockPos const&)const;
    bool isAABBFullyInChunk(BlockPos const&, BlockPos const&)const;
    bool needsSaving(int, int)const;
    bool isDirty()const;
    void getBiome(ChunkBlockPos const&)const;
    void setBiome(Biome const&, ChunkBlockPos const&);
    void setGrassColor(int, ChunkBlockPos const&);
    void setWaterColor(int, ChunkBlockPos const&);
    void getGrassColor(ChunkBlockPos const&);
    void getWaterColor(ChunkBlockPos const&);
    void setCachedTemperatureNoise(ChunkBlockPos const&, signed const);
    void getCachedTemperatureNoise(ChunkBlockPos const&);
    bool wasTickedThisTick(Tick const&)const;
    void _generateOriginalLightingSubChunk(BlockSource &, unsigned long, bool);
    void generateOriginalLighting(ChunkViewSource &, bool);
    void getDimension()const;
    void _generateOriginalLighting(ChunkViewSource &, bool);
    void runtimeRelightSubchunk(BlockSource &, unsigned long, std::vector<SubChunkLightUpdate, std::allocator<SubChunkLightUpdate>> *, std::vector&<BlockPos, std::allocator<std::vector&>>);
    void recomputeHeightMap(bool);
    void getTopRainBlockPos(ChunkBlockPos const&);
    void clearDeletedEntities();
    void setPendingEntities(std::string &);
    bool hasEntitiesToSerialize()const;
    bool hasEntitiesPendingToLoad()const;
    void getState()const;
    void _getTerrainDataState()const;
    void setSaved();
    void onDiscarded();
    void onBlockEntityChanged();
    void setupRedstoneCircuit(BlockSource &);
    bool isRedstoneSetupDone()const;
    bool needsUpgradeFix()const;
    void getLoadedFormat()const;
    void applySeasonsPostProcess(BlockSource &);
    void checkSeasonsPostProcessDirty();
    void key()const;
    void getLastTick()const;
    bool isReadOnly()const;
    void getGenerator()const;
    void _setGenerator(ChunkSource *);
    void getLevel()const;
    void setFinalized(LevelChunk::Finalization);
    bool hasAnyBiomeStates()const;
    void updateCachedData(BlockSource &);
    void _enableBlockEntityAccessForThisThread()const;
    void _disableBlockEntityAccessForThisThread()const;
    void _dirtyTicksCounter(LevelChunkDataField);
    void getSubChunks();
    void getMaxSubChunks()const;
    void getMaxSubChunkCnt();
    void fillBiomes(BiomeChunkData const&);
    void _setDBChunkSurroundedByNeighbors(bool);
    void setDebugDisplaySavedState(bool);
    void _getDBChunkSurroundedByNeighbors()const;
    void chunkHasConvertedDataTag()const;
    void getDirtyTicksCounter(LevelChunkDataField)const;
};
