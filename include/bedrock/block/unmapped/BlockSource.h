#pragma once

#include "../../util/BlockPos.h"
#include <memory>
#include <vector>
#include <functional>
#include "../../util/Brightness.h"


class BlockSource {

public:
    ~BlockSource();
    void checkBlockDestroyPermissions(Actor &, BlockPos const&, ItemStack const&, bool);
    bool isConsideredSolidBlock(int, int, int);
    BlockSource(Level &, Dimension &, ChunkSource &, bool, bool);
    void _getSkyDarken()const;
    void updateNeighborsAt(BlockPos const&);
    void fetchCollisionShapes(AABB const&, float *, bool, Actor *);
    void getBlockEntity(int, int, int);
    void findNextTopSolidBlockUnder(BlockPos &);
    void setBlock(BlockPos const&, Block const&, int, std::shared_ptr<BlockActor>, ActorBlockSyncMessage const*);
    void getPublicSource()const;
    void setGrassColor(int, BlockPos const&, int);
    bool canSeeSky(int, int, int)const;
    void setBlockNoUpdate(int, int, int, Block const&);
    void getDimension()const;
    void getGrassColor(BlockPos const&)const;
//  void findNextSpawnBlockUnder(BlockPos &, MaterialType); //TODO: incomplete function definition
    void findNextTopSolidBlockAbove(BlockPos &);
    bool hasBlock(BlockPos const&)const;
    bool hasChunksAt(BlockPos const&, int)const;
//  void fetchNearestEntityNotOfType(Actor *, Vec3 const&, float, ActorType); //TODO: incomplete function definition
    void areChunksFullyLoaded(BlockPos const&, int);
    void fireBlockEntityChanged(BlockActor &);
//  void fetchEntities(buffer_span<Actor *>, AABB const&); //TODO: incomplete function definition
    bool isEmptyBlock(int, int, int);
//  bool containsLiquid(AABB const&, MaterialType); //TODO: incomplete function definition
    void fetchEntities(Actor *, AABB const&);
//  void fetchNearestEntityOfType(Actor *, AABB const&, ActorType); //TODO: incomplete function definition
    void clip(Vec3 const&, Vec3 const&, bool, bool, int, bool, bool);
//  void fetchNearestEntityOfType(Actor *, Vec3 const&, float, ActorType); //TODO: incomplete function definition
    void fireBlockEntityAboutToBeRemoved(std::shared_ptr<BlockActor>);
    bool hasTickInCurrentTick(BlockPos const&)const;
    void getBlock(BlockPos const&, unsigned int)const;
    void getAboveTopSolidBlock(int, int, bool, bool);
    void getBiome(BlockPos const&);
    void countBlocksOfType(BlockLegacy const&, BlockPos const&, BlockPos const&, unsigned long)const;
    void getChunkAt(int, int, int)const;
    void setBlock(int, int, int, Block const&, int);
    void getHeightmap(BlockPos const&)const;
    void fireBlockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    void fireBrightnessChanged(BlockPos const&);
    void getDimensionId()const;
    void addToRandomTickingQueuePercentChance(BlockPos const&, Block const&, float, int);
    void getBlockEntity(BlockPos const&);
    void setBlock(int, int, int, Block const&, int, std::shared_ptr<BlockActor>);
    void setLiquidBlock(BlockPos const&, Block const&, bool, int);
    void getDimensionConst()const;
    bool hasChunksAt(int, int, int, int)const;
    void mayPlace(Block const&, BlockPos const&, unsigned char, Actor *, bool);
    void fetchBlocks(BlockPos const&, BlockVolume &)const;
    bool isEmptyWaterBlock(BlockPos const&)const;
    void blockEvent(int, int, int, int, int);
    bool isNearUnloadedChunks(ChunkPos const&);
    void shouldFireEvents(LevelChunk &)const;
//  bool ticksFromNow(BlockPos const&, TickingQueueType, int)const; //TODO: incomplete function definition
    void setWaterColor(int, BlockPos const&, int);
    void removeListener(BlockSourceListener &);
//  void _getTickingQueue(BlockPos const&, TickingQueueType)const; //TODO: incomplete function definition
    void getChunk(int, int)const;
    bool isSolidBlockingBlock(int, int, int)const;
    void getLightColor(BlockPos const&, Brightness);
    bool canSeeSkyFromBelowWater(BlockPos const&);
    void getExtraBlock(BlockPos const&)const;
//  bool containsMaterial(AABB const&, MaterialType); //TODO: incomplete function definition
    void getHeightmapPos(BlockPos const&)const;
    void getLevel()const;
    bool isConsideredSolidBlock(BlockPos const&);
    void getVisualLiquidHeight(Vec3 const&);
    void setRandomTickingQueue(BlockTickingQueue &);
//  bool hasTickInCurrentTick(BlockPos const&, TickingQueueType)const; //TODO: incomplete function definition
    void fetchBlockEntities(AABB const&, std::vector<BlockActor *> &);
    void getMaterial(BlockPos const&)const;
    void getSeenPercent(Vec3 const&, AABB const&);
    void fetchBlocksInCylinder(BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)>);
    void removeBlockEntity(BlockPos const&);
    void getBrightnessPair(BlockPos const&)const;
    bool containsFireBlock(AABB const&);
    void removeBlock(BlockPos const&);
//  void getHardcodedEntitySpawn(BlockPos const&, ActorType)const; //TODO: incomplete function definition
    bool hasChunksAt(BlockPos const&, BlockPos const&)const;
    bool isInstaticking(BlockPos const&)const;
    bool hasChunksAt(Bounds const&)const;
    bool isEmptyBlock(BlockPos const&);
