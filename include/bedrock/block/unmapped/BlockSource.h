#pragma once

#include "BlockVolume.h"
#include "../../item/ItemStack.h"
#include "../../util/ChunkPos.h"
#include "../../level/Level.h"
#include "../actor/BlockActor.h"
#include <memory>
#include "../../util/BlockPos.h"
#include "../../util/Tick.h"
#include "../../../unmapped/Dimension.h"
#include "../../util/AABB.h"
#include "../../level/chunksource/ChunkSource.h"
#include <functional>
#include "../../../unmapped/Block.h"
#include "../BlockLegacy.h"
#include "../../util/Vec3.h"
#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../../level/LevelChunk.h"
#include "../../util/Brightness.h"
#include "../../../unmapped/BoundingBox.h"
#include <vector>
#include "BlockSourceListener.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/Bounds.h"
#include "BlockTickingQueue.h"
#include "../../actor/unmapped/ActorBlockSyncMessage.h"


class BlockSource {

public:
    ~BlockSource();
    void setBorderBlock(BlockPos const&, bool);
    void getBlock(int, int, int)const;
    void getChunkAt(int, int, int)const;
//  bool isTouchingMaterial(BlockPos const&, MaterialType)const; //TODO: incomplete function definition
    void updateNeighborsAtExceptFromFacing(BlockPos const&, BlockPos const&, int);
    void getChunk(int, int)const;
    bool isInWall(Vec3 const&);
    bool hasChunksAt(AABB const&)const;
    void getMaterial(int, int, int)const;
    void clearDeletedEntities();
//  void findNextSpawnBlockUnder(BlockPos &, MaterialType); //TODO: incomplete function definition
    void setBlockNoUpdate(BlockPos const&, Block const&);
    void getLevel();
    void onChunkDiscarded(LevelChunk &);
    bool isOnTopOfBlock(AABB const&, std::function<bool (Block const&)>);
    bool isEmptyWaterBlock(BlockPos const&)const;
    bool isOwnerThread()const;
    bool hasChunksAt(BlockPos const&, int)const;
    void removeListener(BlockSourceListener &);
    void mayPlace(Block const&, BlockPos const&, unsigned char, Actor *, bool);
//  bool isPositionUnderLiquid(Vec3 const&, MaterialType); //TODO: incomplete function definition
    void addToTickingQueue(BlockPos const&, Block const&, int, int);
    void addVoidFloor(AABB const&);
    void fireBrightnessChanged(BlockPos const&);
//  void _addToTickingQueue(BlockPos const&, Block const&, int, int, TickingQueueType); //TODO: incomplete function definition
    bool isNearUnloadedChunks(ChunkPos const&);
    void _getSkyDarken()const;
    void getPlaceChunkPos()const;
    void getWaterColor(BlockPos const&)const;
    void getAboveTopSolidBlock(BlockPos const&, bool, bool);
    void findNextTopSolidBlockUnder(BlockPos &);
    bool hasChunksAt(Bounds const&)const;
    void fetchBlocks(BlockPos const&, BlockVolume &)const;
//  void fetchEntities2(ActorType, AABB const&, bool); //TODO: incomplete function definition
//  void _getTickingQueue(BlockPos const&, TickingQueueType)const; //TODO: incomplete function definition
    bool isEmptyBlock(int, int, int);
    bool containsAnyBlockOfType(BlockPos const&, BlockPos const&, Block const&);
    void setTickingQueue(BlockTickingQueue &);
    void getBlock(BlockPos const&, unsigned int)const;
    void removeBlockEntity(BlockPos const&);
    bool hasBlock(BlockPos const&)const;
    void getSeenPercent(Vec3 const&, AABB const&);
    void areChunksFullyLoaded(BlockPos const&, int);
//  bool isUnobstructedByEntities(AABB const&, buffer_span<Actor *>); //TODO: incomplete function definition
    void areAllChunksLoaded(BlockPos const&, BlockVolume &)const;
    void getDimension()const;
    void generateUnloadedChunkAABB(ChunkPos const&);
    bool isEmptyBlock(BlockPos const&);
//  bool ticksFromNow(BlockPos const&, TickingQueueType, int)const; //TODO: incomplete function definition
    void getMaxHeight()const;
    void setRandomTickingQueue(BlockTickingQueue &);
    void blockEvent(int, int, int, int, int);
    void fetchEntities(Actor *, AABB const&);
//  bool canProvideSupport(BlockPos const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    void setGrassColor(int, BlockPos const&, int);
    void _blockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    bool isUnderWater(BlockPos const&)const;
//  void _removeFromTickingQueue(BlockPos const&, Block const&, TickingQueueType); //TODO: incomplete function definition
    void fetchCollisionShapes(AABB const&, float *, bool, Actor *);
    void addListener(BlockSourceListener &);
    bool isMotionBlockingBlock(int, int, int)const;
    void removeFromRandomTickingQueue(BlockPos const&, Block const&);
    void setBlock(int, int, int, Block const&, int, std::shared_ptr<BlockActor>);
    void fetchBlocksInCylinderSorted(BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)>);
    void getChunkAt(BlockPos const&)const;
    void _getBlockPermissions(BlockPos const&, bool);
    void getLightColor(BlockPos const&, Brightness);
    void getRawBrightness(int, int, int, bool);
    bool canSeeSky(int, int, int)const;
    void getBrightness(BlockPos const&)const;
    bool isSolidBlockingBlock(BlockPos const&)const;
    void getGrassColor(BlockPos const&)const;
    bool isInstaticking(BlockPos const&)const;
    void _fetchBorderBlockCollisions(AABB const&, Actor *, bool);
    void getLiquidBlock(BlockPos const&)const;
    bool containsAnyLiquid(AABB const&);
    void getWritableChunk(ChunkPos const&);
