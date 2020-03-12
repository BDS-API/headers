#pragma once

#include "../util/Brightness.h"
#include <memory>
#include <vector>
#include <string>
#include "../util/ChunkPos.h"


class LevelChunk {

public:
    class HardcodedSpawningArea;

    static long UPDATE_MAP_BIT_SHIFT;

    bool isSkyLit(ChunkBlockPos const&)const;
    void trySetLightingTaskActive();
    void getPreWorldGenHeightmap(ChunkBlockPos const&)const;
    void fetchBlocks(BlockPos const&, BlockVolume &)const;
    void setSaved();
    void getGrassColor(ChunkBlockPos const&);
//  void removeHardcodedSpawningArea(HardcodedSpawnAreaType); //TODO: incomplete function definition
    void onTickingStopped();
    void removeBlockEntity(BlockPos const&);
    void _deserializeEntity(BlockSource &, IDataInput &, std::vector<ActorLink> &);
    bool isAABBFullyInChunk(BlockPos const&, BlockPos const&)const;
//  void setFinalized(LevelChunk::Finalization); //TODO: incomplete function definition
    void getBiome(ChunkBlockPos const&)const;
    void setPendingEntities(std::string &);
    void getHeightmap(ChunkBlockPos const&)const;
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool);
//  void tryChangeState(ChunkState, ChunkState); //TODO: incomplete function definition
    void setUnsaved();
    void _getDBChunkSurroundedByNeighbors()const;
    void placeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>);
    void _lightingCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *);
    void tickBlocks(BlockSource &);
    bool hasBlockEntity(ChunkBlockPos const&);
    void _generateOriginalLighting(ChunkViewSource &, bool);
    void tickEntitiesDirty();
    void serializeBiomeStates(IDataOutput &)const;
    void getLevel()const;
    void applySeasonsPostProcess(BlockSource &);
    void getWaterColor(ChunkBlockPos const&);
    void _setGenerator(ChunkSource *);
    void serializeBlockEntities(IDataOutput &)const;
    void getBorder(ChunkBlockPos const&)const;
    void borderBlocksAreEnabled();
//  void deserializeKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void getBlockEntity(ChunkBlockPos const&);
    void setBorder(ChunkBlockPos const&, bool);
    void serializeRandomTicks(IDataOutput &)const;
    void getSpawningAreas()const;
    void _disableBlockEntityAccessForThisThread()const;
    void legacyDeserializeTerrain(IDataInput &);
    void _removeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *);
    LevelChunk(Dimension &, ChunkPos const&, bool);
    void getMin()const;
//  void setAllBlocks(buffer_span<Block const*>, short); //TODO: incomplete function definition
    void getExtraBlock(ChunkBlockPos const&)const;
    void _recalcHeight(ChunkBlockPos const&, BlockSource *);
    void serializeEntities(IDataOutput &)const;
    bool needsSaving(int, int)const;
    void serializeFinalization(IDataOutput &)const;
    void createNew(Dimension &, ChunkPos, bool);
//  void createSubchunk(unsigned long, bool, SubChunkInitMode); //TODO: incomplete function definition
    void deserializeConversionData(IDataInput &);
    void getSubChunks();
    void deserializeRandomTicks(IDataInput &);
    void getGenerator()const;
    void getRandomTickQueue();
//  void _reassignSubChunks(buffer_span_mut<SubChunk>); //TODO: incomplete function definition
    void deserializeHardcodedSpawners(IDataInput &);
//  void getDirtyTicksCounter(LevelChunkDataField)const; //TODO: incomplete function definition
    void tick(BlockSource &, Tick const&);
    void findHardcodedSpawnAt(BlockPos const&);
    bool isDirty()const;
    bool hasEntitiesToSerialize()const;
    void setGrassColor(int, ChunkBlockPos const&);
    void setupRedstoneCircuit(BlockSource &);
//  void getEntities(buffer_span<Actor *>, AABB const&, std::vector<Actor *> &)const; //TODO: incomplete function definition
    bool isOwnedByTickingThread()const;
    void deserializeFinalization(IDataInput &);
    void recomputeHeightMap(bool);
    void updateCachedData(BlockSource &);
    void getPosition()const;
    void serializeHardcodedSpawners(IDataOutput &)const;
    bool isAABBOverlappingChunk(BlockPos const&, BlockPos const&)const;
    void onBlockEntityChanged();
//  bool isSubChunkKey(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void checkSeasonsPostProcessDirty();
    void getLastTick()const;
    void getRandomTickQueue()const;
    void generateOriginalLighting(ChunkViewSource &, bool);
    ~LevelChunk();
    void getEntities(Actor *, AABB const&, std::vector<Actor *> &)const;
    void serialize2DMaps(IDataOutput &)const;
    void _onTickingQueueChanged();
    void _onRandomTickingQueueChanged();
    void getEntity(ActorUniqueID const&)const;
