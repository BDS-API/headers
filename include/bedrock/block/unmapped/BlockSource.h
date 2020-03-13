#pragma once

#include "../../util/BlockPos.h"
#include <vector>
#include <memory>
#include "../../util/Brightness.h"
#include <functional>


class BlockSource {

public:
    ~BlockSource(); // _ZN11BlockSourceD2Ev
    void getMaxHeight()const; // _ZNK11BlockSource12getMaxHeightEv
    BlockSource(Level &, Dimension &, ChunkSource &, bool, bool); // _ZN11BlockSourceC2ER5LevelR9DimensionR11ChunkSourcebb
    void addListener(BlockSourceListener &); // _ZN11BlockSource11addListenerER19BlockSourceListener
    void getLevel()const; // _ZNK11BlockSource8getLevelEv
    void getLevel(); // _ZN11BlockSource8getLevelEv
    void getChunkSource(); // _ZN11BlockSource14getChunkSourceEv
    void checkBlockDestroyPermissions(Actor &, BlockPos const&, ItemStack const&, bool); // _ZN11BlockSource28checkBlockDestroyPermissionsER5ActorRK8BlockPosRK9ItemStackb
    void getBlock(BlockPos const&)const; // _ZNK11BlockSource8getBlockERK8BlockPos
    void _getBlockPermissions(BlockPos const&, bool); // _ZN11BlockSource20_getBlockPermissionsERK8BlockPosb
    void checkBlockPermissions(Actor &, BlockPos const&, unsigned char, ItemStack const&, bool); // _ZN11BlockSource21checkBlockPermissionsER5ActorRK8BlockPoshRK9ItemStackb
    bool hasBorderBlock(BlockPos); // _ZN11BlockSource14hasBorderBlockE8BlockPos
    void getLevelConst()const; // _ZNK11BlockSource13getLevelConstEv
    void getDimension()const; // _ZNK11BlockSource12getDimensionEv
    void getDimension(); // _ZN11BlockSource12getDimensionEv
    void getDimensionId()const; // _ZNK11BlockSource14getDimensionIdEv
    void getDimensionConst()const; // _ZNK11BlockSource17getDimensionConstEv
    void removeListener(BlockSourceListener &); // _ZN11BlockSource14removeListenerER19BlockSourceListener
    void clearDeletedEntities(); // _ZN11BlockSource20clearDeletedEntitiesEv
    void getChunk(int, int)const; // _ZNK11BlockSource8getChunkEii
    void getChunk(ChunkPos const&)const; // _ZNK11BlockSource8getChunkERK8ChunkPos
    void addToTickingQueue(BlockPos const&, Block const&, int, int); // _ZN11BlockSource17addToTickingQueueERK8BlockPosRK5Blockii
//  void _addToTickingQueue(BlockPos const&, Block const&, int, int, TickingQueueType); //TODO: incomplete function definition // _ZN11BlockSource18_addToTickingQueueERK8BlockPosRK5Blockii16TickingQueueType
    void addToRandomTickingQueuePercentChance(BlockPos const&, Block const&, float, int); // _ZN11BlockSource36addToRandomTickingQueuePercentChanceERK8BlockPosRK5Blockfi
    void addToRandomTickingQueue(BlockPos const&, Block const&, int, int); // _ZN11BlockSource23addToRandomTickingQueueERK8BlockPosRK5Blockii
    void removeFromTickingQueue(BlockPos const&, Block const&); // _ZN11BlockSource22removeFromTickingQueueERK8BlockPosRK5Block
//  void _removeFromTickingQueue(BlockPos const&, Block const&, TickingQueueType); //TODO: incomplete function definition // _ZN11BlockSource23_removeFromTickingQueueERK8BlockPosRK5Block16TickingQueueType
    void removeFromRandomTickingQueue(BlockPos const&, Block const&); // _ZN11BlockSource28removeFromRandomTickingQueueERK8BlockPosRK5Block
    bool isInstaticking(BlockPos const&)const; // _ZNK11BlockSource14isInstatickingERK8BlockPos
//  void _getTickingQueue(BlockPos const&, TickingQueueType)const; //TODO: incomplete function definition // _ZNK11BlockSource16_getTickingQueueERK8BlockPos16TickingQueueType
    bool hasTickInCurrentTick(BlockPos const&)const; // _ZNK11BlockSource20hasTickInCurrentTickERK8BlockPos
//  bool hasTickInCurrentTick(BlockPos const&, TickingQueueType)const; //TODO: incomplete function definition // _ZNK11BlockSource20hasTickInCurrentTickERK8BlockPos16TickingQueueType
    bool hasTickInPendingTicks(BlockPos const&)const; // _ZNK11BlockSource21hasTickInPendingTicksERK8BlockPos
//  bool hasTickInPendingTicks(BlockPos const&, TickingQueueType)const; //TODO: incomplete function definition // _ZNK11BlockSource21hasTickInPendingTicksERK8BlockPos16TickingQueueType
//  void getNextTickUpdateForPos(BlockPos const&, TickingQueueType, Tick &)const; //TODO: incomplete function definition // _ZNK11BlockSource23getNextTickUpdateForPosERK8BlockPos16TickingQueueTypeR4Tick
//  bool ticksFromNow(BlockPos const&, TickingQueueType, int)const; //TODO: incomplete function definition // _ZNK11BlockSource12ticksFromNowERK8BlockPos16TickingQueueTypei
    void setTickingQueue(BlockTickingQueue &); // _ZN11BlockSource15setTickingQueueER17BlockTickingQueue
    void setRandomTickingQueue(BlockTickingQueue &); // _ZN11BlockSource21setRandomTickingQueueER17BlockTickingQueue
    void getWritableChunk(ChunkPos const&); // _ZN11BlockSource16getWritableChunkERK8ChunkPos
    void shouldFireEvents(LevelChunk &)const; // _ZNK11BlockSource16shouldFireEventsER10LevelChunk
    bool hasBlock(BlockPos const&)const; // _ZNK11BlockSource8hasBlockERK8BlockPos
    void getChunkAt(BlockPos const&)const; // _ZNK11BlockSource10getChunkAtERK8BlockPos
    void _hasChunksAt(Bounds const&)const; // _ZNK11BlockSource12_hasChunksAtERK6Bounds
    bool hasChunksAt(Bounds const&)const; // _ZNK11BlockSource11hasChunksAtERK6Bounds
    bool hasChunksAt(AABB const&)const; // _ZNK11BlockSource11hasChunksAtERK4AABB
    bool hasChunksAt(BlockPos const&, int)const; // _ZNK11BlockSource11hasChunksAtERK8BlockPosi
    bool hasChunksAt(int, int, int, int)const; // _ZNK11BlockSource11hasChunksAtEiiii
    bool hasChunksAt(BlockPos const&, BlockPos const&)const; // _ZNK11BlockSource11hasChunksAtERK8BlockPosS2_
    void areChunksFullyLoaded(BlockPos const&, int); // _ZN11BlockSource20areChunksFullyLoadedERK8BlockPosi
    void getBlock(BlockPos const&, unsigned int)const; // _ZNK11BlockSource8getBlockERK8BlockPosj
    void getExtraBlock(BlockPos const&)const; // _ZNK11BlockSource13getExtraBlockERK8BlockPos
    void countBlocksOfType(BlockLegacy const&, BlockPos const&, BlockPos const&, unsigned long)const; // _ZNK11BlockSource17countBlocksOfTypeERK11BlockLegacyRK8BlockPosS5_m
    void getChunkAt(int, int, int)const; // _ZNK11BlockSource10getChunkAtEiii
    void getBlock(int, int, int)const; // _ZNK11BlockSource8getBlockEiii
    void setBlock(int, int, int, Block const&, int); // _ZN11BlockSource8setBlockEiiiRK5Blocki
    void setBlock(BlockPos const&, Block const&, int, ActorBlockSyncMessage const*); // _ZN11BlockSource8setBlockERK8BlockPosRK5BlockiPK21ActorBlockSyncMessage
    void setBlock(BlockPos const&, Block const&, int, std::shared_ptr<BlockActor>, ActorBlockSyncMessage const*); // _ZN11BlockSource8setBlockERK8BlockPosRK5BlockiSt10shared_ptrI10BlockActorEPK21ActorBlockSyncMessage
    void setBlock(int, int, int, Block const&, int, std::shared_ptr<BlockActor>); // _ZN11BlockSource8setBlockEiiiRK5BlockiSt10shared_ptrI10BlockActorE
    void setBlockNoUpdate(int, int, int, Block const&); // _ZN11BlockSource16setBlockNoUpdateEiiiRK5Block
    void setBlockNoUpdate(BlockPos const&, Block const&); // _ZN11BlockSource16setBlockNoUpdateERK8BlockPosRK5Block
    void setBorderBlock(BlockPos const&, bool); // _ZN11BlockSource14setBorderBlockERK8BlockPosb
    void _blockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*); // _ZN11BlockSource13_blockChangedERK8BlockPosjRK5BlockS5_iPK21ActorBlockSyncMessage
    void setExtraBlock(BlockPos const&, Block const&, int); // _ZN11BlockSource13setExtraBlockERK8BlockPosRK5Blocki
    void getLiquidBlock(BlockPos const&)const; // _ZNK11BlockSource14getLiquidBlockERK8BlockPos
    void getAllocatedHeightAt(BlockPos const&); // _ZN11BlockSource20getAllocatedHeightAtERK8BlockPos
    void getLightColor(BlockPos const&, Brightness); // _ZN11BlockSource13getLightColorERK8BlockPos10Brightness
    void getBrightnessPair(BlockPos const&)const; // _ZNK11BlockSource17getBrightnessPairERK8BlockPos
    void getBrightness(BlockPos const&)const; // _ZNK11BlockSource13getBrightnessERK8BlockPos
    void getRawBrightness(BlockPos const&, bool, bool)const; // _ZNK11BlockSource16getRawBrightnessERK8BlockPosbb
    void _getSkyDarken()const; // _ZNK11BlockSource13_getSkyDarkenEv
    void getAboveTopSolidBlock(BlockPos const&, bool, bool); // _ZN11BlockSource21getAboveTopSolidBlockERK8BlockPosbb
    bool canSeeSky(BlockPos const&)const; // _ZNK11BlockSource9canSeeSkyERK8BlockPos
    void getMaterial(BlockPos const&)const; // _ZNK11BlockSource11getMaterialERK8BlockPos
    void getHeightmap(BlockPos const&)const; // _ZNK11BlockSource12getHeightmapERK8BlockPos
    void getHeightmapPos(BlockPos const&)const; // _ZNK11BlockSource15getHeightmapPosERK8BlockPos
    bool isSolidBlockingBlockAndNotSignalSource(BlockPos const&); // _ZN11BlockSource38isSolidBlockingBlockAndNotSignalSourceERK8BlockPos
    bool isSolidBlockingBlock(int, int, int)const; // _ZNK11BlockSource20isSolidBlockingBlockEiii
    bool isSolidBlockingBlock(BlockPos const&)const; // _ZNK11BlockSource20isSolidBlockingBlockERK8BlockPos
    bool isMotionBlockingBlock(int, int, int)const; // _ZNK11BlockSource21isMotionBlockingBlockEiii
    bool isMotionBlockingBlock(BlockPos const&)const; // _ZNK11BlockSource21isMotionBlockingBlockERK8BlockPos
    bool isConsideredSolidBlock(int, int, int); // _ZN11BlockSource22isConsideredSolidBlockEiii
    bool isConsideredSolidBlock(BlockPos const&); // _ZN11BlockSource22isConsideredSolidBlockERK8BlockPos
    void mayPlace(Block const&, BlockPos const&, unsigned char, Actor *, bool); // _ZN11BlockSource8mayPlaceERK5BlockRK8BlockPoshP5Actorb
    bool isUnobstructedByEntities(AABB const&, Actor *); // _ZN11BlockSource24isUnobstructedByEntitiesERK4AABBP5Actor
    void neighborChanged(BlockPos const&, BlockPos const&); // _ZN11BlockSource15neighborChangedERK8BlockPosS2_
    void updateNeighborsAt(BlockPos const&); // _ZN11BlockSource17updateNeighborsAtERK8BlockPos
    void updateNeighborsAt(BlockPos const&, BlockPos const&); // _ZN11BlockSource17updateNeighborsAtERK8BlockPosS2_
    void updateNeighborsAtExceptFromFacing(BlockPos const&, BlockPos const&, int); // _ZN11BlockSource33updateNeighborsAtExceptFromFacingERK8BlockPosS2_i
    void fireBlockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*); // _ZN11BlockSource16fireBlockChangedERK8BlockPosjRK5BlockS5_iPK21ActorBlockSyncMessage
    void setLiquidBlock(BlockPos const&, Block const&, bool, int); // _ZN11BlockSource14setLiquidBlockERK8BlockPosRK5Blockbi
    void removeBlock(int, int, int); // _ZN11BlockSource11removeBlockEiii
    void removeBlock(BlockPos const&); // _ZN11BlockSource11removeBlockERK8BlockPos
    void getBlockEntity(BlockPos const&); // _ZN11BlockSource14getBlockEntityERK8BlockPos
    void removeBlockEntity(BlockPos const&); // _ZN11BlockSource17removeBlockEntityERK8BlockPos
    void blockEvent(int, int, int, int, int); // _ZN11BlockSource10blockEventEiiiii
    void fireBlockEvent(int, int, int, int, int); // _ZN11BlockSource14fireBlockEventEiiiii
    void blockEvent(BlockPos const&, int, int); // _ZN11BlockSource10blockEventERK8BlockPosii
    void fetchEntities(Actor *, AABB const&); // _ZN11BlockSource13fetchEntitiesEP5ActorRK4AABB