//  void fetchNearestEntityOfType(Actor *, Vec3 const&, float, ActorType); //TODO: incomplete function definition
    bool canSeeSky(BlockPos const&)const;
    void checkBlockPermissions(Actor &, BlockPos const&, unsigned char, ItemStack const&, bool);
    void setBlock(int, int, int, Block const&, int);
    void getAboveTopSolidBlock(int, int, bool, bool);
    void checkBlockDestroyPermissions(Actor &, BlockPos const&, ItemStack const&, bool);
//  bool hasTickInPendingTicks(BlockPos const&, TickingQueueType)const; //TODO: incomplete function definition
    void getHeightmapPos(BlockPos const&)const;
    void getBlockEntity(int, int, int);
    void neighborChanged(BlockPos const&, BlockPos const&);
    bool hasTickInPendingTicks(BlockPos const&)const;
//  bool containsLiquid(AABB const&, MaterialType); //TODO: incomplete function definition
    void getVisualLiquidHeight(Vec3 const&);
    bool hasBlock(int, int, int);
    void shouldFireEvents(LevelChunk &)const;
    void updateNeighborsAt(BlockPos const&);
    void fetchBlocksInCylinder(BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)>);
    void getMaterial(BlockPos const&)const;
    bool isOnTopOfBlock(AABB const&, BlockLegacy const&);
    void setBlock(BlockPos const&, Block const&, int, ActorBlockSyncMessage const*);
    void clearCachedLastChunk();
    void getConstBiome(BlockPos const&)const;
//  bool containsMaterial(AABB const&, MaterialType); //TODO: incomplete function definition
    bool isMotionBlockingBlock(BlockPos const&)const;
    void _hasChunksAt(Bounds const&)const;
//  void fetchNearestEntityNotOfType(Actor *, Vec3 const&, float, ActorType); //TODO: incomplete function definition
    void fetchBlockEntities(AABB const&);
    void removeBlock(int, int, int);
    void getBlock(BlockPos const&)const;
    void setBlockNoUpdate(int, int, int, Block const&);
    bool isSolidBlockingBlockAndNotSignalSource(BlockPos const&);
