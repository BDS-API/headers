#pragma once

#include "../level/LevelListener.h"
#include "../actor/unmapped/ActorUniqueID.h"
#include "packet/EmotePacket.h"
#include "packet/ShowCreditsPacket.h"
#include "../../unmapped/GameCallbacks.h"
#include "../actor/Player.h"
#include "../metrics/ServerMetrics.h"
#include "packet/ActorFallPacket.h"
#include "../actor/ServerPlayer.h"
#include "packet/ItemFrameDropItemPacket.h"
#include "../util/Whitelist.h"
#include "../../unmapped/PrivateKeyManager.h"
#include "packet/SetDifficultyPacket.h"
#include "packet/CommandBlockUpdatePacket.h"
#include "packet/BlockActorDataPacket.h"
#include "../../unmapped/SubClientConnectionRequest.h"
#include "packet/LabTablePacket.h"
#include <memory>
#include "../IMinecraftApp.h"
#include "packet/SimpleEventPacket.h"
#include "packet/SpawnExperienceOrbPacket.h"
#include "packet/LevelSoundEventPacketV1.h"
#include <unordered_map>
#include "packet/ActorPickRequestPacket.h"
#include "../../unmapped/MultiplayerServiceObserver.h"
#include "packet/NpcRequestPacket.h"
#include "../../unmapped/Certificate.h"
#include "packet/SetPlayerGameTypePacket.h"
#include "packet/PlayerHotbarPacket.h"
#include "packet/MultiplayerSettingsPacket.h"
#include "packet/StructureTemplateDataRequestPacket.h"
#include "packet/SetDefaultGameTypePacket.h"
#include "packet/LevelSoundEventPacket.h"
#include "../../unmapped/ConnectionRequest.h"
#include "packet/BossEventPacket.h"
#include "../../unmapped/NetworkHandler.h"
#include "packet/InventoryTransactionPacket.h"
#include "packet/CommandRequestPacket.h"
#include "packet/InteractPacket.h"
#include "packet/LevelSoundEventPacketV2.h"
#include "packet/AdventureSettingsPacket.h"
#include "../../unmapped/PermissionsFile.h"
#include "packet/RiderJumpPacket.h"
#include <string>
#include "packet/PlayerInputPacket.h"
#include "packet/ClientCacheBlobStatusPacket.h"
#include "../../unmapped/PackIdVersion.h"
#include "packet/RequestChunkRadiusPacket.h"
#include <functional>
#include "../../unmapped/AutomationClient.h"
#include "packet/SetLocalPlayerAsInitializedPacket.h"
#include "packet/SubClientLoginPacket.h"
#include "packet/CompletedUsingItemPacket.h"
#include "packet/TickSyncPacket.h"
#include "packet/ActorEventPacket.h"
#include "packet/PlayerActionPacket.h"
#include "packet/ResourcePackChunkRequestPacket.h"
#include "packet/MoveActorAbsolutePacket.h"
#include "packet/ContainerClosePacket.h"
#include <utility>
#include "../../mce/UUID.h"
#include "packet/BlockPickRequestPacket.h"
#include "packet/RespawnPacket.h"
#include "packet/PurchaseReceiptPacket.h"
#include "packet/ResourcePackClientResponsePacket.h"
#include "../actor/unmapped/ActorRuntimeID.h"
#include "../level/Level.h"
#include <vector>
#include "packet/PhotoTransferPacket.h"
#include "packet/CraftingEventPacket.h"
#include "packet/AnvilDamagePacket.h"
#include "packet/LoginPacket.h"
#include "../util/Vec3.h"
#include "../Scheduler.h"
#include "packet/PlayerAuthInputPacket.h"
#include "packet/ClientToServerHandshakePacket.h"
#include "packet/EntityClientPacket.h"
#include "../../unmapped/NetworkIdentifier.h"
#include "packet/MobEquipmentPacket.h"
#include "packet/LecternUpdatePacket.h"
#include "../../unmapped/ServerLocator.h"
#include "packet/MapInfoRequestPacket.h"
#include "packet/AnimatePacket.h"
#include "packet/MovePlayerPacket.h"
#include "packet/StructureBlockUpdatePacket.h"
#include "packet/MapCreateLockedCopyPacket.h"
#include "packet/TextPacket.h"
#include "packet/PlayerSkinPacket.h"
#include "packet/MobArmorEquipmentPacket.h"
#include "./NetEventCallback.h"
#include "packet/ModalFormResponsePacket.h"
#include "packet/BookEditPacket.h"
#include "../../unmapped/MinecraftCommands.h"
#include "../../unmapped/XboxLiveUserObserver.h"
#include "packet/SettingsCommandPacket.h"
#include "packet/ClientCacheStatusPacket.h"
#include "packet/NetworkStackLatencyPacket.h"
#include "packet/sender/PacketSender.h"
#include "packet/DisconnectPacket.h"


