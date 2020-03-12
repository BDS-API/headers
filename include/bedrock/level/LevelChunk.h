#pragma once

#include "chunksource/ChunkSource.h"
#include "chunk/SubChunk.h"
#include "../util/BlockPos.h"
#include <memory>
#include "../../unmapped/ChunkBlockPos.h"
#include "../util/AABB.h"
#include <string>
#include "biome/Biome.h"
#include "../actor/unmapped/ActorLink.h"
#include "../actor/unmapped/ActorUniqueID.h"
#include "../actor/Actor.h"
#include "chunk/SubChunkLightUpdate.h"
#include "../io/IDataInput.h"
#include "../../unmapped/Block.h"
#include "../util/Brightness.h"
#include "../block/unmapped/BlockSource.h"
#include "../block/actor/BlockActor.h"
#include <vector>
#include "../io/IDataOutput.h"
#include "../block/unmapped/BlockID.h"
#include "../../unmapped/Dimension.h"
#include "../util/ChunkPos.h"
#include "chunksource/ChunkViewSource.h"
#include "../util/Tick.h"
#include "../block/unmapped/BlockVolume.h"
#include "../../unmapped/BoundingBox.h"


class LevelChunk {

public:
    class HardcodedSpawningArea;

    static long UPDATE_MAP_BIT_SHIFT;

    void fetchBlocks(BlockPos const&, BlockVolume &)const;
    void onTickingStarted();
    void getConvertedInterpolantBool(unsigned long, unsigned long)const;
    void trySetLightingTaskActive();
    bool hasBlockEntity(ChunkBlockPos const&);
    void tickBlockEntities(BlockSource &);
    void removeEntity(Actor &);
    ~LevelChunk();
    void _generateOriginalLightingSubChunk(BlockSource &, unsigned long, bool);
    bool isDirty()const;
    void tickEntitiesDirty();
    void getTickQueue()const;
//  void setCachedTemperatureNoise(ChunkBlockPos const&, signed const); //TODO: incomplete function definition
    void getSubChunks()const;
    void tick(BlockSource &, Tick const&);
    void getRandomTickQueue()const;
    bool needsUpgradeFix()const;
    void updateCachedData(BlockSource &);
//  void fillBiomes(BiomeChunkData const&); //TODO: incomplete function definition
    void createNewNoCustomDeleter(Dimension &, ChunkPos, bool);
    void getAllocatedHeight()const;
    void _getTerrainDataState()const;
    void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>);
    void getTopRainBlockPos(ChunkBlockPos const&);
    void serializeFinalization(IDataOutput &)const;
    void deserializeBiomeStates(IDataInput &);
    bool isBlockInChunk(BlockPos const&)const;
    void serializeBlockEntities(IDataOutput &)const;
    void setGrassColor(int, ChunkBlockPos const&);
    void serializeBiomes(IDataOutput &)const;
    void getMax()const;
    void createNew(Dimension &, ChunkPos, bool);
//  void getEntities(buffer_span<Actor *>, AABB const&, std::vector<Actor *> &)const; //TODO: incomplete function definition
    void setWaterColor(int, ChunkBlockPos const&);
    void getPosition()const;
//  void addHardcodedSpawningArea(BoundingBox const&, HardcodedSpawnAreaType); //TODO: incomplete function definition
    bool isSkyLit(ChunkBlockPos const&)const;
    void getGrassColor(ChunkBlockPos const&);
    void addEntity(std::unique_ptr<Actor>);
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool);
//  void setAllLegacyBlockIDAndData(buffer_span<BlockID>, buffer_span<NibblePair>); //TODO: incomplete function definition
//  void _dirtyTicksCounter(LevelChunkDataField); //TODO: incomplete function definition
    void getLevel()const;
    void _placeBlockEntity(std::shared_ptr<BlockActor>);
    void getEntities()const;
    void deserializeTicks(IDataInput &);
    void deserializeBlockEntities(IDataInput &);
    void getBlockEntity(ChunkBlockPos const&);
    void _onTickingQueueChanged();
    bool hasEntitiesPendingToLoad()const;
    void getBorder(ChunkBlockPos const&)const;
    void setUnsaved();
    void clearDeletedEntities();
    void getMaxSubChunkCnt();
    void _removeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *);
    void onTickingStopped();
    void setBlock(ChunkBlockPos const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>);
    void _onRandomTickingQueueChanged();
    void legacyDeserializeTerrain(IDataInput &);
    void _lightingCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *);
//  void createSubchunk(unsigned long, bool, SubChunkInitMode); //TODO: incomplete function definition
    void getSubChunks();
    void recomputeHeightMap(bool);
    void setSaved();
    void _createBlockEntity(BlockPos const&, BlockSource *, Block const&, Block const&);
    void enableBlockEntityAccessForThisThread()const;
    bool needsSaving(int, int)const;
    bool wasTickedThisTick(Tick const&)const;
    void getBiome(ChunkBlockPos const&)const;
    void serializeHardcodedSpawners(IDataOutput &)const;
    void deserialize2DMapsLegacy(IDataInput &);
    void _setDBChunkSurroundedByNeighbors(bool);
