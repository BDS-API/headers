#pragma once

#include <string>
#include <functional>
#include <vector>


class Block {

public:
    static long SIZE_OFFSET;
    static std::string BLOCK_DESCRIPTION_PREFIX;

    ~Block(); // _ZN5BlockD2Ev
    virtual void getRenderLayer()const; // _ZNK5Block14getRenderLayerEv
    void getLegacyBlock()const; // _ZNK5Block14getLegacyBlockEv
    std::string getRawNameId()const; // _ZNK5Block12getRawNameIdB5cxx11Ev
    void getDataDEPRECATED()const; // _ZNK5Block17getDataDEPRECATEDEv
    void getStateFromLegacyData(unsigned short)const; // _ZNK5Block22getStateFromLegacyDataEt
    std::string getFullName()const; // _ZNK5Block11getFullNameB5cxx11Ev
    void operator==(Block const&)const; // _ZNK5BlockeqERKS_
    void operator!=(Block const&)const; // _ZNK5BlockneERKS_
    void getDefaultState()const; // _ZNK5Block15getDefaultStateEv
    bool hasState(ItemState const&)const; // _ZNK5Block8hasStateERK9ItemState
    bool isDoor()const; // _ZNK5Block6isDoorEv
    void getLegacyBlockPtr()const; // _ZNK5Block17getLegacyBlockPtrEv
    bool canContainLiquid()const; // _ZNK5Block16canContainLiquidEv
    bool matchesStates(BlockLegacy const&)const; // _ZNK5Block13matchesStatesERK11BlockLegacy
    void getBurnOdds()const; // _ZNK5Block11getBurnOddsEv
    void setFlammable(int, int)const; // _ZNK5Block12setFlammableEii
    void getFlameOdds()const; // _ZNK5Block12getFlameOddsEv
    void getLight()const; // _ZNK5Block8getLightEv
    bool isSolid()const; // _ZNK5Block7isSolidEv
    void ignoreBlockForInsideCubeRenderer()const; // _ZNK5Block32ignoreBlockForInsideCubeRendererEv
    bool pushesOutItems()const; // _ZNK5Block14pushesOutItemsEv
    void shouldRandomTick()const; // _ZNK5Block16shouldRandomTickEv
    void shouldRandomTickExtraLayer()const; // _ZNK5Block26shouldRandomTickExtraLayerEv
    void getTranslucency()const; // _ZNK5Block15getTranslucencyEv
    void getLightEmission()const; // _ZNK5Block16getLightEmissionEv
    bool hasVariableLighting()const; // _ZNK5Block19hasVariableLightingEv
//  Block(unsigned short, WeakPtr<BlockLegacy> &); //TODO: incomplete function definition // _ZN5BlockC2EtR7WeakPtrI11BlockLegacyE
    bool canSlide(BlockSource &, BlockPos const&)const; // _ZNK5Block8canSlideER11BlockSourceRK8BlockPos
    bool canInstatick()const; // _ZNK5Block12canInstatickEv
    void getCreativeCategory()const; // _ZNK5Block19getCreativeCategoryEv
    void getGravity()const; // _ZNK5Block10getGravityEv
    void getMaterial()const; // _ZNK5Block11getMaterialEv
    void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK5Block11getMapColorER11BlockSourceRK8BlockPos
    void getMapColor()const; // _ZNK5Block11getMapColorEv
    void getFriction()const; // _ZNK5Block11getFrictionEv
    void getDestroySpeed()const; // _ZNK5Block15getDestroySpeedEv
    void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK5Block4tickER11BlockSourceRK8BlockPosR6Random
    void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK5Block11animateTickER11BlockSourceRK8BlockPosR6Random
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool, AABB const&)const; // _ZNK5Block4clipER11BlockSourceRK8BlockPosRK4Vec3S7_bRK4AABB
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const; // _ZNK5Block4clipER11BlockSourceRK8BlockPosRK4Vec3S7_b
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK5Block14spawnResourcesER11BlockSourceRK8BlockPosRKS_fi
    void spawnResources(BlockSource &, BlockPos const&, float, int)const; // _ZNK5Block14spawnResourcesER11BlockSourceRK8BlockPosfi
    void popResource(BlockSource &, BlockPos const&, ItemInstance const&)const; // _ZNK5Block11popResourceER11BlockSourceRK8BlockPosRK12ItemInstance
    void spawnBurnResources(BlockSource &, float, float, float)const; // _ZNK5Block18spawnBurnResourcesER11BlockSourcefff
    void destroy(BlockSource &, BlockPos const&, Actor *)const; // _ZNK5Block7destroyER11BlockSourceRK8BlockPosP5Actor
    void playerWillDestroy(Player &, BlockPos const&)const; // _ZNK5Block17playerWillDestroyER6PlayerRK8BlockPos
    void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const; // _ZNK5Block28getIgnoresDestroyPermissionsER5ActorRK8BlockPos
    void randomlyModifyPosition(BlockPos const&, int &)const; // _ZNK5Block22randomlyModifyPositionERK8BlockPosRi
    void randomlyModifyPosition(BlockPos const&)const; // _ZNK5Block22randomlyModifyPositionERK8BlockPos
    void addCollisionShapes(BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK5Block18addCollisionShapesER11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS5_SaIS5_EEP5Actor
    void addAABBs(BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK5Block8addAABBsER11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS5_SaIS5_EE
    void addAABB(AABB const&, AABB const*, std::vector<AABB> &)const; // _ZNK5Block7addAABBERK4AABBPS1_RSt6vectorIS0_SaIS0_EE
    bool isUnbreakable()const; // _ZNK5Block13isUnbreakableEv
    bool isHeavy()const; // _ZNK5Block7isHeavyEv
    bool isStrippable(Block const&)const; // _ZNK5Block12isStrippableERKS_
    void getStrippedBlock()const; // _ZNK5Block16getStrippedBlockEv
    bool canBeBrokenFromFalling()const; // _ZNK5Block22canBeBrokenFromFallingEv
//  bool canProvideSupport(unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK5Block17canProvideSupportEh16BlockSupportType
    bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK5Block10canConnectERKS_hS1_
    void getConnectedDirections(BlockPos const&, BlockSource &, bool &, bool &, bool &, bool &)const; // _ZNK5Block22getConnectedDirectionsERK8BlockPosR11BlockSourceRbS5_S5_S5_
    void getAABB(BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK5Block7getAABBER11BlockSourceRK8BlockPosR4AABBb
    void getOutline(BlockSource &, BlockPos const&, AABB &)const; // _ZNK5Block10getOutlineER11BlockSourceRK8BlockPosR4AABB
    void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK5Block19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
    void mayPick()const; // _ZNK5Block7mayPickEv
    void mayPick(BlockSource &, bool)const; // _ZNK5Block7mayPickER11BlockSourceb
    void getResourceCount(Random &, int)const; // _ZNK5Block16getResourceCountER6Randomi
    bool asItemInstance(BlockSource &, BlockPos const&)const; // _ZNK5Block14asItemInstanceER11BlockSourceRK8BlockPos
    void getExplosionResistance(Actor *)const; // _ZNK5Block22getExplosionResistanceEP5Actor
    bool isInteraction()const; // _ZNK5Block13isInteractionEv
    void use(Player &, BlockPos const&)const; // _ZNK5Block3useER6PlayerRK8BlockPos
    void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK5Block17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    void calcVariant(BlockSource &, BlockPos const&)const; // _ZNK5Block11calcVariantER11BlockSourceRK8BlockPos
    bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK5Block12isAttachedToER11BlockSourceRK8BlockPosRS2_
    void attack(Player *, BlockPos const&)const; // _ZNK5Block6attackEP6PlayerRK8BlockPos
    void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const; // _ZNK5Block18handleEntityInsideER11BlockSourceRK8BlockPosP5ActorR4Vec3
    bool isAuxValueRelevantForPicking()const; // _ZNK5Block28isAuxValueRelevantForPickingEv
    void getColor()const; // _ZNK5Block8getColorEv
    void getColor(BlockSource &, BlockPos const&)const; // _ZNK5Block8getColorER11BlockSourceRK8BlockPos
    void getColorAtPos(BlockSource &, BlockPos const&)const; // _ZNK5Block13getColorAtPosER11BlockSourceRK8BlockPos
    void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const; // _ZNK5Block19getColorForParticleER11BlockSourceRK8BlockPosRKS_
    bool isSeasonTinted(BlockSource &, BlockPos const&)const; // _ZNK5Block14isSeasonTintedER11BlockSourceRK8BlockPos
    bool isSignalSource()const; // _ZNK5Block14isSignalSourceEv
    bool canBeOriginalSurface()const; // _ZNK5Block20canBeOriginalSurfaceEv
    void getDirectSignal(BlockSource &, BlockPos const&, int)const; // _ZNK5Block15getDirectSignalER11BlockSourceRK8BlockPosi
    void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK5Block12entityInsideER11BlockSourceRK8BlockPosR5Actor
    void getSilkTouchItemInstance()const; // _ZNK5Block24getSilkTouchItemInstanceEv
    void playerDestroy(Player &, BlockPos const&)const; // _ZNK5Block13playerDestroyER6PlayerRK8BlockPos
    bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK5Block10canSurviveER11BlockSourceRK8BlockPos
    void getExperienceDrop(Random &)const; // _ZNK5Block17getExperienceDropER6Random
    bool canBeBuiltOver(BlockSource &, BlockPos const&)const; // _ZNK5Block14canBeBuiltOverER11BlockSourceRK8BlockPos
    std::string getDescriptionId()const; // _ZNK5Block16getDescriptionIdB5cxx11Ev
    std::string buildDescriptionName()const; // _ZNK5Block20buildDescriptionNameB5cxx11Ev
    std::string buildDescriptionId()const; // _ZNK5Block18buildDescriptionIdB5cxx11Ev
    void getSerializationId()const; // _ZNK5Block18getSerializationIdEv
    void buildSerializationId(unsigned int); // _ZN5Block20buildSerializationIdEj
    void getRuntimeId()const; // _ZNK5Block12getRuntimeIdEv
    bool hasRuntimeId()const; // _ZNK5Block12hasRuntimeIdEv
    std::string toDebugString()const; // _ZNK5Block13toDebugStringB5cxx11Ev
    void setRuntimeId(unsigned int const&)const; // _ZNK5Block12setRuntimeIdERKj
    void triggerEvent(BlockSource &, BlockPos const&, int, int)const; // _ZNK5Block12triggerEventER11BlockSourceRK8BlockPosii
    void getAllowsRunes()const; // _ZNK5Block14getAllowsRunesEv
    void telemetryVariant(BlockSource &, BlockPos const&)const; // _ZNK5Block16telemetryVariantER11BlockSourceRK8BlockPos
    void getVariant()const; // _ZNK5Block10getVariantEv
    void getMappedFace(unsigned char)const; // _ZNK5Block13getMappedFaceEh
    void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK5Block10mayPlaceOnER11BlockSourceRK8BlockPos
    void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK5Block8mayPlaceER11BlockSourceRK8BlockPos
    void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK5Block8mayPlaceER11BlockSourceRK8BlockPosh
    void tryToPlace(BlockSource &, BlockPos const&, ActorBlockSyncMessage const*)const; // _ZNK5Block10tryToPlaceER11BlockSourceRK8BlockPosPK21ActorBlockSyncMessage
    bool breaksFallingBlocks()const; // _ZNK5Block19breaksFallingBlocksEv
    void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK5Block15neighborChangedER11BlockSourceRK8BlockPosS4_
    void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK5Block13getSecondPartER11BlockSourceRK8BlockPosRS2_
    void DEPRECATEDcallOnGraphicsModeChanged(bool, bool, bool); // _ZN5Block35DEPRECATEDcallOnGraphicsModeChangedEbbb
    void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK5Block15checkIsPathableER5ActorRK8BlockPosS4_
    void shouldDispense(BlockSource &, Container &)const; // _ZNK5Block14shouldDispenseER11BlockSourceR9Container
    void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK5Block8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    void onPlace(BlockSource &, BlockPos const&)const; // _ZNK5Block7onPlaceER11BlockSourceRK8BlockPos
    void onRemove(BlockSource &, BlockPos const&)const; // _ZNK5Block8onRemoveER11BlockSourceRK8BlockPos
    void onExploded(BlockSource &, BlockPos const&, Actor *)const; // _ZNK5Block10onExplodedER11BlockSourceRK8BlockPosP5Actor
    void onStepOn(Actor &, BlockPos const&)const; // _ZNK5Block8onStepOnER5ActorRK8BlockPos
    void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK5Block8onFallOnER11BlockSourceRK8BlockPosP5Actorf
    void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const; // _ZNK5Block15onProjectileHitER11BlockSourceRK8BlockPosRK5Actor
    void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK5Block15transformOnFallER11BlockSourceRK8BlockPosP5Actorf
    void movedByPiston(BlockSource &, BlockPos const&)const; // _ZNK5Block13movedByPistonER11BlockSourceRK8BlockPos
    void updateEntityAfterFallOn(Actor &)const; // _ZNK5Block23updateEntityAfterFallOnER5Actor
    void ignoreEntitiesOnPistonMove()const; // _ZNK5Block26ignoreEntitiesOnPistonMoveEv
//  void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK5Block12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    void mayConsumeFertilizer(BlockSource &)const; // _ZNK5Block20mayConsumeFertilizerER11BlockSource
    void getIconYOffset()const; // _ZNK5Block14getIconYOffsetEv
    bool isWaterBlocking()const; // _ZNK5Block15isWaterBlockingEv
    bool canBeSilkTouched()const; // _ZNK5Block16canBeSilkTouchedEv
    void getMobToSpawn(SpawnConditions const&, BlockSource &)const; // _ZNK5Block13getMobToSpawnERK15SpawnConditionsR11BlockSource
    bool isBounceBlock()const; // _ZNK5Block13isBounceBlockEv
    bool isAlphaTested()const; // _ZNK5Block13isAlphaTestedEv
    bool isSolidBlockingBlock()const; // _ZNK5Block20isSolidBlockingBlockEv
    bool isMotionBlockingBlock()const; // _ZNK5Block21isMotionBlockingBlockEv
    bool isSolidBlockingBlockAndNotSignalSource()const; // _ZNK5Block38isSolidBlockingBlockAndNotSignalSourceEv
    bool isEmpty()const; // _ZNK5Block7isEmptyEv
    bool isCropBlock()const; // _ZNK5Block11isCropBlockEv
    bool isStemBlock()const; // _ZNK5Block11isStemBlockEv
    bool isContainerBlock()const; // _ZNK5Block16isContainerBlockEv
    bool isCraftingBlock()const; // _ZNK5Block15isCraftingBlockEv
    bool isInteractiveBlock()const; // _ZNK5Block18isInteractiveBlockEv
    bool isHurtableBlock()const; // _ZNK5Block15isHurtableBlockEv
    bool isFenceBlock()const; // _ZNK5Block12isFenceBlockEv
    bool isFenceGateBlock()const; // _ZNK5Block16isFenceGateBlockEv
    bool isThinFenceBlock()const; // _ZNK5Block16isThinFenceBlockEv
    bool isWallBlock()const; // _ZNK5Block11isWallBlockEv
    bool isStairBlock()const; // _ZNK5Block12isStairBlockEv
    bool isDoorBlock()const; // _ZNK5Block11isDoorBlockEv
    bool isButtonBlock()const; // _ZNK5Block13isButtonBlockEv
    bool isSlabBlock()const; // _ZNK5Block11isSlabBlockEv
    bool isRailBlock()const; // _ZNK5Block11isRailBlockEv
    bool canHurtAndBreakItem()const; // _ZNK5Block19canHurtAndBreakItemEv
    void getBlockEntityType()const; // _ZNK5Block18getBlockEntityTypeEv
    bool hasBlockEntity()const; // _ZNK5Block14hasBlockEntityEv
    void getRenderLayer(BlockSource &, BlockPos const&)const; // _ZNK5Block14getRenderLayerER11BlockSourceRK8BlockPos
    void getExtraRenderLayers()const; // _ZNK5Block20getExtraRenderLayersEv
    void getThickness()const; // _ZNK5Block12getThicknessEv
    void getFlexibility(BlockSource &, BlockPos const&)const; // _ZNK5Block14getFlexibilityER11BlockSourceRK8BlockPos
    bool isObstructingChests(BlockSource &, BlockPos const&)const; // _ZNK5Block19isObstructingChestsER11BlockSourceRK8BlockPos
    void getVisualShapeInWorld(BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK5Block21getVisualShapeInWorldER11BlockSourceRK8BlockPosR4AABBb
    void getVisualShape(AABB &, bool)const; // _ZNK5Block14getVisualShapeER4AABBb
    void getUIShape(AABB &)const; // _ZNK5Block10getUIShapeER4AABB
    void getCollisionShape(AABB &, BlockSource &, BlockPos const&, Actor *)const; // _ZNK5Block17getCollisionShapeER4AABBR11BlockSourceRK8BlockPosP5Actor
    void calcGroundFriction(Mob &, BlockPos const&)const; // _ZNK5Block18calcGroundFrictionER3MobRK8BlockPos
    bool canHaveExtraData()const; // _ZNK5Block16canHaveExtraDataEv
    bool hasComparatorSignal()const; // _ZNK5Block19hasComparatorSignalEv
    void getComparatorSignal(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK5Block19getComparatorSignalER11BlockSourceRK8BlockPosh
    void shouldStopFalling(Actor &)const; // _ZNK5Block17shouldStopFallingER5Actor
    bool pushesUpFallingBlocks()const; // _ZNK5Block21pushesUpFallingBlocksEv
//  bool hasProperty(BlockProperty)const; //TODO: incomplete function definition // _ZNK5Block11hasPropertyE13BlockProperty
    void getProperties()const; // _ZNK5Block13getPropertiesEv
    void keepState(ItemState const&)const; // _ZNK5Block9keepStateERK9ItemState
    void copyState(Block const&, ItemState const&)const; // _ZNK5Block9copyStateERKS_RK9ItemState
    void getShadeBrightness()const; // _ZNK5Block18getShadeBrightnessEv
    void getDebugText(std::vector<std::string> &, BlockPos const&)const; // _ZNK5Block12getDebugTextERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EERK8BlockPos
    void getParticleQuantityScalar()const; // _ZNK5Block25getParticleQuantityScalarEv
    bool isStandingSign()const; // _ZNK5Block14isStandingSignEv
    bool dealsContactDamage(Actor const&, bool)const; // _ZNK5Block18dealsContactDamageERK5Actorb
    bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const; // _ZNK5Block6hasTagER11BlockSourceRK8BlockPosRKS_RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getPlacementFacingAll(Actor &, BlockPos const&, float); // _ZN5Block21getPlacementFacingAllER5ActorRK8BlockPosf
    void getPlacementFacingAllExceptAxisY(Actor &, BlockPos const&, float); // _ZN5Block32getPlacementFacingAllExceptAxisYER5ActorRK8BlockPosf
    bool isTrapdoor()const; // _ZNK5Block10isTrapdoorEv
    void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const; // _ZNK5Block30liquidCanFlowIntoFromDirectionEhRKSt8functionIFRKS_RK8BlockPosEES5_
    bool detachesOnPistonMove(BlockSource &, BlockPos const&)const; // _ZNK5Block20detachesOnPistonMoveER11BlockSourceRK8BlockPos
    void onMove(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK5Block6onMoveER11BlockSourceRK8BlockPosS4_
    void handleRain(BlockSource &, BlockPos const&, float)const; // _ZNK5Block10handleRainER11BlockSourceRK8BlockPosf
    void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK5Block22setupRedstoneComponentER11BlockSourceRK8BlockPos
    void getRedstoneProperty(BlockSource &, BlockPos const&)const; // _ZNK5Block19getRedstonePropertyER11BlockSourceRK8BlockPos
    void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK5Block16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    bool isValidAuxValue(int)const; // _ZNK5Block15isValidAuxValueEi
    bool canFillAtPos(BlockSource &, BlockPos const&)const; // _ZNK5Block12canFillAtPosER11BlockSourceRK8BlockPos
    void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK5Block17sanitizeFillBlockER11BlockSourceRK8BlockPosRKS_
    void onFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK5Block11onFillBlockER11BlockSourceRK8BlockPosRKS_
    void waterSpreadCausesSpawn()const; // _ZNK5Block22waterSpreadCausesSpawnEv
    void getStateMask(ItemState const&)const; // _ZNK5Block12getStateMaskERK9ItemState
    void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK5Block23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
};