//  void fetchEntities(buffer_span<Actor *>, AABB const&); //TODO: incomplete function definition // _ZN11BlockSource13fetchEntitiesE11buffer_spanIP5ActorERK4AABB
//  void fetchEntities(ActorType, AABB const&, Actor *); //TODO: incomplete function definition // _ZN11BlockSource13fetchEntitiesE9ActorTypeRK4AABBP5Actor
    void fetchActors(ActorDefinitionIdentifier const&, AABB const&); // _ZN11BlockSource11fetchActorsERK25ActorDefinitionIdentifierRK4AABB
    void fetchBlockEntities(AABB const&, std::vector<BlockActor *> &); // _ZN11BlockSource18fetchBlockEntitiesERK4AABBRSt6vectorIP10BlockActorSaIS5_EE
    void fetchBlockEntities(AABB const&); // _ZN11BlockSource18fetchBlockEntitiesERK4AABB
    void fetchBlocks(BlockPos const&, BlockVolume &)const; // _ZNK11BlockSource11fetchBlocksERK8BlockPosR11BlockVolume
    void areAllChunksLoaded(BlockPos const&, BlockVolume &)const; // _ZNK11BlockSource18areAllChunksLoadedERK8BlockPosR11BlockVolume
//  void fetchEntities2(ActorType, AABB const&, bool); //TODO: incomplete function definition // _ZN11BlockSource14fetchEntities2E9ActorTypeRK4AABBb
//  void fetchNearestEntityOfType(Actor *, AABB const&, ActorType); //TODO: incomplete function definition // _ZN11BlockSource24fetchNearestEntityOfTypeEP5ActorRK4AABB9ActorType
//  void fetchNearestEntityOfType(Actor *, Vec3 const&, float, ActorType); //TODO: incomplete function definition // _ZN11BlockSource24fetchNearestEntityOfTypeEP5ActorRK4Vec3f9ActorType
//  void fetchNearestEntityNotOfType(Actor *, Vec3 const&, float, ActorType); //TODO: incomplete function definition // _ZN11BlockSource27fetchNearestEntityNotOfTypeEP5ActorRK4Vec3f9ActorType
//  bool isUnobstructedByEntities(AABB const&, buffer_span<Actor *>); //TODO: incomplete function definition // _ZN11BlockSource24isUnobstructedByEntitiesERK4AABB11buffer_spanIP5ActorE
    void fetchAABBs(AABB const&, bool); // _ZN11BlockSource10fetchAABBsERK4AABBb
    void addUnloadedChunksAABBs(AABB const&); // _ZN11BlockSource22addUnloadedChunksAABBsERK4AABB
    void addVoidFloor(AABB const&); // _ZN11BlockSource12addVoidFloorERK4AABB
    bool hasBlock(int, int, int); // _ZN11BlockSource8hasBlockEiii
    void _fetchBorderBlockCollisions(AABB const&, Actor *, bool); // _ZN11BlockSource27_fetchBorderBlockCollisionsERK4AABBP5Actorb
    void fetchCollisionShapes(AABB const&, float *, bool, Actor *); // _ZN11BlockSource20fetchCollisionShapesERK4AABBPfbP5Actor
    bool containsAnyLiquid(AABB const&); // _ZN11BlockSource17containsAnyLiquidERK4AABB
    bool containsAnySolidBlocking(AABB const&); // _ZN11BlockSource24containsAnySolidBlockingERK4AABB
    bool containsAny(BlockPos const&, BlockPos const&); // _ZN11BlockSource11containsAnyERK8BlockPosS2_
    bool containsAnyBlockOfType(BlockPos const&, BlockPos const&, Block const&); // _ZN11BlockSource22containsAnyBlockOfTypeERK8BlockPosS2_RK5Block
    bool containsFireBlock(AABB const&); // _ZN11BlockSource17containsFireBlockERK4AABB
    void getMaterial(int, int, int)const; // _ZNK11BlockSource11getMaterialEiii
    bool isOnTopOfBlock(AABB const&, BlockLegacy const&); // _ZN11BlockSource14isOnTopOfBlockERK4AABBRK11BlockLegacy
    bool isOnTopOfBlock(AABB const&, std::function<bool (Block const&)>); // _ZN11BlockSource14isOnTopOfBlockERK4AABBSt8functionIFbRK5BlockEE