//  void _reassignSubChunks(buffer_span_mut<SubChunk>); //TODO: incomplete function definition
//  void removeHardcodedSpawningArea(HardcodedSpawnAreaType); //TODO: incomplete function definition
    void _deserializeEntity(BlockSource &, IDataInput &, std::vector<ActorLink> &);
    void _deserializeVersion(IDataInput &);
    void serialize2DMaps(IDataOutput &)const;
    void _getDBChunkSurroundedByNeighbors()const;
    void removeBlockEntity(BlockPos const&);
    void setExtraBlock(ChunkBlockPos const&, Block const&, BlockSource *);
    void setupRedstoneCircuit(BlockSource &);
    void getMaxSubChunks()const;
    void deserializeSubChunk(unsigned char, IDataInput &);
    bool isAABBFullyInChunk(BlockPos const&, BlockPos const&)const;
    void getMin()const;
    void getSpawningAreas()const;
    std::string getSerializedEntitiesBuffer();
    void applySeasonsPostProcess(BlockSource &);
    void deserializeBiomes(IDataInput &);
    void onDiscarded();
//  void deserializeKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void getTickQueue();
    void _setGenerator(ChunkSource *);
    void getLoadedFormat()const;
//  void setAllBlocks(buffer_span<Block const*>, short); //TODO: incomplete function definition
//  void setFinalized(LevelChunk::Finalization); //TODO: incomplete function definition
    void serializeBiomeStates(IDataOutput &)const;
    void _generateOriginalLighting(ChunkViewSource &, bool);
    void chunkHasConvertedDataTag()const;
    void deserializeHardcodedSpawners(IDataInput &);
    void serializeEntities(IDataOutput &)const;
    bool isReadOnly()const;
    void getExtraBlock(ChunkBlockPos const&)const;
    void _assertBlockEntityAccess()const;
    void borderBlocksAreEnabled();
    void getRandomTickQueue();
    void legacyDeserializeBlockExtraData(IDataInput &);
    void key()const;
    void runtimeRelightSubchunk(BlockSource &, unsigned long, std::vector<SubChunkLightUpdate> *, std::vector<BlockPos> &);
    void getGenerator()const;
    void checkSeasonsPostProcessDirty();
    void getState()const;
//  void tryChangeState(ChunkState, ChunkState); //TODO: incomplete function definition
    void getBlock(ChunkBlockPos const&)const;
    void resetLightingTaskActive();
    void _disableBlockEntityAccessForThisThread()const;
    bool isOwnedByTickingThread()const;
    void deserializeRandomTicks(IDataInput &);
    void _setLight(ChunkBlockPos const&, Brightness);
    void deserialize2DMaps(IDataInput &);
    void setDebugDisplaySavedState(bool);
    void getWaterColor(ChunkBlockPos const&);
//  bool isSubChunkKey(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    bool hasEntitiesToSerialize()const;
    bool hasAnyBiomeStates()const;
    void _enableBlockEntityAccessForThisThread()const;
    void getBlockEntities()const;
//  void _createSubChunk(unsigned long, bool, SubChunkInitMode); //TODO: incomplete function definition
    void getPreWorldGenHeightmap(ChunkBlockPos const&)const;
    void getBrightness(ChunkBlockPos const&)const;
//  void getEntities(ActorType, AABB const&, std::vector<Actor *> &, bool)const; //TODO: incomplete function definition
    bool isAABBOverlappingChunk(BlockPos const&, BlockPos const&)const;
    void serializeTicks(IDataOutput &)const;
    void tickBlocks(BlockSource &);
    void getBrightness(ChunkBlockPos const&, Brightness)const;
    void getRawBrightness(ChunkBlockPos const&, Brightness)const;
//  void changeState(ChunkState, ChunkState); //TODO: incomplete function definition
    void setPendingEntities(std::string &);
//  void getDirtyTicksCounter(LevelChunkDataField)const; //TODO: incomplete function definition
    void getDimension()const;
    void _recalcHeight(ChunkBlockPos const&, BlockSource *);
    void serializeBorderBlocks(IDataOutput &)const;
    void setBorder(ChunkBlockPos const&, bool);
    void getLastTick()const;
    void findHardcodedSpawnAt(BlockPos const&);
    void getHeightmap(ChunkBlockPos const&)const;
    bool hasEntity(Actor &);
    void tickRedstoneBlocks(BlockSource &);
    void getEntity(ActorUniqueID const&)const;
    void getEntities(Actor *, AABB const&, std::vector<Actor *> &)const;
    void findLightningTarget(BlockPos const&, BlockSource &);
    void placeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>);
    void deserializeLoadedVersion(IDataInput &);
    void deserializeFinalization(IDataInput &);
    void serializeRandomTicks(IDataOutput &)const;
    void deserializeConversionData(IDataInput &);
    bool isRedstoneSetupDone()const;
    LevelChunk(Dimension &, ChunkPos const&, bool);
    void onBlockEntityChanged();
    void setBiome(Biome const&, ChunkBlockPos const&);
//  void _changeTerrainDataState(ChunkTerrainDataState, ChunkTerrainDataState); //TODO: incomplete function definition
    void deserializeBorderBlocks(IDataInput &);
    void checkBiomeStates();
    void generateOriginalLighting(ChunkViewSource &, bool);
    void getCachedTemperatureNoise(ChunkBlockPos const&);
    class HardcodedSpawningArea {

    public:
        HardcodedSpawningArea();
        HardcodedSpawningArea(LevelChunk::HardcodedSpawningArea const&);
        void operator==(LevelChunk::HardcodedSpawningArea const&)const;
    };
};