class ServerNetworkHandler : NetEventCallback, LevelListener, Social::MultiplayerServiceObserver, Social::XboxLiveUserObserver {

public:
    virtual void onPlayerReady(Player &);
    virtual ~ServerNetworkHandler();
    virtual void onTick();
    virtual void onDisconnect(NetworkIdentifier const&, std::string const&, bool, std::string const&);
//  virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds); //TODO: incomplete function definition
//  virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>); //TODO: incomplete function definition
    virtual void onTransferRequest(NetworkIdentifier const&, std::string const&, int);
    virtual void handle(NetworkIdentifier const&, DisconnectPacket const&);
    virtual void handle(NetworkIdentifier const&, EmotePacket const&);
    virtual void handle(NetworkIdentifier const&, LoginPacket const&);
    virtual void handle(NetworkIdentifier const&, SubClientLoginPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientToServerHandshakePacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackClientResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, TextPacket const&);
    virtual void handle(NetworkIdentifier const&, MoveActorAbsolutePacket const&);
    virtual void handle(NetworkIdentifier const&, MovePlayerPacket const&);
    virtual void handle(NetworkIdentifier const&, RiderJumpPacket const&);
    virtual void handle(NetworkIdentifier const&, SetPlayerGameTypePacket const&);
    virtual void handle(NetworkIdentifier const&, SetDefaultGameTypePacket const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacket const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV1 const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV2 const&);
    virtual void handle(NetworkIdentifier const&, BlockPickRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorPickRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorEventPacket const&);
    virtual void handle(NetworkIdentifier const&, MobEquipmentPacket const&);
    virtual void handle(NetworkIdentifier const&, MobArmorEquipmentPacket const&);
    virtual void handle(NetworkIdentifier const&, InteractPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerActionPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorFallPacket const&);
    virtual void handle(NetworkIdentifier const&, ItemFrameDropItemPacket const&);
    virtual void handle(NetworkIdentifier const&, ContainerClosePacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerHotbarPacket const&);
    virtual void handle(NetworkIdentifier const&, CraftingEventPacket const&);
    virtual void handle(NetworkIdentifier const&, AdventureSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, AnimatePacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);
    virtual void handle(NetworkIdentifier const&, PlayerAuthInputPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerInputPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientCacheBlobStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, SetDifficultyPacket const&);
    virtual void handle(NetworkIdentifier const&, SimpleEventPacket const&);
    virtual void handle(NetworkIdentifier const&, SpawnExperienceOrbPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientCacheStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, RequestChunkRadiusPacket const&);
    virtual void handle(NetworkIdentifier const&, MapCreateLockedCopyPacket const&);
    virtual void handle(NetworkIdentifier const&, MapInfoRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, BossEventPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandBlockUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, CompletedUsingItemPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackChunkRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, StructureBlockUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, StructureTemplateDataRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, InventoryTransactionPacket const&);
    virtual void handle(NetworkIdentifier const&, PurchaseReceiptPacket const&);
    virtual void handle(NetworkIdentifier const&, ModalFormResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, TickSyncPacket const&);
    virtual void handle(NetworkIdentifier const&, RespawnPacket const&);
    virtual void handle(NetworkIdentifier const&, ShowCreditsPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerSkinPacket const&);
    virtual void handle(NetworkIdentifier const&, LecternUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, BookEditPacket const&);
    virtual void handle(NetworkIdentifier const&, NpcRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, PhotoTransferPacket const&);
    virtual void handle(NetworkIdentifier const&, LabTablePacket const&);
    virtual void handle(NetworkIdentifier const&, NetworkStackLatencyPacket const&);
    virtual void handle(NetworkIdentifier const&, SetLocalPlayerAsInitializedPacket const&);
    virtual void handle(NetworkIdentifier const&, MultiplayerSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, SettingsCommandPacket const&);
    virtual void handle(NetworkIdentifier const&, AnvilDamagePacket const&);
    virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::string const&);
    virtual void onXboxUserBlocked(std::string const&);
    virtual void onXboxUserUnblocked(std::string const&);
