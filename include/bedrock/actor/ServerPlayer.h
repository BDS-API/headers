#pragma once

#include "../../unmapped/Dimension.h"
#include "../item/ItemStack.h"
#include "../network/packet/Packet.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "../../unmapped/Certificate.h"
#include <functional>
#include "../../unmapped/NetworkIdentifier.h"
#include "./Actor.h"
#include "../../unmapped/InventoryTransaction.h"
#include "../network/packet/sender/PacketSender.h"
#include "../../unmapped/MobEffectInstance.h"
#include "./ServerPlayer.h"
#include "../util/BlockPos.h"
#include "../../unmapped/NetworkHandler.h"
#include "../container/manager/IContainerManager.h"
#include "../../unmapped/DataLoadHelper.h"
#include "../nbt/CompoundTag.h"
#include "../../mce/UUID.h"
#include "../text/TextObjectRoot.h"
#include <memory>
#include "unmapped/ActorUniqueID.h"
#include "../../unmapped/ComplexInventoryTransaction.h"
#include "../util/Tick.h"
#include "../../unmapped/VariantParameterList.h"
#include "../level/Level.h"
#include "../../unmapped/ActiveTransfersManager.h"
#include <vector>
#include "../level/chunksource/ChunkSource.h"
#include "./Player.h"
#include <string>


class ServerPlayer : Player {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~ServerPlayer();
    virtual void normalTick();
    virtual bool isValidTarget(Actor *)const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
//  virtual void setArmor(ArmorSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual bool canChangeDimensions()const;
//  virtual void changeDimension(AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition
    virtual void getControllingPlayer()const;
    virtual void checkFallDamage(float, bool);
    virtual void handleFallDistanceOnServer(float, bool);
    virtual void onEffectAdded(MobEffectInstance &);
    virtual void onEffectUpdated(MobEffectInstance const&);
    virtual void onEffectRemoved(MobEffectInstance &);
    virtual void die(ActorDamageSource const&);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void aiStep();
    virtual void hurtArmor(int);
    virtual void sendInventory(bool);
    virtual void prepareRegion(ChunkSource &);
    virtual void destroyRegion();
    virtual void suspendRegion();
//  virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual void tickWorld(Tick const&);
//  virtual void frameUpdate(FrameUpdateContextBase &); //TODO: incomplete function definition
    virtual void checkMovementStats(Vec3 const&);
//  virtual void setPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    virtual void openContainer(BlockPos const&);
    virtual void openContainer(ActorUniqueID const&);
    virtual void openFurnace(BlockPos const&);
    virtual void openBlastFurnace(BlockPos const&);
    virtual void openSmoker(BlockPos const&);
    virtual void openEnchanter(BlockPos const&);
    virtual void openAnvil(BlockPos const&);
    virtual void openGrindstone(BlockPos const&);
    virtual void openBrewingStand(BlockPos const&);
    virtual void openHopper(BlockPos const&);
    virtual void openHopper(ActorUniqueID const&);
    virtual void openDispenser(BlockPos const&, bool);
    virtual void openBeacon(BlockPos const&);
    virtual void openPortfolio();
    virtual void openCommandBlock(BlockPos const&);
    virtual void openCommandBlockMinecart(ActorUniqueID const&);
    virtual void openHorseInventory(ActorUniqueID const&);
    virtual void openTrading(ActorUniqueID const&, bool);
    virtual void openNpcInteractScreen(Actor &);
    virtual void openInventory();
    virtual void openStructureEditor(BlockPos const&);
    virtual void openLabTable(BlockPos const&);
    virtual void openElementConstructor(BlockPos const&);
    virtual void openCompoundCreator(BlockPos const&);
    virtual void openMaterialReducer(BlockPos const&);
    virtual void displayLocalizableMessage(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void stopSleepInBed(bool, bool);
    virtual bool isHostingPlayer()const;
    virtual bool isLoading()const;
    virtual bool isPlayerInitialized()const;
//  virtual void setPlayerGameType(GameType); //TODO: incomplete function definition
    virtual void setContainerData(IContainerManager &, int, int);
    virtual void slotChanged(IContainerManager &, int, ItemStack const&, ItemStack const&, bool);
    virtual void refreshContainer(IContainerManager &);
    virtual void deleteContainerManager();
//  virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&); //TODO: incomplete function definition
    virtual bool isEntityRelevant(Actor const&);
    virtual bool isTeacher()const;
    virtual void onSuspension();
    virtual void onLinkedSlotsChanged();
    virtual void sendInventoryTransaction(InventoryTransaction const&)const;
    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction, std::default_delete<ComplexInventoryTransaction>>)const;
    virtual void sendNetworkPacket(Packet &)const;
    virtual void getPlayerEventCoordinator();
    virtual void getMoveInputHandler();
    virtual void getInputMode()const;
    virtual void getPlayMode()const;
//  virtual void reportMovementTelemetry(MovementEventType); //TODO: incomplete function definition

//  ServerPlayer(Level &, PacketSender &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, GameType, NetworkIdentifier const&, unsigned char, std::function<void (ServerPlayer &)>, mce::UUID, std::string const&, std::unique_ptr<Certificate, std::default_delete<Certificate>>, int); //TODO: incomplete function definition
    void updateChunkPublisherView(Vec3 const&, float);
    void _updateNearbyActors();
    void _getReadOnlyChunkCount();
    void recoverR5LostInventoryAndXP();
    void _getServerPlayerEventCoordinator();
    void getInventoryMenu();
    void _nextContainerCounter();
    void _setContainerManager(std::shared_ptr<IContainerManager>);
    void doDeleteContainerManager();
    void selectItem(ItemStack const&, int const&);
    void findClientChunkRadius(unsigned int)const;
    void setClientChunkRadius(unsigned int);
    void disconnect();
    void setPlayerInput(float, float, bool, bool);
    void sendMobEffectPackets();
    void _getViewDistanceDeterminismBufferRadius()const;
    void _scanForNearbyActors();
    void _removeNearbyEntities();
    void setTeacher();
    void setLocalPlayerAsInitialized();
    void setLostDataTag(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void getServerMoveInputHandler();
//  void setInputMode(InputMode const&); //TODO: incomplete function definition
//  void setPlayMode(ClientPlayMode const&); //TODO: incomplete function definition
    void checkCheating(Vec3 const&);
};
