#pragma once

#include <string>
#include "../util/Brightness.h"
#include <functional>
#include <vector>


class BlockLegacy {

public:
    static long SIZE_OFFSET;
    static std::string BLOCK_DESCRIPTION_PREFIX;

    ~BlockLegacy(); // _ZN11BlockLegacyD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11BlockLegacy4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getStateFromLegacyData(unsigned short)const; // _ZNK11BlockLegacy22getStateFromLegacyDataEt
    virtual void getNextBlockPermutation(Block const&)const; // _ZNK11BlockLegacy23getNextBlockPermutationERK5Block
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK11BlockLegacy17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy19isObstructingChestsER11BlockSourceRK8BlockPos
    virtual void randomlyModifyPosition(BlockPos const&, int &)const; // _ZNK11BlockLegacy22randomlyModifyPositionERK8BlockPosRi
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK11BlockLegacy22randomlyModifyPositionERK8BlockPos
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK11BlockLegacy8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11BlockLegacy7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK11BlockLegacy18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual void getOutline(BlockSource &, BlockPos const&, AABB &)const; // _ZNK11BlockLegacy10getOutlineER11BlockSourceRK8BlockPosR4AABB
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK11BlockLegacy19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
    virtual void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const; // _ZNK11BlockLegacy15onProjectileHitER11BlockSourceRK8BlockPosRK5Actor
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const; // _ZNK11BlockLegacy30liquidCanFlowIntoFromDirectionEhRKSt8functionIFRK5BlockRK8BlockPosEES6_
    virtual void getLightEmission(Block const&)const; // _ZNK11BlockLegacy16getLightEmissionERK5Block
    virtual void shouldRandomTick()const; // _ZNK11BlockLegacy16shouldRandomTickEv
    virtual bool hasVariableLighting()const; // _ZNK11BlockLegacy19hasVariableLightingEv
    virtual bool isStrippable(Block const&)const; // _ZNK11BlockLegacy12isStrippableERK5Block
    virtual void getStrippedBlock(Block const&)const; // _ZNK11BlockLegacy16getStrippedBlockERK5Block
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK11BlockLegacy17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK11BlockLegacy10canConnectERK5BlockhS2_
    virtual void getConnectedDirections(Block const&, BlockPos const&, BlockSource &, bool &, bool &, bool &, bool &)const; // _ZNK11BlockLegacy22getConnectedDirectionsERK5BlockRK8BlockPosR11BlockSourceRbS8_S8_S8_
    virtual bool isCropBlock()const; // _ZNK11BlockLegacy11isCropBlockEv
    virtual bool isStemBlock()const; // _ZNK11BlockLegacy11isStemBlockEv
    virtual bool isContainerBlock()const; // _ZNK11BlockLegacy16isContainerBlockEv
    virtual bool isCraftingBlock()const; // _ZNK11BlockLegacy15isCraftingBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK11BlockLegacy18isInteractiveBlockEv
    virtual bool isWaterBlocking()const; // _ZNK11BlockLegacy15isWaterBlockingEv
    virtual bool isHurtableBlock()const; // _ZNK11BlockLegacy15isHurtableBlockEv
    virtual bool isFenceBlock()const; // _ZNK11BlockLegacy12isFenceBlockEv
    virtual bool isFenceGateBlock()const; // _ZNK11BlockLegacy16isFenceGateBlockEv
    virtual bool isThinFenceBlock()const; // _ZNK11BlockLegacy16isThinFenceBlockEv
    virtual bool isWallBlock()const; // _ZNK11BlockLegacy11isWallBlockEv
    virtual bool isStairBlock()const; // _ZNK11BlockLegacy12isStairBlockEv
    virtual bool isSlabBlock()const; // _ZNK11BlockLegacy11isSlabBlockEv
    virtual bool isDoorBlock()const; // _ZNK11BlockLegacy11isDoorBlockEv
    virtual bool isRailBlock()const; // _ZNK11BlockLegacy11isRailBlockEv
    virtual bool isButtonBlock()const; // _ZNK11BlockLegacy13isButtonBlockEv
    virtual bool canHurtAndBreakItem()const; // _ZNK11BlockLegacy19canHurtAndBreakItemEv
    virtual bool isSignalSource()const; // _ZNK11BlockLegacy14isSignalSourceEv
    virtual bool canBeOriginalSurface()const; // _ZNK11BlockLegacy20canBeOriginalSurfaceEv
    virtual bool isValidAuxValue(int)const; // _ZNK11BlockLegacy15isValidAuxValueEi
    virtual bool canFillAtPos(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11BlockLegacy12canFillAtPosER11BlockSourceRK8BlockPosRK5Block
    virtual void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11BlockLegacy17sanitizeFillBlockER11BlockSourceRK8BlockPosRK5Block
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11BlockLegacy11onFillBlockER11BlockSourceRK8BlockPosRK5Block
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const; // _ZNK11BlockLegacy15getDirectSignalER11BlockSourceRK8BlockPosi
    virtual void waterSpreadCausesSpawn()const; // _ZNK11BlockLegacy22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK11BlockLegacy16canContainLiquidEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK11BlockLegacy23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void handleRain(BlockSource &, BlockPos const&, float)const; // _ZNK11BlockLegacy10handleRainER11BlockSourceRK8BlockPosf
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK11BlockLegacy19canBeUsedInCommandsEbRK15BaseGameVersion
    virtual void getThickness()const; // _ZNK11BlockLegacy12getThicknessEv
    virtual void getFlexibility(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy14getFlexibilityER11BlockSourceRK8BlockPos
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK11BlockLegacy15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void shouldDispense(BlockSource &, Container &)const; // _ZNK11BlockLegacy14shouldDispenseER11BlockSourceR9Container
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK11BlockLegacy8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy8onRemoveER11BlockSourceRK8BlockPos
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const; // _ZNK11BlockLegacy10onExplodedER11BlockSourceRK8BlockPosP5Actor
    virtual void onStepOn(Actor &, BlockPos const&)const; // _ZNK11BlockLegacy8onStepOnER5ActorRK8BlockPos
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK11BlockLegacy8onFallOnER11BlockSourceRK8BlockPosP5Actorf
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK11BlockLegacy15transformOnFallER11BlockSourceRK8BlockPosP5Actorf
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK11BlockLegacy16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11BlockLegacy6onMoveER11BlockSourceRK8BlockPosS4_
    virtual bool detachesOnPistonMove(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy20detachesOnPistonMoveER11BlockSourceRK8BlockPos
    virtual void movedByPiston(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy13movedByPistonER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy19getRedstonePropertyER11BlockSourceRK8BlockPos
    virtual void updateEntityAfterFallOn(Actor &)const; // _ZNK11BlockLegacy23updateEntityAfterFallOnER5Actor
    virtual bool isBounceBlock()const; // _ZNK11BlockLegacy13isBounceBlockEv
    virtual void ignoreEntitiesOnPistonMove(Block const&)const; // _ZNK11BlockLegacy26ignoreEntitiesOnPistonMoveERK5Block
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK11BlockLegacy12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK11BlockLegacy20mayConsumeFertilizerER11BlockSource
    virtual void mayPick()const; // _ZNK11BlockLegacy7mayPickEv
    virtual void mayPick(BlockSource &, Block const&, bool)const; // _ZNK11BlockLegacy7mayPickER11BlockSourceRK5Blockb
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK11BlockLegacy8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy8mayPlaceER11BlockSourceRK8BlockPos
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const; // _ZNK11BlockLegacy10tryToPlaceER11BlockSourceRK8BlockPosRK5BlockPK21ActorBlockSyncMessage
    virtual bool breaksFallingBlocks(Block const&)const; // _ZNK11BlockLegacy19breaksFallingBlocksERK5Block
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const; // _ZNK11BlockLegacy7destroyER11BlockSourceRK8BlockPosRK5BlockP5Actor
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK11BlockLegacy17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const; // _ZNK11BlockLegacy28getIgnoresDestroyPermissionsER5ActorRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11BlockLegacy15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK11BlockLegacy13getSecondPartER11BlockSourceRK8BlockPosRS2_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK11BlockLegacy16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11BlockLegacy15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11BlockLegacy14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK11BlockLegacy14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void spawnBurnResources(BlockSource &, float, float, float)const; // _ZNK11BlockLegacy18spawnBurnResourcesER11BlockSourcefff
    virtual void getExplosionResistance(Actor *)const; // _ZNK11BlockLegacy22getExplosionResistanceEP5Actor
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const; // _ZNK11BlockLegacy4clipER11BlockSourceRK8BlockPosRK4Vec3S7_b
    virtual void use(Player &, BlockPos const&)const; // _ZNK11BlockLegacy3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK11BlockLegacy17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void calcVariant(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy11calcVariantER11BlockSourceRK8BlockPos
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK11BlockLegacy12isAttachedToER11BlockSourceRK8BlockPosRS2_
    virtual void attack(Player *, BlockPos const&)const; // _ZNK11BlockLegacy6attackEP6PlayerRK8BlockPos
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const; // _ZNK11BlockLegacy18handleEntityInsideER11BlockSourceRK8BlockPosP5ActorR4Vec3
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK11BlockLegacy12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK11BlockLegacy13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy10canSurviveER11BlockSourceRK8BlockPos
    virtual void getExperienceDrop(Random &)const; // _ZNK11BlockLegacy17getExperienceDropER6Random
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy14canBeBuiltOverER11BlockSourceRK8BlockPos
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const; // _ZNK11BlockLegacy12triggerEventER11BlockSourceRK8BlockPosii
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const; // _ZNK11BlockLegacy12executeEventER11BlockSourceRK8BlockPosRK5BlockRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER5Actor
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const; // _ZNK11BlockLegacy6hasTagER11BlockSourceRK8BlockPosRK5BlockRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getMobToSpawn(SpawnConditions const&, BlockSource &)const; // _ZNK11BlockLegacy13getMobToSpawnERK15SpawnConditionsR11BlockSource
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy11getMapColorER11BlockSourceRK8BlockPos
    virtual void getMapColor()const; // _ZNK11BlockLegacy11getMapColorEv
    virtual void shouldStopFalling(Actor &)const; // _ZNK11BlockLegacy17shouldStopFallingER5Actor
    virtual bool pushesUpFallingBlocks()const; // _ZNK11BlockLegacy21pushesUpFallingBlocksEv
    virtual void calcGroundFriction(Mob &, BlockPos const&)const; // _ZNK11BlockLegacy18calcGroundFrictionER3MobRK8BlockPos
    virtual bool canHaveExtraData()const; // _ZNK11BlockLegacy16canHaveExtraDataEv
    virtual bool hasComparatorSignal()const; // _ZNK11BlockLegacy19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK11BlockLegacy19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual bool canSlide(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy8canSlideER11BlockSourceRK8BlockPos
    virtual void getIconYOffset()const; // _ZNK11BlockLegacy14getIconYOffsetEv
    virtual void getRenderLayer()const; // _ZNK11BlockLegacy14getRenderLayerEv
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK11BlockLegacy18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK11BlockLegacy28isAuxValueRelevantForPickingEv
    virtual void getColor(Block const&)const; // _ZNK11BlockLegacy8getColorERK5Block
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy13getColorAtPosER11BlockSourceRK8BlockPos
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11BlockLegacy8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11BlockLegacy19getColorForParticleER11BlockSourceRK8BlockPosRK5Block
    virtual bool isSeasonTinted(Block const&, BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy14isSeasonTintedERK5BlockR11BlockSourceRK8BlockPos
    virtual void onGraphicsModeChanged(bool, bool, bool); // _ZN11BlockLegacy21onGraphicsModeChangedEbbb
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getExtraRenderLayers()const; // _ZNK11BlockLegacy20getExtraRenderLayersEv
    virtual void getShadeBrightness()const; // _ZNK11BlockLegacy18getShadeBrightnessEv
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK11BlockLegacy21getVisualShapeInWorldERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK11BlockLegacy14getVisualShapeERK5BlockR4AABBb
    virtual void getUIShape(Block const&, AABB &)const; // _ZNK11BlockLegacy10getUIShapeERK5BlockR4AABB
    virtual void telemetryVariant(BlockSource &, BlockPos const&)const; // _ZNK11BlockLegacy16telemetryVariantER11BlockSourceRK8BlockPos
    virtual void getVariant(Block const&)const; // _ZNK11BlockLegacy10getVariantERK5Block
    virtual bool canSpawnOn()const; // _ZNK11BlockLegacy10canSpawnOnEv
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK11BlockLegacy13getMappedFaceEhRK5Block
    virtual void getFaceFlip(unsigned char, Block const&)const; // _ZNK11BlockLegacy11getFaceFlipEhRK5Block
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11BlockLegacy11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void init(); // _ZN11BlockLegacy4initEv
    virtual void setLightBlock(Brightness); // _ZN11BlockLegacy13setLightBlockE10Brightness
    virtual void setLightEmission(float); // _ZN11BlockLegacy16setLightEmissionEf
    virtual void setExplodeable(float); // _ZN11BlockLegacy14setExplodeableEf
    virtual void setDestroyTime(float); // _ZN11BlockLegacy14setDestroyTimeEf
    virtual void setFriction(float); // _ZN11BlockLegacy11setFrictionEf
//  virtual void addProperty(BlockProperty); //TODO: incomplete function definition // _ZN11BlockLegacy11addPropertyE13BlockProperty
    virtual void addState(ItemState const&); // _ZN11BlockLegacy8addStateERK9ItemState
    virtual void addState(ItemState const&, unsigned long); // _ZN11BlockLegacy8addStateERK9ItemStatem
    virtual void setAllowsRunes(bool); // _ZN11BlockLegacy14setAllowsRunesEb
    virtual void setMapColor(Color const&); // _ZN11BlockLegacy11setMapColorERK5Color
    virtual bool canBeSilkTouched()const; // _ZNK11BlockLegacy16canBeSilkTouchedEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK11BlockLegacy24getSilkTouchItemInstanceERK5Block
    virtual void setVisualShape(AABB const&); // _ZN11BlockLegacy14setVisualShapeERK4AABB
    virtual void setVisualShape(Vec3 const&, Vec3 const&); // _ZN11BlockLegacy14setVisualShapeERK4Vec3S2_
    virtual void tryLegacyUpgrade(unsigned short)const; // _ZNK11BlockLegacy16tryLegacyUpgradeEt
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const; // _ZNK11BlockLegacy18dealsContactDamageERK5ActorRK5Blockb
    void operator==(BlockLegacy const&)const; // _ZNK11BlockLegacyeqERKS_
    void operator!=(BlockLegacy const&)const; // _ZNK11BlockLegacyneERKS_
    void getBlockID()const; // _ZNK11BlockLegacy10getBlockIDEv
    void getNumPermutations()const; // _ZNK11BlockLegacy18getNumPermutationsEv
    bool hasState(ItemState const&)const; // _ZNK11BlockLegacy8hasStateERK9ItemState
    bool isDoor()const; // _ZNK11BlockLegacy6isDoorEv
    bool matchesStates(BlockLegacy const&)const; // _ZNK11BlockLegacy13matchesStatesERKS_
    bool isMobPiece()const; // _ZNK11BlockLegacy10isMobPieceEv
    bool canBeExtraBlock()const; // _ZNK11BlockLegacy15canBeExtraBlockEv
    bool canPropagateBrightness()const; // _ZNK11BlockLegacy22canPropagateBrightnessEv
    void shouldRandomTickExtraLayer()const; // _ZNK11BlockLegacy26shouldRandomTickExtraLayerEv
    bool canBeBrokenFromFalling()const; // _ZNK11BlockLegacy22canBeBrokenFromFallingEv
    void createBlockPermutations(unsigned int); // _ZN11BlockLegacy23createBlockPermutationsEj
    void createWeakPtr(); // _ZN11BlockLegacy13createWeakPtrEv
    void setDefaultState(Block const&); // _ZN11BlockLegacy15setDefaultStateERK5Block
    BlockLegacy(std::string const&, int, Material const&); // _ZN11BlockLegacyC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void setSolid(bool); // _ZN11BlockLegacy8setSolidEb
    std::string getNamespace()const; // _ZNK11BlockLegacy12getNamespaceB5cxx11Ev
    std::string getRawNameId()const; // _ZNK11BlockLegacy12getRawNameIdB5cxx11Ev
    bool canInstatick()const; // _ZNK11BlockLegacy12canInstatickEv
    void getCreativeCategory()const; // _ZNK11BlockLegacy19getCreativeCategoryEv
    void getGravity()const; // _ZNK11BlockLegacy10getGravityEv
    void getMaterial()const; // _ZNK11BlockLegacy11getMaterialEv
    void getFriction()const; // _ZNK11BlockLegacy11getFrictionEv
    void getDestroySpeed()const; // _ZNK11BlockLegacy15getDestroySpeedEv
    void _tryGetStateFromLegacyDataUncached(unsigned short)const; // _ZNK11BlockLegacy34_tryGetStateFromLegacyDataUncachedEt
    std::string getFullName()const; // _ZNK11BlockLegacy11getFullNameB5cxx11Ev
    void getDefaultState()const; // _ZNK11BlockLegacy15getDefaultStateEv
    void tryGetStateFromLegacyData(unsigned short)const; // _ZNK11BlockLegacy25tryGetStateFromLegacyDataEt
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool, AABB const&)const; // _ZNK11BlockLegacy4clipER11BlockSourceRK8BlockPosRK4Vec3S7_bRK4AABB
    void spawnResources(BlockSource &, BlockPos const&, float, int)const; // _ZNK11BlockLegacy14spawnResourcesER11BlockSourceRK8BlockPosfi
    void popResource(BlockSource &, BlockPos const&, ItemInstance const&)const; // _ZNK11BlockLegacy11popResourceER11BlockSourceRK8BlockPosRK12ItemInstance
    void addAABB(AABB const&, AABB const*, std::vector<AABB> &)const; // _ZNK11BlockLegacy7addAABBERK4AABBPS1_RSt6vectorIS0_SaIS0_EE
    bool isSolid()const; // _ZNK11BlockLegacy7isSolidEv
    bool pushesOutItems()const; // _ZNK11BlockLegacy14pushesOutItemsEv
    void setPushesOutItems(bool); // _ZN11BlockLegacy17setPushesOutItemsEb
    void ignoreBlockForInsideCubeRenderer()const; // _ZNK11BlockLegacy32ignoreBlockForInsideCubeRendererEv
    void setIgnoreBlockForInsideCubeRenderer(bool); // _ZN11BlockLegacy35setIgnoreBlockForInsideCubeRendererEb
    bool isUnbreakable()const; // _ZNK11BlockLegacy13isUnbreakableEv
    bool isHeavy()const; // _ZNK11BlockLegacy7isHeavyEv
//  bool hasProperty(BlockProperty)const; //TODO: incomplete function definition // _ZNK11BlockLegacy11hasPropertyE13BlockProperty
    bool isInteraction()const; // _ZNK11BlockLegacy13isInteractionEv
    void setIsInteraction(bool); // _ZN11BlockLegacy16setIsInteractionEb
    void setNameId(std::string const&); // _ZN11BlockLegacy9setNameIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getDescriptionId()const; // _ZNK11BlockLegacy16getDescriptionIdB5cxx11Ev
    std::string buildDescriptionName(Block const&)const; // _ZNK11BlockLegacy20buildDescriptionNameB5cxx11ERK5Block
//  void addBlockProperty(BlockProperty); //TODO: incomplete function definition // _ZN11BlockLegacy16addBlockPropertyE13BlockProperty
//  void setBlockProperty(BlockProperty); //TODO: incomplete function definition // _ZN11BlockLegacy16setBlockPropertyE13BlockProperty
    void setFlammable(int, int)const; // _ZNK11BlockLegacy12setFlammableEii
    void setRandomTicking(bool)const; // _ZNK11BlockLegacy16setRandomTickingEb
    void setRandomTickingExtraLayer(bool)const; // _ZNK11BlockLegacy26setRandomTickingExtraLayerEb
    void setExperimental(); // _ZN11BlockLegacy15setExperimentalEv
    void setMinRequiredBaseGameVersion(BaseGameVersion const&); // _ZN11BlockLegacy29setMinRequiredBaseGameVersionERK15BaseGameVersion
    void setCanBeExtraBlock(bool); // _ZN11BlockLegacy18setCanBeExtraBlockEb
    void setCanPropagateBrightness(bool); // _ZN11BlockLegacy25setCanPropagateBrightnessEb
    void getRequiredBaseGameVersion()const; // _ZNK11BlockLegacy26getRequiredBaseGameVersionEv
    void getExperimental()const; // _ZNK11BlockLegacy15getExperimentalEv
    void getAllowsRunes()const; // _ZNK11BlockLegacy14getAllowsRunesEv
//  void setCategory(CreativeItemCategory); //TODO: incomplete function definition // _ZN11BlockLegacy11setCategoryE20CreativeItemCategory
    void DEPRECATEDcallOnGraphicsModeChanged(bool, bool, bool); // _ZN11BlockLegacy35DEPRECATEDcallOnGraphicsModeChangedEbbb
    bool isVanilla()const; // _ZNK11BlockLegacy9isVanillaEv
    void setIsVanillaBlock(bool); // _ZN11BlockLegacy17setIsVanillaBlockEb
    void getBlockItemId()const; // _ZNK11BlockLegacy14getBlockItemIdEv
    bool isAlphaTested()const; // _ZNK11BlockLegacy13isAlphaTestedEv
    bool isSolidBlockingBlock()const; // _ZNK11BlockLegacy20isSolidBlockingBlockEv
    bool isMotionBlockingBlock()const; // _ZNK11BlockLegacy21isMotionBlockingBlockEv
    bool isEmpty()const; // _ZNK11BlockLegacy7isEmptyEv
    void getBlockEntityType()const; // _ZNK11BlockLegacy18getBlockEntityTypeEv
    bool hasBlockEntity()const; // _ZNK11BlockLegacy14hasBlockEntityEv
    void getProperties()const; // _ZNK11BlockLegacy13getPropertiesEv
    void forEachBlockPermutation(std::function<bool (Block const&)>)const; // _ZNK11BlockLegacy23forEachBlockPermutationESt8functionIFbRK5BlockEE
    void forEachItemStateInstance(std::function<bool (ItemStateInstance const&)>)const; // _ZNK11BlockLegacy24forEachItemStateInstanceESt8functionIFbRK17ItemStateInstanceEE
    void getDebugText(std::vector<std::string> &, BlockPos const&)const; // _ZNK11BlockLegacy12getDebugTextERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EERK8BlockPos
    void getParticleQuantityScalar()const; // _ZNK11BlockLegacy25getParticleQuantityScalarEv
    void getPlacementFacingAll(Actor &, BlockPos const&, float); // _ZN11BlockLegacy21getPlacementFacingAllER5ActorRK8BlockPosf
    void getPlacementFacingAllExceptAxisY(Actor &, BlockPos const&, float); // _ZN11BlockLegacy32getPlacementFacingAllExceptAxisYER5ActorRK8BlockPosf
    std::string makeInvalidStateMessage(ItemState const&)const; // _ZNK11BlockLegacy23makeInvalidStateMessageB5cxx11ERK9ItemState
    bool isStandingSign()const; // _ZNK11BlockLegacy14isStandingSignEv
    void initFromDefinition(BlockDefinition const*); // _ZN11BlockLegacy18initFromDefinitionEPK15BlockDefinition
    bool isTrapdoor()const; // _ZNK11BlockLegacy10isTrapdoorEv
    void getStateMask(ItemState const&)const; // _ZNK11BlockLegacy12getStateMaskERK9ItemState
};
