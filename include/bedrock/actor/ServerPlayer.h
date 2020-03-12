#pragma once

#include "../../mce/UUID.h"
#include "Player.h"
#include <memory>
#include <vector>
#include <string>
#include <functional>


class ServerPlayer : Player {

public:
    class NearbyActor;

    virtual void onEffectUpdated(MobEffectInstance const&);
    virtual void aiStep();
    virtual void slotChanged(IContainerManager &, int, ItemStack const&, ItemStack const&, bool);
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
    ~ServerPlayer();
    virtual void openCompoundCreator(BlockPos const&);
    virtual void handleFallDistanceOnServer(float, bool);
    virtual bool isValidTarget(Actor *)const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void sendInventoryTransaction(InventoryTransaction const&)const;
    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>)const;
    virtual void openEnchanter(BlockPos const&);
//  virtual void setPermissions(CommandPermissionLevel); //TODO: incomplete function definition
//  virtual void frameUpdate(FrameUpdateContextBase &); //TODO: incomplete function definition
    virtual void onSuspension();
    virtual void onEffectRemoved(MobEffectInstance &);
    virtual void hurtArmor(int);
    virtual void openInventory();
    virtual void sendInventory(bool);
    virtual bool isPlayerInitialized()const;
    virtual void destroyRegion();
    virtual bool isLoading()const;
    virtual void openDispenser(BlockPos const&, bool);
    virtual bool isEntityRelevant(Actor const&);
    virtual void openContainer(BlockPos const&);
    virtual void openCommandBlockMinecart(ActorUniqueID const&);
//  virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&); //TODO: incomplete function definition
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void sendNetworkPacket(Packet &)const;
//  virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual void openStructureEditor(BlockPos const&);
    virtual void suspendRegion();
    virtual void openBeacon(BlockPos const&);
    virtual void tickWorld(Tick const&);
    virtual void openLabTable(BlockPos const&);
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void openBlastFurnace(BlockPos const&);
    virtual void getInputMode()const;
    virtual void openPortfolio();
    virtual bool canChangeDimensions()const;
//  virtual void setArmor(ArmorSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void onLinkedSlotsChanged();
    virtual void load(CompoundTag const&, DataLoadHelper &);
//  virtual void changeDimension(AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition
    virtual void prepareRegion(ChunkSource &);
    virtual void deleteContainerManager();
//  virtual void setPlayerGameType(GameType); //TODO: incomplete function definition
    virtual void displayLocalizableMessage(std::string const&, std::vector<std::string> const&);
    virtual bool isHostingPlayer()const;
    virtual void setContainerData(IContainerManager &, int, int);
    virtual void openMaterialReducer(BlockPos const&);
    virtual bool isTeacher()const;
    virtual void openFurnace(BlockPos const&);
    virtual void openHopper(ActorUniqueID const&);
    virtual void openSmoker(BlockPos const&);
    virtual void refreshContainer(IContainerManager &);
    virtual void getMoveInputHandler();
    virtual void openBrewingStand(BlockPos const&);
    virtual void openGrindstone(BlockPos const&);
    virtual void openTrading(ActorUniqueID const&, bool);
    virtual void getPlayerEventCoordinator();
//  virtual void reportMovementTelemetry(MovementEventType); //TODO: incomplete function definition
    virtual void openAnvil(BlockPos const&);
    virtual void checkFallDamage(float, bool);
    virtual void openCommandBlock(BlockPos const&);
    virtual void getControllingPlayer()const;
    virtual void openHorseInventory(ActorUniqueID const&);
    virtual void openElementConstructor(BlockPos const&);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void checkMovementStats(Vec3 const&);
    virtual void stopSleepInBed(bool, bool);
    virtual void getPlayMode()const;
    virtual void normalTick();
    virtual void openNpcInteractScreen(Actor &);
    virtual void openContainer(ActorUniqueID const&);
    virtual void die(ActorDamageSource const&);
    virtual void openHopper(BlockPos const&);
    virtual void onEffectAdded(MobEffectInstance &);
    void _updateNearbyActors();
    void sendMobEffectPackets();
    void setLocalPlayerAsInitialized();
//  void setPlayMode(ClientPlayMode const&); //TODO: incomplete function definition
    void recoverR5LostInventoryAndXP();
    void doDeleteContainerManager();
//  void setInputMode(InputMode const&); //TODO: incomplete function definition
    void setPlayerInput(float, float, bool, bool);
    void _removeNearbyEntities();
    void _scanForNearbyActors();
    void setTeacher();
    void setLostDataTag(std::unique_ptr<CompoundTag>);
//  ServerPlayer(Level &, PacketSender &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, GameType, NetworkIdentifier const&, unsigned char, std::function<void (ServerPlayer &)>, mce::UUID, std::string const&, std::unique_ptr<Certificate>, int); //TODO: incomplete function definition
    void updateChunkPublisherView(Vec3 const&, float);
    void _getServerPlayerEventCoordinator();
    void selectItem(ItemStack const&, int const&);
    void disconnect();
    void setClientChunkRadius(unsigned int);
    void getInventoryMenu();
    void findClientChunkRadius(unsigned int)const;
    void getServerMoveInputHandler();
    void _nextContainerCounter();
    void checkCheating(Vec3 const&);
    void _setContainerManager(std::shared_ptr<IContainerManager>);
    void _getReadOnlyChunkCount();
    void _getViewDistanceDeterminismBufferRadius()const;
    class NearbyActor {

    public:
        NearbyActor();
    };
};
