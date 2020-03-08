#pragma once

#include "packet/InventoryTransactionPacket"
#include "../level/LevelListener"
#include "../metrics/ServerMetrics"
#include "packet/MobEquipmentPacket"
#include "packet/SpawnExperienceOrbPacket"
#include "../../unmapped/Certificate"
#include "../../unmapped/AutomationClient"
#include "packet/BossEventPacket"
#include "../../unmapped/MinecraftCommands"
#include "packet/PlayerInputPacket"
#include "packet/MultiplayerSettingsPacket"
#include "packet/LecternUpdatePacket"
#include "../../unmapped/ConnectionRequest"
#include "packet/MoveActorAbsolutePacket"
#include "packet/ShowCreditsPacket"
#include "packet/BlockActorDataPacket"
#include "packet/SetPlayerGameTypePacket"
#include "packet/MobArmorEquipmentPacket"
#include "packet/MovePlayerPacket"
#include "packet/ClientCacheStatusPacket"
#include "packet/SettingsCommandPacket"
#include "../../unmapped/XboxLiveUserObserver"
#include "packet/LoginPacket"
#include "packet/EntityClientPacket"
#include "packet/ActorFallPacket"
#include "packet/SetDifficultyPacket"
#include "packet/CraftingEventPacket"
#include "packet/TickSyncPacket"
#include "../../unmapped/GameCallbacks"
#include "packet/DisconnectPacket"
#include "../../unmapped/PermissionsFile"
#include "../actor/unmapped/ActorUniqueID"
#include "packet/NpcRequestPacket"
#include "packet/StructureTemplateDataRequestPacket"
#include "packet/ItemFrameDropItemPacket"
#include "../../unmapped/NetworkIdentifier"
#include "packet/PhotoTransferPacket"
#include "packet/ActorEventPacket"
#include "../actor/ServerPlayer"
#include "packet/ClientToServerHandshakePacket"
#include "../../unmapped/SubClientConnectionRequest"
#include "packet/SubClientLoginPacket"
#include "../util/Vec3"
#include "../level/Level"
#include "packet/SetLocalPlayerAsInitializedPacket"
#include "packet/CommandBlockUpdatePacket"
#include "packet/TextPacket"
#include "packet/ContainerClosePacket"
#include "../util/Whitelist"
#include "packet/AdventureSettingsPacket"
#include "packet/ActorPickRequestPacket"
#include "../actor/Player"
#include "packet/CompletedUsingItemPacket"
#include "packet/LabTablePacket"
#include "packet/BlockPickRequestPacket"
#include "packet/PlayerHotbarPacket"
#include "../../mce/UUID"
#include "packet/LevelSoundEventPacket"
#include "packet/LevelSoundEventPacketV2"
#include "packet/ResourcePackChunkRequestPacket"
#include "../Scheduler"
#include "../actor/unmapped/ActorRuntimeID"
#include "packet/InteractPacket"
#include "../../unmapped/MultiplayerServiceObserver"
#include "../../unmapped/PrivateKeyManager"
#include "../../unmapped/ServerLocator"
#include "packet/BookEditPacket"
#include "packet/PlayerAuthInputPacket"
#include "packet/MapCreateLockedCopyPacket"
#include "packet/EmotePacket"
#include "packet/RiderJumpPacket"
#include "packet/CommandRequestPacket"
#include "packet/PlayerActionPacket"
#include "packet/LevelSoundEventPacketV1"
#include "../IMinecraftApp"
#include "packet/RequestChunkRadiusPacket"
#include "packet/SetDefaultGameTypePacket"
#include "packet/RespawnPacket"
#include "packet/ResourcePackClientResponsePacket"
#include "packet/PlayerSkinPacket"
#include "packet/ModalFormResponsePacket"
#include "packet/SimpleEventPacket"
#include "packet/MapInfoRequestPacket"
#include "../../unmapped/PackIdVersion"
#include "packet/sender/PacketSender"
#include "packet/StructureBlockUpdatePacket"
#include "packet/NetworkStackLatencyPacket"
#include "packet/AnimatePacket"
#include "../../unmapped/NetworkHandler"
#include "packet/ClientCacheBlobStatusPacket"
#include "packet/PurchaseReceiptPacket"
#include "packet/AnvilDamagePacket"


class ServerNetworkHandler : NetEventCallback, LevelListener, Social::MultiplayerServiceObserver, Social::XboxLiveUserObserver {

public:
    virtual void onPlayerReady(Player &);
    ServerNetworkHandler::~ServerNetworkHandler()
    virtual void onTick();
    virtual void onDisconnect(NetworkIdentifier const&, std::string const&, bool, std::string const&);
    virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds);
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()(void)>);
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
    virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);

    ServerNetworkHandler(GameCallbacks &, Level &, NetworkHandler &, PrivateKeyManager &, ServerLocator &, PacketSender &, Whitelist &, PermissionsFile *, mce::UUID const&, int, bool, std::vector<std::string, std::allocator<std::string>> const&, std::string, int, MinecraftCommands &, IMinecraftApp &, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *, ServerMetrics *);
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
    void addToBlacklist(mce::UUID const&, std::string const&, std::string const&, Blacklist::Duration const&);
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
    void setPermission(Player const&, PlayerPermissionLevel);
    void getMaxNumPlayers()const;
};