//  void fetchNearestEntityOfType(Actor *, AABB const&, ActorType); //TODO: incomplete function definition
    void getBiome(BlockPos const&);
    bool containsAny(BlockPos const&, BlockPos const&);
    void removeBlock(BlockPos const&);
    void getAllocatedHeightAt(BlockPos const&);
    void addUnloadedChunksAABBs(AABB const&);
    void setPlaceChunkPos(BlockPos const&);
    void countBlocksOfType(BlockLegacy const&, BlockPos const&, BlockPos const&, unsigned long)const;
    void getBlockEntity(BlockPos const&);
    void getTopBlock(int, int &, int);
    bool allowsRunes(BlockPos const&);
//  void _getLiquidHeight(BlockPos const&, MaterialType, bool); //TODO: incomplete function definition
    void setBlock(BlockPos const&, Block const&, int, std::shared_ptr<BlockActor>, ActorBlockSyncMessage const*);
    bool isConsideredSolidBlock(int, int, int);
    void fireAreaChanged(BlockPos const&, BlockPos const&);
    void setWaterColor(int, BlockPos const&, int);
    bool isUnobstructedByEntities(AABB const&, Actor *);
//  void getNextTickUpdateForPos(BlockPos const&, TickingQueueType, Tick &)const; //TODO: incomplete function definition
    void clip(Vec3 const&, Vec3 const&, bool, bool, int, bool, bool);
    void addToRandomTickingQueuePercentChance(BlockPos const&, Block const&, float, int);
    void fetchActors(ActorDefinitionIdentifier const&, AABB const&);
    void fetchBlockEntities(AABB const&, std::vector<BlockActor *> &);
//  void getHardcodedEntitySpawn(BlockPos const&, ActorType)const; //TODO: incomplete function definition
    void fetchBlocksInBoxSorted(BoundingBox const&, std::function<bool (Block const&)>);
    bool isSolidBlockingBlock(int, int, int)const;
    void fireBlockEvent(int, int, int, int, int);
    void removeFromTickingQueue(BlockPos const&, Block const&);
    bool isUnderWater(Vec3 const&, Block const&)const;
    bool hasBorderBlock(BlockPos);
    void fireEntityChanged(Actor &);
    bool hasTickInCurrentTick(BlockPos const&)const;
    void fireBlockEntityAboutToBeRemoved(std::shared_ptr<BlockActor>);
    void getLevelConst()const;
    void setExtraBlock(BlockPos const&, Block const&, int);
    bool containsAnySolidBlocking(AABB const&);
    void getHeightmap(BlockPos const&)const;
    void setLiquidBlock(BlockPos const&, Block const&, bool, int);
    void tryGetBiome(BlockPos const&)const;
    void getBrightnessPair(BlockPos const&)const;
//  void fetchEntities(buffer_span<Actor *>, AABB const&); //TODO: incomplete function definition
    bool isConsideredSolidBlock(BlockPos const&);
    void findNextTopSolidBlockAbove(BlockPos &);
    void updateNeighborsAt(BlockPos const&, BlockPos const&);
    void getDimensionId()const;
    bool containsFireBlock(AABB const&);
    void fireBlockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    void getLevel()const;
    BlockSource(Level &, Dimension &, ChunkSource &, bool, bool);
    void blockEvent(BlockPos const&, int, int);
    void addToRandomTickingQueue(BlockPos const&, Block const&, int, int);
//  void fetchEntities(ActorType, AABB const&, Actor *); //TODO: incomplete function definition
    bool hasChunksAt(BlockPos const&, BlockPos const&)const;
    bool canSeeSkyFromBelowWater(BlockPos const&);
    void getRawBrightness(BlockPos const&, bool, bool)const;
//  bool hasTickInCurrentTick(BlockPos const&, TickingQueueType)const; //TODO: incomplete function definition
    void getPublicSource()const;
    void getChunkSource();
    void getExtraBlock(BlockPos const&)const;
    void getDimension();
    void getDimensionConst()const;
    void getHeightmap(int, int);
    void fetchBlocksInBox(BoundingBox const&, std::function<bool (Block const&)>);
    void getChunk(ChunkPos const&)const;
    bool hasChunksAt(int, int, int, int)const;
    void fetchAABBs(AABB const&, bool);
    void fireBlockEntityChanged(BlockActor &);
};