//  bool hasTickInPendingTicks(BlockPos const&, TickingQueueType)const; //TODO: incomplete function definition
    void getConstBiome(BlockPos const&)const;
    bool isUnobstructedByEntities(AABB const&, Actor *);
    void _blockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    void setTickingQueue(BlockTickingQueue &);
    void setBorderBlock(BlockPos const&, bool);
    void getAboveTopSolidBlock(BlockPos const&, bool, bool);
    bool isUnderWater(BlockPos const&)const;
    void getRawBrightness(int, int, int, bool);
    void fireBlockEvent(int, int, int, int, int);
//  void fetchEntities2(ActorType, AABB const&, bool); //TODO: incomplete function definition
    void getBrightness(BlockPos const&)const;
    void setExtraBlock(BlockPos const&, Block const&, int);
//  void _addToTickingQueue(BlockPos const&, Block const&, int, int, TickingQueueType); //TODO: incomplete function definition
    void fetchBlocksInCylinderSorted(BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)>);
    void clearCachedLastChunk();
    void updateNeighborsAt(BlockPos const&, BlockPos const&);
    bool containsAnyLiquid(AABB const&);
    void getHeightmap(int, int);
    bool hasTickInPendingTicks(BlockPos const&)const;
    void getChunk(ChunkPos const&)const;
//  void getNextTickUpdateForPos(BlockPos const&, TickingQueueType, Tick &)const; //TODO: incomplete function definition
    bool hasBorderBlock(BlockPos);
    void setBlock(BlockPos const&, Block const&, int, ActorBlockSyncMessage const*);
    void getRawBrightness(BlockPos const&, bool, bool)const;
    bool isMotionBlockingBlock(BlockPos const&)const;
    void neighborChanged(BlockPos const&, BlockPos const&);
    void _getBlockPermissions(BlockPos const&, bool);
    void getLevel();
    bool allowsRunes(BlockPos const&);
//  bool isPositionUnderLiquid(Vec3 const&, MaterialType); //TODO: incomplete function definition
//  void _removeFromTickingQueue(BlockPos const&, Block const&, TickingQueueType); //TODO: incomplete function definition
    void addUnloadedChunksAABBs(AABB const&);
    void tryGetBiome(BlockPos const&)const;
    void removeFromRandomTickingQueue(BlockPos const&, Block const&);
    void updateNeighborsAtExceptFromFacing(BlockPos const&, BlockPos const&, int);
    void blockEvent(BlockPos const&, int, int);
    bool isSolidBlockingBlockAndNotSignalSource(BlockPos const&);
    bool isSolidBlockingBlock(BlockPos const&)const;
    void fetchActors(ActorDefinitionIdentifier const&, AABB const&);
    bool containsAnySolidBlocking(AABB const&);
    bool containsAny(BlockPos const&, BlockPos const&);
    void setBlockNoUpdate(BlockPos const&, Block const&);
//  bool isTouchingMaterial(BlockPos const&, MaterialType)const; //TODO: incomplete function definition
    void getBlock(int, int, int)const;
    void clearDeletedEntities();
    void generateUnloadedChunkAABB(ChunkPos const&);
//  void fetchEntities(ActorType, AABB const&, Actor *); //TODO: incomplete function definition
    bool isUnderWater(Vec3 const&, Block const&)const;
    void setPlaceChunkPos(BlockPos const&);
    void getTopBlock(int, int &, int);
    bool canSeeSky(BlockPos const&)const;
    void getLevelConst()const;
    void areAllChunksLoaded(BlockPos const&, BlockVolume &)const;
    void addListener(BlockSourceListener &);
    void fetchBlockEntities(AABB const&);
    void fetchAABBs(AABB const&, bool);
    bool containsAnyBlockOfType(BlockPos const&, BlockPos const&, Block const&);
    bool isInWall(Vec3 const&);
    void addToRandomTickingQueue(BlockPos const&, Block const&, int, int);
    bool isOwnerThread()const;
    bool isMotionBlockingBlock(int, int, int)const;
    void fireAreaChanged(BlockPos const&, BlockPos const&);
    void getDimension();
    void getPlaceChunkPos()const;
    void removeBlock(int, int, int);
    bool hasChunksAt(AABB const&)const;
    bool hasBlock(int, int, int);
    void getBlock(BlockPos const&)const;
    void getLiquidBlock(BlockPos const&)const;
//  bool isUnobstructedByEntities(AABB const&, buffer_span<Actor *>); //TODO: incomplete function definition
    void removeFromTickingQueue(BlockPos const&, Block const&);
//  void _getLiquidHeight(BlockPos const&, MaterialType, bool); //TODO: incomplete function definition
    void getAllocatedHeightAt(BlockPos const&);
    void _hasChunksAt(Bounds const&)const;
    void getWritableChunk(ChunkPos const&);
    bool isOnTopOfBlock(AABB const&, std::function<bool (Block const&)>);
    void getChunkSource();
    void onChunkDiscarded(LevelChunk &);
    void getMaterial(int, int, int)const;
    void getChunkAt(BlockPos const&)const;
    bool isOnTopOfBlock(AABB const&, BlockLegacy const&);
    void _fetchBorderBlockCollisions(AABB const&, Actor *, bool);
    void getMaxHeight()const;
    void getWaterColor(BlockPos const&)const;
    void fireEntityChanged(Actor &);
    void addToTickingQueue(BlockPos const&, Block const&, int, int);
    void fetchBlocksInBoxSorted(BoundingBox const&, std::function<bool (Block const&)>);
    void fetchBlocksInBox(BoundingBox const&, std::function<bool (Block const&)>);
    void addVoidFloor(AABB const&);
    void checkBlockPermissions(Actor &, BlockPos const&, unsigned char, ItemStack const&, bool);
//  bool canProvideSupport(BlockPos const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
};
