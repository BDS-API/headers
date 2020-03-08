#pragma once

#include "../../level/chunksource/ChunkSource"
#include "../BlockLegacy"
#include "../../util/Vec3"
#include "../../actor/unmapped/ActorDefinitionIdentifier"
#include "../../item/ItemStack"
#include "../../util/Tick"
#include "../../../unmapped/Dimension"
#include "../actor/BlockActor"
#include "../../util/Brightness"
#include "../../actor/unmapped/ActorBlockSyncMessage"
#include "../../level/Level"
#include "../../level/LevelChunk"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../util/ChunkPos"
#include "../../util/AABB"
#include "../../actor/Actor"
#include "../../../unmapped/Bounds"
#include "../../../unmapped/BoundingBox"


class BlockSource {

public:
    virtual BlockSource::~BlockSource()

    void getMaxHeight()const;
    BlockSource(Level &, Dimension &, ChunkSource &, bool, bool);
    void addListener(BlockSourceListener &);
    void getLevel()const;
    void getLevel();
    void getChunkSource();
    void checkBlockDestroyPermissions(Actor &, BlockPos const&, ItemStack const&, bool);
    void getBlock(BlockPos const&)const;
    void _getBlockPermissions(BlockPos const&, bool);
    void checkBlockPermissions(Actor &, BlockPos const&, unsigned char, ItemStack const&, bool);
    bool hasBorderBlock(BlockPos);
    void getLevelConst()const;
    void getDimension()const;
    void getDimension();
    void getDimensionId()const;
    void getDimensionConst()const;
    void removeListener(BlockSourceListener &);
    void clearDeletedEntities();
    void getChunk(int, int)const;
    void getChunk(ChunkPos const&)const;
    void addToTickingQueue(BlockPos const&, Block const&, int, int);
    void _addToTickingQueue(BlockPos const&, Block const&, int, int, TickingQueueType);
    void addToRandomTickingQueuePercentChance(BlockPos const&, Block const&, float, int);
    void addToRandomTickingQueue(BlockPos const&, Block const&, int, int);
    void removeFromTickingQueue(BlockPos const&, Block const&);
    void _removeFromTickingQueue(BlockPos const&, Block const&, TickingQueueType);
    void removeFromRandomTickingQueue(BlockPos const&, Block const&);
    bool isInstaticking(BlockPos const&)const;
    void _getTickingQueue(BlockPos const&, TickingQueueType)const;
    bool hasTickInCurrentTick(BlockPos const&)const;
    bool hasTickInCurrentTick(BlockPos const&, TickingQueueType)const;
    bool hasTickInPendingTicks(BlockPos const&)const;
    bool hasTickInPendingTicks(BlockPos const&, TickingQueueType)const;
    void getNextTickUpdateForPos(BlockPos const&, TickingQueueType, Tick &)const;
    bool ticksFromNow(BlockPos const&, TickingQueueType, int)const;
    void setTickingQueue(BlockTickingQueue &);
    void setRandomTickingQueue(BlockTickingQueue &);
    void getWritableChunk(ChunkPos const&);
    void shouldFireEvents(LevelChunk &)const;
    bool hasBlock(BlockPos const&)const;
    void getChunkAt(BlockPos const&)const;
    void _hasChunksAt(Bounds const&)const;
    bool hasChunksAt(Bounds const&)const;
    bool hasChunksAt(AABB const&)const;
    bool hasChunksAt(BlockPos const&, int)const;
    bool hasChunksAt(int, int, int, int)const;
    bool hasChunksAt(BlockPos const&, BlockPos const&)const;
    void areChunksFullyLoaded(BlockPos const&, int);
    void getBlock(BlockPos const&, unsigned int)const;
    void getExtraBlock(BlockPos const&)const;
    void countBlocksOfType(BlockLegacy const&, BlockPos const&, BlockPos const&, unsigned long)const;
    void getChunkAt(int, int, int)const;
    void getBlock(int, int, int)const;
    void setBlock(int, int, int, Block const&, int);
    void setBlock(BlockPos const&, Block const&, int, ActorBlockSyncMessage const*);
    void setBlock(BlockPos const&, Block const&, int, std::shared_ptr<BlockActor>, ActorBlockSyncMessage const*);
    void setBlock(int, int, int, Block const&, int, std::shared_ptr<BlockActor>);
    void setBlockNoUpdate(int, int, int, Block const&);
    void setBlockNoUpdate(BlockPos const&, Block const&);
    void setBorderBlock(BlockPos const&, bool);
    void _blockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    void setExtraBlock(BlockPos const&, Block const&, int);
    void getLiquidBlock(BlockPos const&)const;
    void getAllocatedHeightAt(BlockPos const&);
    void getLightColor(BlockPos const&, Brightness);
    void getBrightnessPair(BlockPos const&)const;
    void getBrightness(BlockPos const&)const;
    void getRawBrightness(BlockPos const&, bool, bool)const;
    void _getSkyDarken()const;
    void getAboveTopSolidBlock(BlockPos const&, bool, bool);
    bool canSeeSky(BlockPos const&)const;
    void getMaterial(BlockPos const&)const;
    void getHeightmap(BlockPos const&)const;
    void getHeightmapPos(BlockPos const&)const;
    bool isSolidBlockingBlockAndNotSignalSource(BlockPos const&);
    bool isSolidBlockingBlock(int, int, int)const;
    bool isSolidBlockingBlock(BlockPos const&)const;
    bool isMotionBlockingBlock(int, int, int)const;
    bool isMotionBlockingBlock(BlockPos const&)const;
    bool isConsideredSolidBlock(int, int, int);
    bool isConsideredSolidBlock(BlockPos const&);
    void mayPlace(Block const&, BlockPos const&, unsigned char, Actor *, bool);
    bool isUnobstructedByEntities(AABB const&, Actor *);
    void neighborChanged(BlockPos const&, BlockPos const&);
    void updateNeighborsAt(BlockPos const&);
    void updateNeighborsAt(BlockPos const&, BlockPos const&);
    void updateNeighborsAtExceptFromFacing(BlockPos const&, BlockPos const&, int);
    void fireBlockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    void setLiquidBlock(BlockPos const&, Block const&, bool, int);
    void removeBlock(int, int, int);
    void removeBlock(BlockPos const&);
    void getBlockEntity(BlockPos const&);
    void removeBlockEntity(BlockPos const&);
    void blockEvent(int, int, int, int, int);
    void fireBlockEvent(int, int, int, int, int);
    void blockEvent(BlockPos const&, int, int);
    void fetchEntities(Actor *, AABB const&);
    void fetchEntities(buffer_span<Actor *>, AABB const&);
    void fetchEntities(ActorType, AABB const&, Actor *);
    void fetchActors(ActorDefinitionIdentifier const&, AABB const&);
    void fetchBlockEntities(AABB const&, std::vector<BlockActor *, std::allocator<BlockActor *>> &);
    void fetchBlockEntities(AABB const&);
    void fetchBlocks(BlockPos const&, BlockVolume &)const;
    void areAllChunksLoaded(BlockPos const&, BlockVolume &)const;
    void fetchEntities2(ActorType, AABB const&, bool);
    void fetchNearestEntityOfType(Actor *, AABB const&, ActorType);
    void fetchNearestEntityOfType(Actor *, Vec3 const&, float, ActorType);
    void fetchNearestEntityNotOfType(Actor *, Vec3 const&, float, ActorType);
    bool isUnobstructedByEntities(AABB const&, buffer_span<Actor *>);
    void fetchAABBs(AABB const&, bool);
    void addUnloadedChunksAABBs(AABB const&);
    void addVoidFloor(AABB const&);
    bool hasBlock(int, int, int);
    void _fetchBorderBlockCollisions(AABB const&, Actor *, bool);
    void fetchCollisionShapes(AABB const&, float *, bool, Actor *);
    bool containsAnyLiquid(AABB const&);
    bool containsAnySolidBlocking(AABB const&);
    bool containsAny(BlockPos const&, BlockPos const&);
    bool containsAnyBlockOfType(BlockPos const&, BlockPos const&, Block const&);
    bool containsFireBlock(AABB const&);
    void getMaterial(int, int, int)const;
    bool isOnTopOfBlock(AABB const&, BlockLegacy const&);
    bool isOnTopOfBlock(AABB const&, std::function<bool ()(Block const&)>);
    bool containsMaterial(AABB const&, MaterialType);
    bool containsLiquid(AABB const&, MaterialType);
    void clip(Vec3 const&, Vec3 const&, bool, bool, int, bool, bool);
    void getSeenPercent(Vec3 const&, AABB const&);
    bool canProvideSupport(BlockPos const&, unsigned char, BlockSupportType)const;
    bool isInWall(Vec3 const&);
    bool isUnderWater(BlockPos const&)const;
    bool isUnderWater(Vec3 const&, Block const&)const;
    bool isTouchingMaterial(BlockPos const&, MaterialType)const;
    void onChunkDiscarded(LevelChunk &);
    void clearCachedLastChunk();
    void fireAreaChanged(BlockPos const&, BlockPos const&);
    void fireBrightnessChanged(BlockPos const&);
    void fireBlockEntityChanged(BlockActor &);
    void fireBlockEntityAboutToBeRemoved(std::shared_ptr<BlockActor>);
    void fireEntityChanged(Actor &);
    bool isEmptyBlock(BlockPos const&);
    bool isEmptyWaterBlock(BlockPos const&)const;
    bool allowsRunes(BlockPos const&);
    bool isEmptyBlock(int, int, int);
    void getTopBlock(int, int &, int);
    void tryGetBiome(BlockPos const&)const;
    void getBiome(BlockPos const&);
    void getConstBiome(BlockPos const&)const;
    void setGrassColor(int, BlockPos const&, int);
    void setWaterColor(int, BlockPos const&, int);
    void getGrassColor(BlockPos const&)const;
    void getWaterColor(BlockPos const&)const;
    void getHardcodedEntitySpawn(BlockPos const&, ActorType)const;
    void findNextTopSolidBlockUnder(BlockPos &);
    void findNextTopSolidBlockAbove(BlockPos &);
    void findNextSpawnBlockUnder(BlockPos &, MaterialType);
    bool canSeeSkyFromBelowWater(BlockPos const&);
    void getRawBrightness(int, int, int, bool);
    void getAboveTopSolidBlock(int, int, bool, bool);
    bool canSeeSky(int, int, int)const;
    void getHeightmap(int, int);
    void getBlockEntity(int, int, int);
    bool isOwnerThread()const;
    void _getLiquidHeight(BlockPos const&, MaterialType, bool);
    void getVisualLiquidHeight(Vec3 const&);
    void fetchBlocksInCylinder(BlockPos const&, unsigned int, unsigned int, std::function<bool ()(Block const&)>);
    void fetchBlocksInCylinderSorted(BlockPos const&, unsigned int, unsigned int, std::function<bool ()(Block const&)>);
    void fetchBlocksInBox(BoundingBox const&, std::function<bool ()(Block const&)>);
    void fetchBlocksInBoxSorted(BoundingBox const&, std::function<bool ()(Block const&)>);
    bool isPositionUnderLiquid(Vec3 const&, MaterialType);
    void getPublicSource()const;
    bool isNearUnloadedChunks(ChunkPos const&);
    void generateUnloadedChunkAABB(ChunkPos const&);
    void getPlaceChunkPos()const;
    void setPlaceChunkPos(BlockPos const&);
};
