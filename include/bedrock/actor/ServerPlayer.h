#pragma once

#include "../../mce/UUID.h"
#include "Player.h"
#include <vector>
#include <memory>
#include <string>
#include <functional>


class ServerPlayer : Player {

public:
    class NearbyActor;

//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12ServerPlayer20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~ServerPlayer(); // _ZN12ServerPlayerD2Ev
    virtual void normalTick(); // _ZN12ServerPlayer10normalTickEv
    virtual bool isValidTarget(Actor *)const; // _ZNK12ServerPlayer13isValidTargetEP5Actor
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN12ServerPlayer17handleEntityEventE10ActorEventi
//  virtual void setArmor(ArmorSlot, ItemStack const&); //TODO: incomplete function definition // _ZN12ServerPlayer8setArmorE9ArmorSlotRK9ItemStack
    virtual void load(CompoundTag const&, DataLoadHelper &); // _ZN12ServerPlayer4loadERK11CompoundTagR14DataLoadHelper
    virtual bool canChangeDimensions()const; // _ZNK12ServerPlayer19canChangeDimensionsEv
//  virtual void changeDimension(AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition // _ZN12ServerPlayer15changeDimensionE11AutomaticIDI9DimensioniEb
    virtual void getControllingPlayer()const; // _ZNK12ServerPlayer20getControllingPlayerEv
    virtual void checkFallDamage(float, bool); // _ZN12ServerPlayer15checkFallDamageEfb
    virtual void handleFallDistanceOnServer(float, bool); // _ZN12ServerPlayer26handleFallDistanceOnServerEfb
    virtual void onEffectAdded(MobEffectInstance &); // _ZN12ServerPlayer13onEffectAddedER17MobEffectInstance
    virtual void onEffectUpdated(MobEffectInstance const&); // _ZN12ServerPlayer15onEffectUpdatedERK17MobEffectInstance
    virtual void onEffectRemoved(MobEffectInstance &); // _ZN12ServerPlayer15onEffectRemovedER17MobEffectInstance
    virtual void die(ActorDamageSource const&); // _ZN12ServerPlayer3dieERK17ActorDamageSource
    virtual void knockback(Actor *, int, float, float, float, float, float); // _ZN12ServerPlayer9knockbackEP5Actorifffff
    virtual void aiStep(); // _ZN12ServerPlayer6aiStepEv
    virtual void hurtArmor(int); // _ZN12ServerPlayer9hurtArmorEi
    virtual void sendInventory(bool); // _ZN12ServerPlayer13sendInventoryEb
    virtual void prepareRegion(ChunkSource &); // _ZN12ServerPlayer13prepareRegionER11ChunkSource
    virtual void destroyRegion(); // _ZN12ServerPlayer13destroyRegionEv
    virtual void suspendRegion(); // _ZN12ServerPlayer13suspendRegionEv
//  virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN12ServerPlayer26changeDimensionWithCreditsE11AutomaticIDI9DimensioniE
    virtual void tickWorld(Tick const&); // _ZN12ServerPlayer9tickWorldERK4Tick
//  virtual void frameUpdate(FrameUpdateContextBase &); //TODO: incomplete function definition // _ZN12ServerPlayer11frameUpdateER22FrameUpdateContextBase
    virtual void checkMovementStats(Vec3 const&); // _ZN12ServerPlayer18checkMovementStatsERK4Vec3
//  virtual void setPermissions(CommandPermissionLevel); //TODO: incomplete function definition // _ZN12ServerPlayer14setPermissionsE22CommandPermissionLevel
    virtual void openContainer(BlockPos const&); // _ZN12ServerPlayer13openContainerERK8BlockPos
    virtual void openContainer(ActorUniqueID const&); // _ZN12ServerPlayer13openContainerERK13ActorUniqueID
    virtual void openFurnace(BlockPos const&); // _ZN12ServerPlayer11openFurnaceERK8BlockPos
    virtual void openBlastFurnace(BlockPos const&); // _ZN12ServerPlayer16openBlastFurnaceERK8BlockPos
    virtual void openSmoker(BlockPos const&); // _ZN12ServerPlayer10openSmokerERK8BlockPos
    virtual void openEnchanter(BlockPos const&); // _ZN12ServerPlayer13openEnchanterERK8BlockPos
    virtual void openAnvil(BlockPos const&); // _ZN12ServerPlayer9openAnvilERK8BlockPos
    virtual void openGrindstone(BlockPos const&); // _ZN12ServerPlayer14openGrindstoneERK8BlockPos
    virtual void openBrewingStand(BlockPos const&); // _ZN12ServerPlayer16openBrewingStandERK8BlockPos
    virtual void openHopper(BlockPos const&); // _ZN12ServerPlayer10openHopperERK8BlockPos
    virtual void openHopper(ActorUniqueID const&); // _ZN12ServerPlayer10openHopperERK13ActorUniqueID
    virtual void openDispenser(BlockPos const&, bool); // _ZN12ServerPlayer13openDispenserERK8BlockPosb
    virtual void openBeacon(BlockPos const&); // _ZN12ServerPlayer10openBeaconERK8BlockPos
    virtual void openPortfolio(); // _ZN12ServerPlayer13openPortfolioEv
    virtual void openCommandBlock(BlockPos const&); // _ZN12ServerPlayer16openCommandBlockERK8BlockPos
    virtual void openCommandBlockMinecart(ActorUniqueID const&); // _ZN12ServerPlayer24openCommandBlockMinecartERK13ActorUniqueID
    virtual void openHorseInventory(ActorUniqueID const&); // _ZN12ServerPlayer18openHorseInventoryERK13ActorUniqueID
    virtual void openTrading(ActorUniqueID const&, bool); // _ZN12ServerPlayer11openTradingERK13ActorUniqueIDb
    virtual void openNpcInteractScreen(Actor &); // _ZN12ServerPlayer21openNpcInteractScreenER5Actor
    virtual void openInventory(); // _ZN12ServerPlayer13openInventoryEv
    virtual void openStructureEditor(BlockPos const&); // _ZN12ServerPlayer19openStructureEditorERK8BlockPos
    virtual void openLabTable(BlockPos const&); // _ZN12ServerPlayer12openLabTableERK8BlockPos
    virtual void openElementConstructor(BlockPos const&); // _ZN12ServerPlayer22openElementConstructorERK8BlockPos
    virtual void openCompoundCreator(BlockPos const&); // _ZN12ServerPlayer19openCompoundCreatorERK8BlockPos
    virtual void openMaterialReducer(BlockPos const&); // _ZN12ServerPlayer19openMaterialReducerERK8BlockPos
    virtual void displayLocalizableMessage(std::string const&, std::vector<std::string> const&); // _ZN12ServerPlayer25displayLocalizableMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&); // _ZN12ServerPlayer24displayTextObjectMessageERK14TextObjectRootRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&); // _ZN12ServerPlayer21displayWhisperMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_
    virtual void stopSleepInBed(bool, bool); // _ZN12ServerPlayer14stopSleepInBedEbb
    virtual bool isHostingPlayer()const; // _ZNK12ServerPlayer15isHostingPlayerEv
    virtual bool isLoading()const; // _ZNK12ServerPlayer9isLoadingEv
    virtual bool isPlayerInitialized()const; // _ZNK12ServerPlayer19isPlayerInitializedEv
//  virtual void setPlayerGameType(GameType); //TODO: incomplete function definition // _ZN12ServerPlayer17setPlayerGameTypeE8GameType
    virtual void setContainerData(IContainerManager &, int, int); // _ZN12ServerPlayer16setContainerDataER17IContainerManagerii
    virtual void slotChanged(IContainerManager &, int, ItemStack const&, ItemStack const&, bool); // _ZN12ServerPlayer11slotChangedER17IContainerManageriRK9ItemStackS4_b
    virtual void refreshContainer(IContainerManager &); // _ZN12ServerPlayer16refreshContainerER17IContainerManager
    virtual void deleteContainerManager(); // _ZN12ServerPlayer22deleteContainerManagerEv
//  virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&); //TODO: incomplete function definition // _ZN12ServerPlayer18isPositionRelevantE11AutomaticIDI9DimensioniERK8BlockPos
    virtual bool isEntityRelevant(Actor const&); // _ZN12ServerPlayer16isEntityRelevantERK5Actor
    virtual bool isTeacher()const; // _ZNK12ServerPlayer9isTeacherEv
    virtual void onSuspension(); // _ZN12ServerPlayer12onSuspensionEv
    virtual void onLinkedSlotsChanged(); // _ZN12ServerPlayer20onLinkedSlotsChangedEv
    virtual void sendInventoryTransaction(InventoryTransaction const&)const; // _ZNK12ServerPlayer24sendInventoryTransactionERK20InventoryTransaction
    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>)const; // _ZNK12ServerPlayer31sendComplexInventoryTransactionESt10unique_ptrI27ComplexInventoryTransactionSt14default_deleteIS1_EE
    virtual void sendNetworkPacket(Packet &)const; // _ZNK12ServerPlayer17sendNetworkPacketER6Packet
    virtual void getPlayerEventCoordinator(); // _ZN12ServerPlayer25getPlayerEventCoordinatorEv
    virtual void getMoveInputHandler(); // _ZN12ServerPlayer19getMoveInputHandlerEv
    virtual void getInputMode()const; // _ZNK12ServerPlayer12getInputModeEv
    virtual void getPlayMode()const; // _ZNK12ServerPlayer11getPlayModeEv