//  bool containsMaterial(AABB const&, MaterialType); //TODO: incomplete function definition // _ZN11BlockSource16containsMaterialERK4AABB12MaterialType
//  bool containsLiquid(AABB const&, MaterialType); //TODO: incomplete function definition // _ZN11BlockSource14containsLiquidERK4AABB12MaterialType
    void clip(Vec3 const&, Vec3 const&, bool, bool, int, bool, bool); // _ZN11BlockSource4clipERK4Vec3S2_bbibb
    void getSeenPercent(Vec3 const&, AABB const&); // _ZN11BlockSource14getSeenPercentERK4Vec3RK4AABB
//  bool canProvideSupport(BlockPos const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK11BlockSource17canProvideSupportERK8BlockPosh16BlockSupportType
    bool isInWall(Vec3 const&); // _ZN11BlockSource8isInWallERK4Vec3
    bool isUnderWater(BlockPos const&)const; // _ZNK11BlockSource12isUnderWaterERK8BlockPos
    bool isUnderWater(Vec3 const&, Block const&)const; // _ZNK11BlockSource12isUnderWaterERK4Vec3RK5Block
//  bool isTouchingMaterial(BlockPos const&, MaterialType)const; //TODO: incomplete function definition // _ZNK11BlockSource18isTouchingMaterialERK8BlockPos12MaterialType
    void onChunkDiscarded(LevelChunk &); // _ZN11BlockSource16onChunkDiscardedER10LevelChunk
    void clearCachedLastChunk(); // _ZN11BlockSource20clearCachedLastChunkEv
    void fireAreaChanged(BlockPos const&, BlockPos const&); // _ZN11BlockSource15fireAreaChangedERK8BlockPosS2_
    void fireBrightnessChanged(BlockPos const&); // _ZN11BlockSource21fireBrightnessChangedERK8BlockPos
    void fireBlockEntityChanged(BlockActor &); // _ZN11BlockSource22fireBlockEntityChangedER10BlockActor
    void fireBlockEntityAboutToBeRemoved(std::shared_ptr<BlockActor>); // _ZN11BlockSource31fireBlockEntityAboutToBeRemovedESt10shared_ptrI10BlockActorE
    void fireEntityChanged(Actor &); // _ZN11BlockSource17fireEntityChangedER5Actor
    bool isEmptyBlock(BlockPos const&); // _ZN11BlockSource12isEmptyBlockERK8BlockPos
    bool isEmptyWaterBlock(BlockPos const&)const; // _ZNK11BlockSource17isEmptyWaterBlockERK8BlockPos
    bool allowsRunes(BlockPos const&); // _ZN11BlockSource11allowsRunesERK8BlockPos
    bool isEmptyBlock(int, int, int); // _ZN11BlockSource12isEmptyBlockEiii
    void getTopBlock(int, int &, int); // _ZN11BlockSource11getTopBlockEiRii
    void tryGetBiome(BlockPos const&)const; // _ZNK11BlockSource11tryGetBiomeERK8BlockPos
    void getBiome(BlockPos const&); // _ZN11BlockSource8getBiomeERK8BlockPos
    void getConstBiome(BlockPos const&)const; // _ZNK11BlockSource13getConstBiomeERK8BlockPos
    void setGrassColor(int, BlockPos const&, int); // _ZN11BlockSource13setGrassColorEiRK8BlockPosi
    void setWaterColor(int, BlockPos const&, int); // _ZN11BlockSource13setWaterColorEiRK8BlockPosi
    void getGrassColor(BlockPos const&)const; // _ZNK11BlockSource13getGrassColorERK8BlockPos
    void getWaterColor(BlockPos const&)const; // _ZNK11BlockSource13getWaterColorERK8BlockPos
