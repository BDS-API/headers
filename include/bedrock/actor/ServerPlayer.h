#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "../util/BlockPos.h"
#include "../../unmapped/ComplexInventoryTransaction.h"
#include <memory>
#include "../../unmapped/InventoryTransaction.h"
#include "../../unmapped/ActiveTransfersManager.h"
#include "../../unmapped/DataLoadHelper.h"
#include "../level/chunksource/ChunkSource.h"
#include <string>
#include "../container/manager/IContainerManager.h"
#include <functional>
#include "../level/Level.h"
#include "../item/ItemStack.h"
#include "Player.h"
#include "../../mce/UUID.h"
#include "../../unmapped/MobEffectInstance.h"
#include "../util/Vec3.h"
#include "../../unmapped/NetworkHandler.h"
#include <vector>
#include "Actor.h"
#include "../../unmapped/Dimension.h"
#include "../util/Tick.h"
#include "unmapped/ActorUniqueID.h"
#include "../nbt/CompoundTag.h"
#include "../network/packet/Packet.h"
#include "../text/TextObjectRoot.h"
#include "../network/packet/sender/PacketSender.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/Certificate.h"
#include "../../unmapped/NetworkIdentifier.h"


class ServerPlayer : Player {

public:
    class NearbyActor;

    virtual void openDispenser(BlockPos const&, bool);
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
//  virtual void changeDimension(AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition
    ~ServerPlayer();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>)const;
//  virtual void reportMovementTelemetry(MovementEventType); //TODO: incomplete function definition
    virtual void prepareRegion(ChunkSource &);
    virtual void openCommandBlock(BlockPos const&);
    virtual void sendInventory(bool);
    virtual void openSmoker(BlockPos const&);
    virtual void openMaterialReducer(BlockPos const&);
    virtual void openEnchanter(BlockPos const&);
    virtual void openContainer(ActorUniqueID const&);
    virtual void onLinkedSlotsChanged();
//  virtual void setPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    virtual bool isPlayerInitialized()const;
    virtual void openCommandBlockMinecart(ActorUniqueID const&);
    virtual void suspendRegion();
    virtual bool isEntityRelevant(Actor const&);
    virtual void openFurnace(BlockPos const&);
//  virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&); //TODO: incomplete function definition
    virtual void setContainerData(IContainerManager &, int, int);
    virtual void openPortfolio();
    virtual bool isLoading()const;
    virtual void normalTick();
    virtual void checkFallDamage(float, bool);
    virtual void stopSleepInBed(bool, bool);
    virtual void openBeacon(BlockPos const&);
//  virtual void setPlayerGameType(GameType); //TODO: incomplete function definition
    virtual void openInventory();
    virtual void handleFallDistanceOnServer(float, bool);
    virtual bool isHostingPlayer()const;
    virtual void openCompoundCreator(BlockPos const&);
    virtual void hurtArmor(int);
    virtual void openNpcInteractScreen(Actor &);
    virtual void openStructureEditor(BlockPos const&);
    virtual void onEffectAdded(MobEffectInstance &);
    virtual void openBrewingStand(BlockPos const&);
    virtual void checkMovementStats(Vec3 const&);
    virtual void onEffectRemoved(MobEffectInstance &);
    virtual void getPlayerEventCoordinator();
//  virtual void frameUpdate(FrameUpdateContextBase &); //TODO: incomplete function definition
    virtual bool canChangeDimensions()const;
    virtual void openHopper(ActorUniqueID const&);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void sendInventoryTransaction(InventoryTransaction const&)const;
    virtual void getControllingPlayer()const;
    virtual bool isTeacher()const;
    virtual bool isValidTarget(Actor *)const;
//  virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual void die(ActorDamageSource const&);
    virtual void openGrindstone(BlockPos const&);
    virtual void openBlastFurnace(BlockPos const&);
    virtual void openAnvil(BlockPos const&);
    virtual void displayLocalizableMessage(std::string const&, std::vector<std::string> const&);
    virtual void openLabTable(BlockPos const&);
    virtual void onSuspension();
    virtual void openElementConstructor(BlockPos const&);
    virtual void deleteContainerManager();
    virtual void openHopper(BlockPos const&);
    virtual void getPlayMode()const;
    virtual void aiStep();
//  virtual void setArmor(ArmorSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void slotChanged(IContainerManager &, int, ItemStack const&, ItemStack const&, bool);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void openContainer(BlockPos const&);
    virtual void openHorseInventory(ActorUniqueID const&);
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void sendNetworkPacket(Packet &)const;
    virtual void destroyRegion();
    virtual void refreshContainer(IContainerManager &);
    virtual void onEffectUpdated(MobEffectInstance const&);
    virtual void getMoveInputHandler();
    virtual void openTrading(ActorUniqueID const&, bool);
    virtual void getInputMode()const;
    virtual void tickWorld(Tick const&);
    void setLostDataTag(std::unique_ptr<CompoundTag>);
//  ServerPlayer(Level &, PacketSender &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, GameType, NetworkIdentifier const&, unsigned char, std::function<void (ServerPlayer &)>, mce::UUID, std::string const&, std::unique_ptr<Certificate>, int); //TODO: incomplete function definition
    void _setContainerManager(std::shared_ptr<IContainerManager>);
    void doDeleteContainerManager();
    void getServerMoveInputHandler();
    void _getServerPlayerEventCoordinator();
    void selectItem(ItemStack const&, int const&);
    void disconnect();
    void checkCheating(Vec3 const&);
    void sendMobEffectPackets();
    void setPlayerInput(float, float, bool, bool);
    void _removeNearbyEntities();
    void getInventoryMenu();
    void setClientChunkRadius(unsigned int);
    void _getReadOnlyChunkCount();
    void _nextContainerCounter();
    void updateChunkPublisherView(Vec3 const&, float);
    void _updateNearbyActors();
//  void setInputMode(InputMode const&); //TODO: incomplete function definition
    void setTeacher();
    void findClientChunkRadius(unsigned int)const;
//  void setPlayMode(ClientPlayMode const&); //TODO: incomplete function definition
    void setLocalPlayerAsInitialized();
    void _getViewDistanceDeterminismBufferRadius()const;
    void recoverR5LostInventoryAndXP();
    void _scanForNearbyActors();
    class NearbyActor {

    public:
        NearbyActor();
    };
};
