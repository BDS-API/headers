#pragma once

#include "../bedrock/block/BlockLegacy"
#include "../bedrock/util/Vec3"
#include "../bedrock/item/unmapped/ItemState"
#include "../bedrock/actor/Player"
#include "../bedrock/container/Container"
#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/unmapped/ActorBlockSyncMessage"
#include "../bedrock/util/BlockPos"
#include "../bedrock/item/ItemInstance"
#include "../bedrock/util/AABB"
#include "../bedrock/actor/Mob"
#include "../bedrock/actor/Actor"


class Block {

public:
    static long SIZE_OFFSET;
    static long BLOCK_DESCRIPTION_PREFIX[abi:cxx11];

    virtual Block::~Block()
    virtual void getRenderLayer()const;

    void getLegacyBlock()const;
    void getDataDEPRECATED()const;
    void getStateFromLegacyData(unsigned short)const;
    void getDefaultState()const;
    bool hasState(ItemState const&)const;
    bool isDoor()const;
    void getLegacyBlockPtr()const;
    bool canContainLiquid()const;
    bool matchesStates(BlockLegacy const&)const;
    void getBurnOdds()const;
    void setFlammable(int, int)const;
    void getFlameOdds()const;
    void getLight()const;
    bool isSolid()const;
    void ignoreBlockForInsideCubeRenderer()const;
    bool pushesOutItems()const;
    void shouldRandomTick()const;
    void shouldRandomTickExtraLayer()const;
    void getTranslucency()const;
    void getLightEmission()const;
    bool hasVariableLighting()const;
    Block(unsigned short, WeakPtr<BlockLegacy> &);
    bool canSlide(BlockSource &, BlockPos const&)const;
    bool canInstatick()const;
    void getCreativeCategory()const;
    void getGravity()const;
    void getMaterial()const;
    void getMapColor(BlockSource &, BlockPos const&)const;
    void getMapColor()const;
    void getFriction()const;
    void getDestroySpeed()const;
    void tick(BlockSource &, BlockPos const&, Random &)const;
    void animateTick(BlockSource &, BlockPos const&, Random &)const;
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool, AABB const&)const;
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    void spawnResources(BlockSource &, BlockPos const&, float, int)const;
    void popResource(BlockSource &, BlockPos const&, ItemInstance const&)const;
    void spawnBurnResources(BlockSource &, float, float, float)const;
    void destroy(BlockSource &, BlockPos const&, Actor *)const;
    void playerWillDestroy(Player &, BlockPos const&)const;
    void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    void randomlyModifyPosition(BlockPos const&, int &)const;
    void randomlyModifyPosition(BlockPos const&)const;
    void addCollisionShapes(BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    void addAABBs(BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    void addAABB(AABB const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    bool isUnbreakable()const;
    bool isHeavy()const;
    bool isStrippable(Block const&)const;
    void getStrippedBlock()const;
    bool canBeBrokenFromFalling()const;
    bool canProvideSupport(unsigned char, BlockSupportType)const;
    bool canConnect(Block const&, unsigned char, Block const&)const;
    void getConnectedDirections(BlockPos const&, BlockSource &, bool &, bool &, bool &, bool &)const;
    void getAABB(BlockSource &, BlockPos const&, AABB &, bool)const;
    void getOutline(BlockSource &, BlockPos const&, AABB &)const;
    void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    void mayPick()const;
    void mayPick(BlockSource &, bool)const;
    void getResourceCount(Random &, int)const;
    bool asItemInstance(BlockSource &, BlockPos const&)const;
    void getExplosionResistance(Actor *)const;
    bool isInteraction()const;
    void use(Player &, BlockPos const&)const;
    void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    void calcVariant(BlockSource &, BlockPos const&)const;
    bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos&)const;
    void attack(Player *, BlockPos const&)const;
    void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    bool isAuxValueRelevantForPicking()const;
    void getColor()const;
    void getColor(BlockSource &, BlockPos const&)const;
    void getColorAtPos(BlockSource &, BlockPos const&)const;
    void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    bool isSeasonTinted(BlockSource &, BlockPos const&)const;
    bool isSignalSource()const;
    bool canBeOriginalSurface()const;
    void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    void getSilkTouchItemInstance()const;
    void playerDestroy(Player &, BlockPos const&)const;
    bool canSurvive(BlockSource &, BlockPos const&)const;
    void getExperienceDrop(Random &)const;
    bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    void getSerializationId()const;
    void buildSerializationId(unsigned int);
    void getRuntimeId()const;
    bool hasRuntimeId()const;
    void setRuntimeId(unsigned int const&)const;
    void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    void getAllowsRunes()const;
    void telemetryVariant(BlockSource &, BlockPos const&)const;
    void getVariant()const;
    void getMappedFace(unsigned char)const;
    void mayPlaceOn(BlockSource &, BlockPos const&)const;
    void mayPlace(BlockSource &, BlockPos const&)const;
    void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    void tryToPlace(BlockSource &, BlockPos const&, ActorBlockSyncMessage const*)const;
    bool breaksFallingBlocks()const;
    void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    void DEPRECATEDcallOnGraphicsModeChanged(bool, bool, bool);
    void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    void shouldDispense(BlockSource &, Container &)const;
    void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    void onPlace(BlockSource &, BlockPos const&)const;
    void onRemove(BlockSource &, BlockPos const&)const;
    void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    void onStepOn(Actor &, BlockPos const&)const;
    void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const;
    void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    void movedByPiston(BlockSource &, BlockPos const&)const;
    void updateEntityAfterFallOn(Actor &)const;
    void ignoreEntitiesOnPistonMove()const;
    void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    void mayConsumeFertilizer(BlockSource &)const;
    void getIconYOffset()const;
    bool isWaterBlocking()const;
    bool canBeSilkTouched()const;
    void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    bool isBounceBlock()const;
    bool isAlphaTested()const;
    bool isSolidBlockingBlock()const;
    bool isMotionBlockingBlock()const;
    bool isSolidBlockingBlockAndNotSignalSource()const;
    bool isEmpty()const;
    bool isCropBlock()const;
    bool isStemBlock()const;
    bool isContainerBlock()const;
    bool isCraftingBlock()const;
    bool isInteractiveBlock()const;
    bool isHurtableBlock()const;
    bool isFenceBlock()const;
    bool isFenceGateBlock()const;
    bool isThinFenceBlock()const;
    bool isWallBlock()const;
    bool isStairBlock()const;
    bool isDoorBlock()const;
    bool isButtonBlock()const;
    bool isSlabBlock()const;
    bool isRailBlock()const;
    bool canHurtAndBreakItem()const;
    void getBlockEntityType()const;
    bool hasBlockEntity()const;
    void getRenderLayer(BlockSource &, BlockPos const&)const;
    void getExtraRenderLayers()const;
    void getThickness()const;
    void getFlexibility(BlockSource &, BlockPos const&)const;
    bool isObstructingChests(BlockSource &, BlockPos const&)const;
    void getVisualShapeInWorld(BlockSource &, BlockPos const&, AABB &, bool)const;
    void getVisualShape(AABB &, bool)const;
    void getUIShape(AABB &)const;
    void getCollisionShape(AABB &, BlockSource &, BlockPos const&, Actor *)const;
    void calcGroundFriction(Mob &, BlockPos const&)const;
    bool canHaveExtraData()const;
    bool hasComparatorSignal()const;
    void getComparatorSignal(BlockSource &, BlockPos const&, unsigned char)const;
    void shouldStopFalling(Actor &)const;
    bool pushesUpFallingBlocks()const;
    bool hasProperty(BlockProperty)const;
    void getProperties()const;
    void keepState(ItemState const&)const;
    void copyState(Block const&, ItemState const&)const;
    void getShadeBrightness()const;
    void getDebugText(std::vector<std::string, std::allocator<std::string>> &, BlockPos const&)const;
    void getParticleQuantityScalar()const;
    bool isStandingSign()const;
    bool dealsContactDamage(Actor const&, bool)const;
    bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    void getPlacementFacingAll(Actor &, BlockPos const&, float);
    void getPlacementFacingAllExceptAxisY(Actor &, BlockPos const&, float);
    bool isTrapdoor()const;
    void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block ()(BlockPos const&)> const&, BlockPos const&)const;
    bool detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    void handleRain(BlockSource &, BlockPos const&, float)const;
    void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    bool isValidAuxValue(int)const;
    bool canFillAtPos(BlockSource &, BlockPos const&)const;
    void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    void waterSpreadCausesSpawn()const;
    void getStateMask(ItemState const&)const;
    void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
};