//  virtual void reportMovementTelemetry(MovementEventType); //TODO: incomplete function definition // _ZN12ServerPlayer23reportMovementTelemetryE17MovementEventType
//  ServerPlayer(Level &, PacketSender &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, GameType, NetworkIdentifier const&, unsigned char, std::function<void (ServerPlayer &)>, mce::UUID, std::string const&, std::unique_ptr<Certificate>, int); //TODO: incomplete function definition // _ZN12ServerPlayerC2ER5LevelR12PacketSenderR14NetworkHandlerRN15ClientBlobCache6Server22ActiveTransfersManagerE8GameTypeRK17NetworkIdentifierhSt8functionIFvRS_EEN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI11CertificateSt14default_deleteIST_EEi
    void updateChunkPublisherView(Vec3 const&, float); // _ZN12ServerPlayer24updateChunkPublisherViewERK4Vec3f
    void _updateNearbyActors(); // _ZN12ServerPlayer19_updateNearbyActorsEv
    void _getReadOnlyChunkCount(); // _ZN12ServerPlayer22_getReadOnlyChunkCountEv
    void recoverR5LostInventoryAndXP(); // _ZN12ServerPlayer27recoverR5LostInventoryAndXPEv
    void _getServerPlayerEventCoordinator(); // _ZN12ServerPlayer32_getServerPlayerEventCoordinatorEv
    void getInventoryMenu(); // _ZN12ServerPlayer16getInventoryMenuEv
    void _nextContainerCounter(); // _ZN12ServerPlayer21_nextContainerCounterEv
    void _setContainerManager(std::shared_ptr<IContainerManager>); // _ZN12ServerPlayer20_setContainerManagerESt10shared_ptrI17IContainerManagerE
    void doDeleteContainerManager(); // _ZN12ServerPlayer24doDeleteContainerManagerEv
    void selectItem(ItemStack const&, int const&); // _ZN12ServerPlayer10selectItemERK9ItemStackRKi
    void findClientChunkRadius(unsigned int)const; // _ZNK12ServerPlayer21findClientChunkRadiusEj
    void setClientChunkRadius(unsigned int); // _ZN12ServerPlayer20setClientChunkRadiusEj
    void disconnect(); // _ZN12ServerPlayer10disconnectEv
    void setPlayerInput(float, float, bool, bool); // _ZN12ServerPlayer14setPlayerInputEffbb
    void sendMobEffectPackets(); // _ZN12ServerPlayer20sendMobEffectPacketsEv
    void _getViewDistanceDeterminismBufferRadius()const; // _ZNK12ServerPlayer39_getViewDistanceDeterminismBufferRadiusEv
    void _scanForNearbyActors(); // _ZN12ServerPlayer20_scanForNearbyActorsEv
    void _removeNearbyEntities(); // _ZN12ServerPlayer21_removeNearbyEntitiesEv
    void setTeacher(); // _ZN12ServerPlayer10setTeacherEv
    void setLocalPlayerAsInitialized(); // _ZN12ServerPlayer27setLocalPlayerAsInitializedEv
    void setLostDataTag(std::unique_ptr<CompoundTag>); // _ZN12ServerPlayer14setLostDataTagESt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void getServerMoveInputHandler(); // _ZN12ServerPlayer25getServerMoveInputHandlerEv
//  void setInputMode(InputMode const&); //TODO: incomplete function definition // _ZN12ServerPlayer12setInputModeERK9InputMode
//  void setPlayMode(ClientPlayMode const&); //TODO: incomplete function definition // _ZN12ServerPlayer11setPlayModeERK14ClientPlayMode
    void checkCheating(Vec3 const&); // _ZN12ServerPlayer13checkCheatingERK4Vec3
    class NearbyActor {

    public:
        NearbyActor(); // _ZN12ServerPlayer11NearbyActorC2Ev
    };
};