//  virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition

//  ServerNetworkHandler(GameCallbacks &, Level &, NetworkHandler &, PrivateKeyManager &, ServerLocator &, PacketSender &, Whitelist &, PermissionsFile *, mce::UUID const&, int, bool, std::vector<std::string, std::allocator<std::string>> const&, std::string, int, MinecraftCommands &, IMinecraftApp &, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *, ServerMetrics *); //TODO: incomplete function definition
    void disallowIncomingConnections();
    void _displayGameMessage(Player const&, std::string const&);
    void disconnectClient(NetworkIdentifier const&, std::string const&, bool);
    void _getServerPlayer(NetworkIdentifier const&, unsigned char);
    void allowIncomingConnections(std::string const&, bool);
    void _getPlayer(NetworkIdentifier const&, unsigned char, ActorRuntimeID const&);
    void _onPlayerLeft(ServerPlayer *, bool);
    void updateServerAnnouncement();
    void onSubclientLogoff(NetworkIdentifier const&, unsigned char const&);
    void removeFromBlacklist(mce::UUID const&, std::string const&);
    void _onClientAuthenticated(NetworkIdentifier const&, Certificate const&);
    void _onSubClientAuthenticated(NetworkIdentifier const&, Certificate const&, SubClientLoginPacket const&);
    void _isServerFull(mce::UUID)const;
    void sendSubClientLoginMessageLocal(NetworkIdentifier const&, SubClientConnectionRequest const&, unsigned char);
    void sendLoginMessageLocal(NetworkIdentifier const&, ConnectionRequest const&);
    void onReady_ClientGeneration(Player &, NetworkIdentifier const&);
    void activateWhitelist();
    void addToBlacklist(mce::UUID const&, std::string const&);
//  void addToBlacklist(mce::UUID const&, std::string const&, std::string const&, Blacklist::Duration const&); //TODO: incomplete function definition
    void setIsTrial(bool);
    void _getPlayer(NetworkIdentifier const&, unsigned char, ActorUniqueID const&);
    void _tryGetEntity(EntityClientPacket const&);
    void _sendLevelData(ServerPlayer &, NetworkIdentifier const&);
    void _sendAdditionalLevelData(ServerPlayer &, NetworkIdentifier const&);
    void _getActiveAndInProgressPlayerCount(mce::UUID)const;
    void setMaxNumPlayers(int);
    void _createNewPlayer(NetworkIdentifier const&, ConnectionRequest const&);
    void _createNewPlayer(NetworkIdentifier const&, SubClientConnectionRequest const&, unsigned char);
    void sendBehaviorTrees(NetworkIdentifier const&, unsigned char);
    void _getOrCreateDimension(Player &);
    void _loadNewPlayer(ServerPlayer &, bool);
    void _setNewPlayerPermissions(ServerPlayer &);
    void setAutomationClient(Automation::AutomationClient *);
    void setTenantId(std::string const&);
    void setShareableIdentityToken(std::string const&);
//  void setPermission(Player const&, PlayerPermissionLevel); //TODO: incomplete function definition
    void getMaxNumPlayers()const;
    std::string getGlobalMultiplayerCorrelationId()const;
};