//  void getHardcodedEntitySpawn(BlockPos const&, ActorType)const; //TODO: incomplete function definition // _ZNK11BlockSource23getHardcodedEntitySpawnERK8BlockPos9ActorType
    void findNextTopSolidBlockUnder(BlockPos &); // _ZN11BlockSource26findNextTopSolidBlockUnderER8BlockPos
    void findNextTopSolidBlockAbove(BlockPos &); // _ZN11BlockSource26findNextTopSolidBlockAboveER8BlockPos
//  void findNextSpawnBlockUnder(BlockPos &, MaterialType); //TODO: incomplete function definition // _ZN11BlockSource23findNextSpawnBlockUnderER8BlockPos12MaterialType
    bool canSeeSkyFromBelowWater(BlockPos const&); // _ZN11BlockSource23canSeeSkyFromBelowWaterERK8BlockPos
    void getRawBrightness(int, int, int, bool); // _ZN11BlockSource16getRawBrightnessEiiib
    void getAboveTopSolidBlock(int, int, bool, bool); // _ZN11BlockSource21getAboveTopSolidBlockEiibb
    bool canSeeSky(int, int, int)const; // _ZNK11BlockSource9canSeeSkyEiii
    void getHeightmap(int, int); // _ZN11BlockSource12getHeightmapEii
    void getBlockEntity(int, int, int); // _ZN11BlockSource14getBlockEntityEiii
    bool isOwnerThread()const; // _ZNK11BlockSource13isOwnerThreadEv