//  void getEntities(ActorType, AABB const&, std::vector<Actor *> &, bool)const; //TODO: incomplete function definition
    void deserialize2DMaps(IDataInput &);
    void _setDBChunkSurroundedByNeighbors(bool);
    bool hasAnyBiomeStates()const;
//  void _createSubChunk(unsigned long, bool, SubChunkInitMode); //TODO: incomplete function definition
    std::string getSerializedEntitiesBuffer();
//  void fillBiomes(BiomeChunkData const&); //TODO: incomplete function definition
    void resetLightingTaskActive();
    void getMaxSubChunkCnt();
    void tickRedstoneBlocks(BlockSource &);
    void checkBiomeStates();
    void getConvertedInterpolantBool(unsigned long, unsigned long)const;
    void key()const;
    void _assertBlockEntityAccess()const;
    void deserializeBorderBlocks(IDataInput &);
    void deserializeLoadedVersion(IDataInput &);
    void getSubChunks()const;
    bool hasEntity(Actor &);
    void getEntities()const;
    void legacyDeserializeBlockExtraData(IDataInput &);
    void addEntity(std::unique_ptr<Actor>);
    void getMax()const;
//  void setAllLegacyBlockIDAndData(buffer_span<BlockID>, buffer_span<NibblePair>); //TODO: incomplete function definition
    void runtimeRelightSubchunk(BlockSource &, unsigned long, std::vector<SubChunkLightUpdate> *, std::vector<BlockPos> &);
    void getBrightness(ChunkBlockPos const&)const;
    void getBrightness(ChunkBlockPos const&, Brightness)const;
    void onDiscarded();
    void removeEntity(Actor &);
    void tickBlockEntities(BlockSource &);
    void getCachedTemperatureNoise(ChunkBlockPos const&);
    void getLoadedFormat()const;
    void findLightningTarget(BlockPos const&, BlockSource &);
    void onTickingStarted();
    void getTickQueue()const;
//  void changeState(ChunkState, ChunkState); //TODO: incomplete function definition
    bool wasTickedThisTick(Tick const&)const;
    bool isReadOnly()const;
    void setWaterColor(int, ChunkBlockPos const&);
    void getTickQueue();
    void setBiome(Biome const&, ChunkBlockPos const&);
    void getBlock(ChunkBlockPos const&)const;
//  void _changeTerrainDataState(ChunkTerrainDataState, ChunkTerrainDataState); //TODO: incomplete function definition
    void serializeBorderBlocks(IDataOutput &)const;
//  void _dirtyTicksCounter(LevelChunkDataField); //TODO: incomplete function definition
    void getRawBrightness(ChunkBlockPos const&, Brightness)const;
    void serializeTicks(IDataOutput &)const;
    void getBlockEntities()const;
    void _createBlockEntity(BlockPos const&, BlockSource *, Block const&, Block const&);
    void deserializeTicks(IDataInput &);
    void enableBlockEntityAccessForThisThread()const;
    void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>);
    void deserializeBiomes(IDataInput &);
//  void setCachedTemperatureNoise(ChunkBlockPos const&, signed const); //TODO: incomplete function definition
    void createNewNoCustomDeleter(Dimension &, ChunkPos, bool);
//  void addHardcodedSpawningArea(BoundingBox const&, HardcodedSpawnAreaType); //TODO: incomplete function definition
    void setDebugDisplaySavedState(bool);
    void chunkHasConvertedDataTag()const;
    void getState()const;
    void clearDeletedEntities();
    void setBlock(ChunkBlockPos const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>);
    void _placeBlockEntity(std::shared_ptr<BlockActor>);
    void _getTerrainDataState()const;
    void deserializeBiomeStates(IDataInput &);
    bool isBlockInChunk(BlockPos const&)const;
    void serializeBiomes(IDataOutput &)const;
    void _setLight(ChunkBlockPos const&, Brightness);
    void setExtraBlock(ChunkBlockPos const&, Block const&, BlockSource *);
    void deserialize2DMapsLegacy(IDataInput &);
    bool hasEntitiesPendingToLoad()const;
    void deserializeSubChunk(unsigned char, IDataInput &);
    bool needsUpgradeFix()const;
    void getAllocatedHeight()const;
    void getDimension()const;
    bool isRedstoneSetupDone()const;
    void _enableBlockEntityAccessForThisThread()const;
    void deserializeBlockEntities(IDataInput &);
    void _generateOriginalLightingSubChunk(BlockSource &, unsigned long, bool);
    void getMaxSubChunks()const;
    void getTopRainBlockPos(ChunkBlockPos const&);
    void _deserializeVersion(IDataInput &);
    class HardcodedSpawningArea {

    public:
        HardcodedSpawningArea();
        void operator==(LevelChunk::HardcodedSpawningArea const&)const;
        HardcodedSpawningArea(LevelChunk::HardcodedSpawningArea const&);
    };
};
