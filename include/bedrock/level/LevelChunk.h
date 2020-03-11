#pragma once

#include <string>
#include "../io/IDataInput.h"
#include "../../unmapped/Dimension.h"
#include "../actor/unmapped/ActorUniqueID.h"
#include "biome/Biome.h"
#include "chunk/SubChunkLightUpdate.h"
#include "../block/unmapped/BlockVolume.h"
#include "../io/IDataOutput.h"
#include "../util/ChunkPos.h"
#include "chunksource/ChunkSource.h"
#include "../actor/unmapped/ActorLink.h"
#include "../util/Brightness.h"
#include "chunksource/ChunkViewSource.h"
#include "../../unmapped/BoundingBox.h"
#include "../block/unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "../block/unmapped/BlockID.h"
#include "../../unmapped/ChunkBlockPos.h"
#include "chunk/SubChunk.h"
#include "../block/actor/BlockActor.h"
#include <memory>
#include "../util/Tick.h"
#include "../actor/Actor.h"
#include <vector>
#include "../util/AABB.h"
#include "../../unmapped/Block.h"


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
//  void _reassignSubChunks(buffer_span_mut<SubChunk>); //TODO: incomplete function definition
//  void _createSubChunk(unsigned long, bool, SubChunkInitMode); //TODO: incomplete function definition
    void _assertBlockEntityAccess()const;
    ~LevelChunk();
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
//  void addHardcodedSpawningArea(BoundingBox const&, HardcodedSpawnAreaType); //TODO: incomplete function definition
    void getMin()const;
    void getMax()const;
//  void removeHardcodedSpawningArea(HardcodedSpawnAreaType); //TODO: incomplete function definition
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
//  void tryChangeState(ChunkState, ChunkState); //TODO: incomplete function definition
//  void changeState(ChunkState, ChunkState); //TODO: incomplete function definition
//  void _changeTerrainDataState(ChunkTerrainDataState, ChunkTerrainDataState); //TODO: incomplete function definition
    void _onTickingQueueChanged();
    void _onRandomTickingQueueChanged();
//  void createSubchunk(unsigned long, bool, SubChunkInitMode); //TODO: incomplete function definition
    void getConvertedInterpolantBool(unsigned long, unsigned long)const;
    void enableBlockEntityAccessForThisThread()const;
    void getEntities(Actor *, AABB const&, std::vector<Actor *, std::allocator<Actor *>> &)const;
//  void getEntities(buffer_span<Actor *>, AABB const&, std::vector<Actor *, std::allocator<Actor *>> &)const; //TODO: incomplete function definition
//  void getEntities(ActorType, AABB const&, std::vector<Actor *, std::allocator<Actor *>> &, bool)const; //TODO: incomplete function definition
    void getEntity(ActorUniqueID const&)const;
    void getEntities()const;
    void getBlockEntities()const;
    void getBlockEntity(ChunkBlockPos const&);
    bool hasBlockEntity(ChunkBlockPos const&);
//  void setAllBlocks(buffer_span<Block const*>, short); //TODO: incomplete function definition
//  void setAllLegacyBlockIDAndData(buffer_span<BlockID>, buffer_span<NibblePair>); //TODO: incomplete function definition
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
//  bool isSubChunkKey(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
//  void deserializeKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
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
//  void setCachedTemperatureNoise(ChunkBlockPos const&, signed const); //TODO: incomplete function definition
    void getCachedTemperatureNoise(ChunkBlockPos const&);
    bool wasTickedThisTick(Tick const&)const;
    void _generateOriginalLightingSubChunk(BlockSource &, unsigned long, bool);
    void generateOriginalLighting(ChunkViewSource &, bool);
    void getDimension()const;
    void _generateOriginalLighting(ChunkViewSource &, bool);
    void runtimeRelightSubchunk(BlockSource &, unsigned long, std::vector<SubChunkLightUpdate, std::allocator<SubChunkLightUpdate>> *, std::vector<BlockPos, std::allocator<std::vector &>> &);
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
//  void setFinalized(LevelChunk::Finalization); //TODO: incomplete function definition
    bool hasAnyBiomeStates()const;
    void updateCachedData(BlockSource &);
    void _enableBlockEntityAccessForThisThread()const;
    void _disableBlockEntityAccessForThisThread()const;
//  void _dirtyTicksCounter(LevelChunkDataField); //TODO: incomplete function definition
    void getSubChunks();
    void getMaxSubChunks()const;
    void getMaxSubChunkCnt();
//  void fillBiomes(BiomeChunkData const&); //TODO: incomplete function definition
    std::string getSerializedEntitiesBuffer();
    void _setDBChunkSurroundedByNeighbors(bool);
    void setDebugDisplaySavedState(bool);
    void _getDBChunkSurroundedByNeighbors()const;
    void chunkHasConvertedDataTag()const;
//  void getDirtyTicksCounter(LevelChunkDataField)const; //TODO: incomplete function definition
};
