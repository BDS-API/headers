#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorBlockSyncMessage.h"
#include <string>
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/block/BlockLegacy.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/container/Container.h"
#include <functional>
#include "SpawnConditions.h"
#include <vector>
#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/item/unmapped/ItemState.h"
#include "../bedrock/util/AABB.h"


class Block {

public:
    static long SIZE_OFFSET;
    static std::string BLOCK_DESCRIPTION_PREFIX;

    virtual void getRenderLayer()const;
    ~Block();
    void onRemove(BlockSource &, BlockPos const&)const;
    std::string getRawNameId()const;
    void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    void operator==(Block const&)const;
    bool isWallBlock()const;
    void getThickness()const;
    bool canConnect(Block const&, unsigned char, Block const&)const;
    bool isSignalSource()const;
    void getPlacementFacingAllExceptAxisY(Actor &, BlockPos const&, float);
    void mayPlaceOn(BlockSource &, BlockPos const&)const;
    void getComparatorSignal(BlockSource &, BlockPos const&, unsigned char)const;
    void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const;
    void getStrippedBlock()const;
    std::string toDebugString()const;
    std::string getDescriptionId()const;
    void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    void getSilkTouchItemInstance()const;
    void getExperienceDrop(Random &)const;
    void mayConsumeFertilizer(BlockSource &)const;
    void getTranslucency()const;
    bool isSlabBlock()const;
    std::string getFullName()const;
    bool canBeOriginalSurface()const;
    bool isCraftingBlock()const;
    void shouldStopFalling(Actor &)const;
    void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    void operator!=(Block const&)const;
//  void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    void tick(BlockSource &, BlockPos const&, Random &)const;
    void getExplosionResistance(Actor *)const;
    bool isAuxValueRelevantForPicking()const;
    void mayPick(BlockSource &, bool)const;
    void buildSerializationId(unsigned int);
    bool hasComparatorSignal()const;
    bool isStairBlock()const;
    void getMaterial()const;
    bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    bool isUnbreakable()const;
    bool canBeSilkTouched()const;
    void getDestroySpeed()const;
    bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    void getAllowsRunes()const;
    void getMapColor(BlockSource &, BlockPos const&)const;
//  Block(unsigned short, WeakPtr<BlockLegacy> &); //TODO: incomplete function definition
    bool isThinFenceBlock()const;
    void getSerializationId()const;
    bool isRailBlock()const;
    void getFlexibility(BlockSource &, BlockPos const&)const;
    void getConnectedDirections(BlockPos const&, BlockSource &, bool &, bool &, bool &, bool &)const;
    void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    bool matchesStates(BlockLegacy const&)const;
    void getMappedFace(unsigned char)const;
    void getLightEmission()const;
    void waterSpreadCausesSpawn()const;
    bool canBeBrokenFromFalling()const;
    void getUIShape(AABB &)const;
    bool canSlide(BlockSource &, BlockPos const&)const;
    void getProperties()const;
    bool detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    bool isStandingSign()const;
    void playerWillDestroy(Player &, BlockPos const&)const;
    bool isDoorBlock()const;
    bool canHaveExtraData()const;
    bool canFillAtPos(BlockSource &, BlockPos const&)const;
    bool isMotionBlockingBlock()const;
    void getLegacyBlockPtr()const;
    void getResourceCount(Random &, int)const;
    void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    bool canSurvive(BlockSource &, BlockPos const&)const;
    bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const;
    void onStepOn(Actor &, BlockPos const&)const;
    bool isSeasonTinted(BlockSource &, BlockPos const&)const;
    bool isObstructingChests(BlockSource &, BlockPos const&)const;
    void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    bool hasState(ItemState const&)const;
    std::string buildDescriptionName()const;
    void onPlace(BlockSource &, BlockPos const&)const;
    bool isContainerBlock()const;
    void getIconYOffset()const;
    void ignoreEntitiesOnPistonMove()const;
    void getVisualShapeInWorld(BlockSource &, BlockPos const&, AABB &, bool)const;
    void attack(Player *, BlockPos const&)const;
    void getFlameOdds()const;
    void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    bool isAlphaTested()const;
    void getLight()const;
    void DEPRECATEDcallOnGraphicsModeChanged(bool, bool, bool);
    void movedByPiston(BlockSource &, BlockPos const&)const;
    bool dealsContactDamage(Actor const&, bool)const;
    void getGravity()const;
    void randomlyModifyPosition(BlockPos const&)const;
    bool hasRuntimeId()const;
    void shouldRandomTick()const;
    void getExtraRenderLayers()const;
    bool pushesOutItems()const;
    void setRuntimeId(unsigned int const&)const;
    void animateTick(BlockSource &, BlockPos const&, Random &)const;
    void addAABBs(BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    void getColor(BlockSource &, BlockPos const&)const;
    void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
//  bool canProvideSupport(unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    bool pushesUpFallingBlocks()const;
    bool isSolid()const;
    void destroy(BlockSource &, BlockPos const&, Actor *)const;
    bool isBounceBlock()const;
    void mayPick()const;
    bool asItemInstance(BlockSource &, BlockPos const&)const;
    void getCreativeCategory()const;
    void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    void getStateMask(ItemState const&)const;
    void updateEntityAfterFallOn(Actor &)const;
    void shouldRandomTickExtraLayer()const;
    void getColor()const;
    bool isValidAuxValue(int)const;
    bool isCropBlock()const;
    void setFlammable(int, int)const;
    void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    void addAABB(AABB const&, AABB const*, std::vector<AABB> &)const;
    void tryToPlace(BlockSource &, BlockPos const&, ActorBlockSyncMessage const*)const;
    bool isTrapdoor()const;
    void getVariant()const;
    void getDebugText(std::vector<std::string> &, BlockPos const&)const;
//  bool hasProperty(BlockProperty)const; //TODO: incomplete function definition
    bool isStrippable(Block const&)const;
    void getDefaultState()const;
    void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    bool canInstatick()const;
    void telemetryVariant(BlockSource &, BlockPos const&)const;
    void getFriction()const;
    void playerDestroy(Player &, BlockPos const&)const;
    void calcGroundFriction(Mob &, BlockPos const&)const;
    void getRuntimeId()const;
    void getLegacyBlock()const;
    void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    bool isSolidBlockingBlockAndNotSignalSource()const;
    bool isInteractiveBlock()const;
    bool isFenceBlock()const;
    bool canHurtAndBreakItem()const;
    void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    void ignoreBlockForInsideCubeRenderer()const;
    bool hasVariableLighting()const;
    bool isInteraction()const;
    bool isStemBlock()const;
    void getAABB(BlockSource &, BlockPos const&, AABB &, bool)const;
    bool hasBlockEntity()const;
    void getMapColor()const;
    void addCollisionShapes(BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    bool isButtonBlock()const;
    void getBlockEntityType()const;
    void mayPlace(BlockSource &, BlockPos const&)const;
    void getCollisionShape(AABB &, BlockSource &, BlockPos const&, Actor *)const;
    void getRenderLayer(BlockSource &, BlockPos const&)const;
    void getColorAtPos(BlockSource &, BlockPos const&)const;
    bool isHeavy()const;
    void use(Player &, BlockPos const&)const;
    void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    void handleRain(BlockSource &, BlockPos const&, float)const;
    void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    bool isDoor()const;
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool, AABB const&)const;
    void shouldDispense(BlockSource &, Container &)const;
    bool isEmpty()const;
    bool canContainLiquid()const;
    void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    bool breaksFallingBlocks()const;
    bool isSolidBlockingBlock()const;
    void randomlyModifyPosition(BlockPos const&, int &)const;
    void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    void getPlacementFacingAll(Actor &, BlockPos const&, float);
    bool isFenceGateBlock()const;
    bool isHurtableBlock()const;
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    void calcVariant(BlockSource &, BlockPos const&)const;
    void getStateFromLegacyData(unsigned short)const;
    void getParticleQuantityScalar()const;
    void keepState(ItemState const&)const;
    void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    void getVisualShape(AABB &, bool)const;
    void spawnResources(BlockSource &, BlockPos const&, float, int)const;
    void getShadeBrightness()const;
    void spawnBurnResources(BlockSource &, float, float, float)const;
    void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    void getBurnOdds()const;
    void popResource(BlockSource &, BlockPos const&, ItemInstance const&)const;
    std::string buildDescriptionId()const;
    void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const;
    void getOutline(BlockSource &, BlockPos const&, AABB &)const;
    void copyState(Block const&, ItemState const&)const;
    void getDataDEPRECATED()const;
    bool isWaterBlocking()const;
};
