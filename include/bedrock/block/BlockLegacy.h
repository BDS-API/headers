#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../item/ItemInstance.h"
#include "../util/AABB.h"
#include <string>
#include "../actor/Actor.h"
#include <functional>
#include "../../unmapped/Block.h"
#include "../container/Container.h"
#include "../util/Brightness.h"
#include "../item/unmapped/ItemState.h"
#include "../item/unmapped/ItemStateInstance.h"
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include "../../unmapped/BaseGameVersion.h"
#include <vector>
#include "../util/Color.h"
#include "../actor/Player.h"
#include "../../unmapped/SpawnConditions.h"
#include "../actor/Mob.h"
#include "../actor/unmapped/ActorBlockSyncMessage.h"
#include "../definition/BlockDefinition.h"


class BlockLegacy {

public:
    static long SIZE_OFFSET;
    static std::string BLOCK_DESCRIPTION_PREFIX;

    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool isCropBlock()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void handleRain(BlockSource &, BlockPos const&, float)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void addState(ItemState const&);
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool isStairBlock()const;
    virtual void ignoreEntitiesOnPistonMove(Block const&)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const;
    virtual void getExtraRenderLayers()const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canFillAtPos(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getIconYOffset()const;
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canHaveExtraData()const;
//  virtual void addProperty(BlockProperty); //TODO: incomplete function definition
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void movedByPiston(BlockSource &, BlockPos const&)const;
    virtual void shouldDispense(BlockSource &, Container &)const;
    virtual void setDestroyTime(float);
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    virtual bool hasComparatorSignal()const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isHurtableBlock()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void setVisualShape(AABB const&);
    virtual void getUIShape(Block const&, AABB &)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual bool isWallBlock()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;
    virtual void calcVariant(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual bool canSpawnOn()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const;
    virtual void setLightEmission(float);
    virtual bool isSignalSource()const;
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const;
    virtual void getNextBlockPermutation(Block const&)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void getExperienceDrop(Random &)const;
    virtual void setVisualShape(Vec3 const&, Vec3 const&);
    virtual bool isValidAuxValue(int)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual bool isWaterBlocking()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void shouldRandomTick()const;
    virtual void setAllowsRunes(bool);
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool canHurtAndBreakItem()const;
    virtual void getColor(Block const&)const;
    virtual void telemetryVariant(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool isSlabBlock()const;
    virtual bool isButtonBlock()const;
    virtual void setLightBlock(Brightness);
    virtual void getRenderLayer()const;
    virtual bool canBeOriginalSurface()const;
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool canSlide(BlockSource &, BlockPos const&)const;
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isInteractiveBlock()const;
    virtual void getMapColor()const;
    virtual void addState(ItemState const&, unsigned long);
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getStateFromLegacyData(unsigned short)const;
    virtual bool isStemBlock()const;
    virtual bool isRailBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    ~BlockLegacy();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isBounceBlock()const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual bool isContainerBlock()const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual bool canBeSilkTouched()const;
    virtual void mayPick()const;
    virtual void init();
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void getOutline(BlockSource &, BlockPos const&, AABB &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getFlexibility(BlockSource &, BlockPos const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool hasVariableLighting()const;
    virtual bool isDoorBlock()const;
    virtual void tryLegacyUpgrade(unsigned short)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void shouldStopFalling(Actor &)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isFenceBlock()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void setExplodeable(float);
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual bool isFenceGateBlock()const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual bool isStrippable(Block const&)const;
    virtual bool isThinFenceBlock()const;
    virtual void setFriction(float);
    virtual void getShadeBrightness()const;
    virtual void spawnBurnResources(BlockSource &, float, float, float)const;
    virtual void getConnectedDirections(Block const&, BlockPos const&, BlockSource &, bool &, bool &, bool &, bool &)const;
    virtual bool isCraftingBlock()const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool isSeasonTinted(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getThickness()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void setMapColor(Color const&);
    virtual void getStrippedBlock(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void getExplosionResistance(Actor *)const;
    virtual void getLightEmission(Block const&)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool pushesUpFallingBlocks()const;
    bool canInstatick()const;
    void DEPRECATEDcallOnGraphicsModeChanged(bool, bool, bool);
    void getParticleQuantityScalar()const;
    void initFromDefinition(BlockDefinition const*);
    void getRequiredBaseGameVersion()const;
    bool isMobPiece()const;
    void forEachItemStateInstance(std::function<bool (ItemStateInstance const&)>)const;
    void createBlockPermutations(unsigned int);
    bool isInteraction()const;
    void getBlockID()const;
    bool isStandingSign()const;
    void getBlockEntityType()const;
    void getGravity()const;
    bool isSolid()const;
    std::string getDescriptionId()const;
    void setRandomTicking(bool)const;
    void getExperimental()const;
    BlockLegacy(std::string const&, int, Material const&);
    void setCanPropagateBrightness(bool);
    std::string buildDescriptionName(Block const&)const;
    void setIsVanillaBlock(bool);
    void createWeakPtr();
    bool isAlphaTested()const;
    void operator==(BlockLegacy const&)const;
    bool isMotionBlockingBlock()const;
    bool isTrapdoor()const;
    void setMinRequiredBaseGameVersion(BaseGameVersion const&);
    void setCanBeExtraBlock(bool);
    void getDefaultState()const;
    void setPushesOutItems(bool);
    void getMaterial()const;
    void getFriction()const;
    void _tryGetStateFromLegacyDataUncached(unsigned short)const;
    bool isVanilla()const;
    void spawnResources(BlockSource &, BlockPos const&, float, int)const;
    void popResource(BlockSource &, BlockPos const&, ItemInstance const&)const;
    void getCreativeCategory()const;
    void operator!=(BlockLegacy const&)const;
    void getDestroySpeed()const;
    void getProperties()const;
    void getBlockItemId()const;
    void getPlacementFacingAll(Actor &, BlockPos const&, float);
    std::string getRawNameId()const;
    void ignoreBlockForInsideCubeRenderer()const;
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool, AABB const&)const;
//  void setBlockProperty(BlockProperty); //TODO: incomplete function definition
    void shouldRandomTickExtraLayer()const;
    bool isDoor()const;
    void setDefaultState(Block const&);
    bool matchesStates(BlockLegacy const&)const;
    void getAllowsRunes()const;
    void addAABB(AABB const&, AABB const*, std::vector<AABB> &)const;
    void setSolid(bool);
    std::string getFullName()const;
    void setNameId(std::string const&);
    void getDebugText(std::vector<std::string> &, BlockPos const&)const;
    bool canBeBrokenFromFalling()const;
    void setFlammable(int, int)const;
    std::string makeInvalidStateMessage(ItemState const&)const;
    bool pushesOutItems()const;
    bool hasState(ItemState const&)const;
//  bool hasProperty(BlockProperty)const; //TODO: incomplete function definition
    bool canPropagateBrightness()const;
    bool isHeavy()const;
    bool canBeExtraBlock()const;
    void setRandomTickingExtraLayer(bool)const;
    bool isSolidBlockingBlock()const;
    void setIsInteraction(bool);
//  void addBlockProperty(BlockProperty); //TODO: incomplete function definition
    void tryGetStateFromLegacyData(unsigned short)const;
    void getNumPermutations()const;
    void setExperimental();
//  void setCategory(CreativeItemCategory); //TODO: incomplete function definition
    bool isUnbreakable()const;
    std::string getNamespace()const;
    bool hasBlockEntity()const;
    void forEachBlockPermutation(std::function<bool (Block const&)>)const;
    void getStateMask(ItemState const&)const;
    bool isEmpty()const;
    void getPlacementFacingAllExceptAxisY(Actor &, BlockPos const&, float);
    void setIgnoreBlockForInsideCubeRenderer(bool);
};
