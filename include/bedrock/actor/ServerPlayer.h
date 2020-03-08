#pragma once

#include "../level/chunksource/ChunkSource"
#include "../container/manager/IContainerManager"
#include "../../unmapped/NetworkHandler"
#include "../util/Vec3"
#include "unmapped/ActorUniqueID"
#include "../../unmapped/ActiveTransfersManager"
#include "../item/ItemStack"
#include "../util/Tick"
#include "../../unmapped/Dimension"
#include "../../unmapped/NetworkIdentifier"
#include "../nbt/CompoundTag"
#include "../../unmapped/MobEffectInstance"
#include "../../unmapped/InventoryTransaction"
#include "../../mce/UUID"
#include "../../unmapped/Certificate"
#include "../text/TextObjectRoot"
#include "../network/packet/sender/PacketSender"
#include "../level/Level"
#include "../util/BlockPos"
#include "damagesource/ActorDamageSource"
#include "../network/packet/Packet"
#include "../../unmapped/VariantParameterList"
#include "../../unmapped/DataLoadHelper"
#include "../../unmapped/ComplexInventoryTransaction"


class ServerPlayer : Player {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual ServerPlayer::~ServerPlayer()
    virtual void normalTick();
    virtual bool isValidTarget(Actor *)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void setArmor(ArmorSlot, ItemStack const&);
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual bool canChangeDimensions()const;
    virtual void changeDimension(AutomaticID<Dimension, int>, bool);
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
    virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>);
    virtual void tickWorld(Tick const&);
    virtual void frameUpdate(FrameUpdateContextBase &);
    virtual void checkMovementStats(Vec3 const&);
    virtual void setPermissions(CommandPermissionLevel);
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
    virtual void setPlayerGameType(GameType);
    virtual void setContainerData(IContainerManager &, int, int);
    virtual void slotChanged(IContainerManager &, int, ItemStack const&, ItemStack const&, bool);
    virtual void refreshContainer(IContainerManager &);
    virtual void deleteContainerManager();
    virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&);
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
    virtual void reportMovementTelemetry(MovementEventType);

    ServerPlayer(Level &, PacketSender &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, GameType, NetworkIdentifier const&, unsigned char, std::function<void ()(ServerPlayer&)>, mce::UUID, std::string const&, std::unique_ptr<Certificate, std::default_delete<Certificate>>, int);
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
    void setInputMode(InputMode const&);
    void setPlayMode(ClientPlayMode const&);
    void checkCheating(Vec3 const&);
};
