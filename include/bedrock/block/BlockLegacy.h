#pragma once

#include "../../unmapped/Material"
#include "../util/Vec3"
#include "../../unmapped/SpawnConditions"
#include "../item/unmapped/ItemState"
#include "../actor/Player"
#include "../container/Container"
#include "../util/Random"
#include "unmapped/BlockSource"
#include "../util/Brightness"
#include "../actor/unmapped/ActorBlockSyncMessage"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../item/ItemInstance"
#include "../../unmapped/BaseGameVersion"
#include "../definition/BlockDefinition"
#include "../util/AABB"
#include "../actor/Mob"
#include "../actor/Actor"
#include "../util/Color"


class BlockLegacy {

public:
    static long SIZE_OFFSET;
    static long BLOCK_DESCRIPTION_PREFIX[abi:cxx11];

    virtual BlockLegacy::~BlockLegacy()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getStateFromLegacyData(unsigned short)const;
    virtual void getNextBlockPermutation(Block const&)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual void getOutline(BlockSource &, BlockPos const&, AABB &)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block ()(BlockPos const&)> const&, BlockPos const&)const;
    virtual void getLightEmission(Block const&)const;
    virtual void shouldRandomTick()const;
    virtual bool hasVariableLighting()const;
    virtual bool isStrippable(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getConnectedDirections(Block const&, BlockPos const&, BlockSource &, bool &, bool &, bool &, bool &)const;
    virtual bool isCropBlock()const;
    virtual bool isStemBlock()const;
    virtual bool isContainerBlock()const;
    virtual bool isCraftingBlock()const;
    virtual bool isInteractiveBlock()const;
    virtual bool isWaterBlocking()const;
    virtual bool isHurtableBlock()const;
    virtual bool isFenceBlock()const;
    virtual bool isFenceGateBlock()const;
    virtual bool isThinFenceBlock()const;
    virtual bool isWallBlock()const;
    virtual bool isStairBlock()const;
    virtual bool isSlabBlock()const;
    virtual bool isDoorBlock()const;
    virtual bool isRailBlock()const;
    virtual bool isButtonBlock()const;
    virtual bool canHurtAndBreakItem()const;
    virtual bool isSignalSource()const;
    virtual bool canBeOriginalSurface()const;
    virtual bool isValidAuxValue(int)const;
    virtual bool canFillAtPos(BlockSource &, BlockPos const&, Block const&)const;
    virtual void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void handleRain(BlockSource &, BlockPos const&, float)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getThickness()const;
    virtual void getFlexibility(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void shouldDispense(BlockSource &, Container &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    virtual void movedByPiston(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual bool isBounceBlock()const;
    virtual void ignoreEntitiesOnPistonMove(Block const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void mayPick()const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void spawnBurnResources(BlockSource &, float, float, float)const;
    virtual void getExplosionResistance(Actor *)const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void calcVariant(BlockSource &, BlockPos const&)const;
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getExperienceDrop(Random &)const;
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const;
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    virtual void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getMapColor()const;
    virtual void shouldStopFalling(Actor &)const;
    virtual bool pushesUpFallingBlocks()const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;
    virtual bool canHaveExtraData()const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool canSlide(BlockSource &, BlockPos const&)const;
    virtual void getIconYOffset()const;
    virtual void getRenderLayer()const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isSeasonTinted(Block const&, BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers()const;
    virtual void getShadeBrightness()const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getUIShape(Block const&, AABB &)const;
    virtual void telemetryVariant(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool canSpawnOn()const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void init();
    virtual void setLightBlock(Brightness);
    virtual void setLightEmission(float);
    virtual void setExplodeable(float);
    virtual void setDestroyTime(float);
    virtual void setFriction(float);
    virtual void addProperty(BlockProperty);
    virtual void addState(ItemState const&);
    virtual void addState(ItemState const&, unsigned long);
    virtual void setAllowsRunes(bool);
    virtual void setMapColor(Color const&);
    virtual bool canBeSilkTouched()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void setVisualShape(AABB const&);
    virtual void setVisualShape(Vec3 const&, Vec3 const&);
    virtual void tryLegacyUpgrade(unsigned short)const;
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const;

    void getBlockID()const;
    void getNumPermutations()const;
    bool hasState(ItemState const&)const;
    bool isDoor()const;
    bool matchesStates(BlockLegacy const&)const;
    bool isMobPiece()const;
    bool canBeExtraBlock()const;
    bool canPropagateBrightness()const;
    void shouldRandomTickExtraLayer()const;
    bool canBeBrokenFromFalling()const;
    void createBlockPermutations(unsigned int);
    void createWeakPtr();
    void setDefaultState(Block const&);
    BlockLegacy(std::string const&, int, Material const&);
    void setSolid(bool);
    bool canInstatick()const;
    void getCreativeCategory()const;
    void getGravity()const;
    void getMaterial()const;
    void getFriction()const;
    void getDestroySpeed()const;
    void _tryGetStateFromLegacyDataUncached(unsigned short)const;
    void getDefaultState()const;
    void tryGetStateFromLegacyData(unsigned short)const;
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool, AABB const&)const;
    void spawnResources(BlockSource &, BlockPos const&, float, int)const;
    void popResource(BlockSource &, BlockPos const&, ItemInstance const&)const;
    void addAABB(AABB const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    bool isSolid()const;
    bool pushesOutItems()const;
    void setPushesOutItems(bool);
    void ignoreBlockForInsideCubeRenderer()const;
    void setIgnoreBlockForInsideCubeRenderer(bool);
    bool isUnbreakable()const;
    bool isHeavy()const;
    bool hasProperty(BlockProperty)const;
    bool isInteraction()const;
    void setIsInteraction(bool);
    void setNameId(std::string const&);
    void addBlockProperty(BlockProperty);
    void setBlockProperty(BlockProperty);
    void setFlammable(int, int)const;
    void setRandomTicking(bool)const;
    void setRandomTickingExtraLayer(bool)const;
    void setExperimental();
    void setMinRequiredBaseGameVersion(BaseGameVersion const&);
    void setCanBeExtraBlock(bool);
    void setCanPropagateBrightness(bool);
    void getRequiredBaseGameVersion()const;
    void getExperimental()const;
    void getAllowsRunes()const;
    void setCategory(CreativeItemCategory);
    void DEPRECATEDcallOnGraphicsModeChanged(bool, bool, bool);
    bool isVanilla()const;
    void setIsVanillaBlock(bool);
    void getBlockItemId()const;
    bool isAlphaTested()const;
    bool isSolidBlockingBlock()const;
    bool isMotionBlockingBlock()const;
    bool isEmpty()const;
    void getBlockEntityType()const;
    bool hasBlockEntity()const;
    void getProperties()const;
    void forEachBlockPermutation(std::function<bool ()(Block const&)>)const;
    void forEachItemStateInstance(std::function<bool ()(ItemStateInstance const&)>)const;
    void getDebugText(std::vector<std::string, std::allocator<std::string>> &, BlockPos const&)const;
    void getParticleQuantityScalar()const;
    void getPlacementFacingAll(Actor &, BlockPos const&, float);
    void getPlacementFacingAllExceptAxisY(Actor &, BlockPos const&, float);
    bool isStandingSign()const;
    void initFromDefinition(BlockDefinition const*);
    bool isTrapdoor()const;
    void getStateMask(ItemState const&)const;
};