//  void _getLiquidHeight(BlockPos const&, MaterialType, bool); //TODO: incomplete function definition // _ZN11BlockSource16_getLiquidHeightERK8BlockPos12MaterialTypeb
    void getVisualLiquidHeight(Vec3 const&); // _ZN11BlockSource21getVisualLiquidHeightERK4Vec3
    void fetchBlocksInCylinder(BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)>); // _ZN11BlockSource21fetchBlocksInCylinderERK8BlockPosjjSt8functionIFbRK5BlockEE
    void fetchBlocksInCylinderSorted(BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)>); // _ZN11BlockSource27fetchBlocksInCylinderSortedERK8BlockPosjjSt8functionIFbRK5BlockEE
    void fetchBlocksInBox(BoundingBox const&, std::function<bool (Block const&)>); // _ZN11BlockSource16fetchBlocksInBoxERK11BoundingBoxSt8functionIFbRK5BlockEE
    void fetchBlocksInBoxSorted(BoundingBox const&, std::function<bool (Block const&)>); // _ZN11BlockSource22fetchBlocksInBoxSortedERK11BoundingBoxSt8functionIFbRK5BlockEE
//  bool isPositionUnderLiquid(Vec3 const&, MaterialType); //TODO: incomplete function definition // _ZN11BlockSource21isPositionUnderLiquidERK4Vec312MaterialType
    void getPublicSource()const; // _ZNK11BlockSource15getPublicSourceEv
    bool isNearUnloadedChunks(ChunkPos const&); // _ZN11BlockSource20isNearUnloadedChunksERK8ChunkPos
    void generateUnloadedChunkAABB(ChunkPos const&); // _ZN11BlockSource25generateUnloadedChunkAABBERK8ChunkPos
    void getPlaceChunkPos()const; // _ZNK11BlockSource16getPlaceChunkPosEv
    void setPlaceChunkPos(BlockPos const&); // _ZN11BlockSource16setPlaceChunkPosERK8BlockPos
};
