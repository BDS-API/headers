#pragma once

#include "../../unmapped/MultiplayerServiceObserver.h"
#include <unordered_map>
#include "../../mce/UUID.h"
#include "../../unmapped/XboxLiveUserObserver.h"
#include <vector>
#include <memory>
#include "../level/LevelListener.h"
#include <string>
#include "NetEventCallback.h"
#include <functional>


class ServerNetworkHandler : NetEventCallback, LevelListener, Social::MultiplayerServiceObserver, Social::XboxLiveUserObserver {

public:
    class Client;

    virtual void onPlayerReady(Player &); // _ZN20ServerNetworkHandler13onPlayerReadyER6Player
    ~ServerNetworkHandler(); // _ZN20ServerNetworkHandlerD2Ev
    virtual void onTick(); // _ZN20ServerNetworkHandler6onTickEv
    virtual void onDisconnect(NetworkIdentifier const&, std::string const&, bool, std::string const&); // _ZN20ServerNetworkHandler12onDisconnectERK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbSA_
//  virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds); //TODO: incomplete function definition // _ZN20ServerNetworkHandler21allowIncomingPacketIdERK17NetworkIdentifier18MinecraftPacketIds
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>); // _ZN20ServerNetworkHandler18onWebsocketRequestERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_St8functionIFvvEE
    virtual void onTransferRequest(NetworkIdentifier const&, std::string const&, int); // _ZN20ServerNetworkHandler17onTransferRequestERK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void handle(NetworkIdentifier const&, DisconnectPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK16DisconnectPacket
    virtual void handle(NetworkIdentifier const&, EmotePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK11EmotePacket
    virtual void handle(NetworkIdentifier const&, LoginPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK11LoginPacket
    virtual void handle(NetworkIdentifier const&, SubClientLoginPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK20SubClientLoginPacket
    virtual void handle(NetworkIdentifier const&, ClientToServerHandshakePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK29ClientToServerHandshakePacket
    virtual void handle(NetworkIdentifier const&, ResourcePackClientResponsePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK32ResourcePackClientResponsePacket
    virtual void handle(NetworkIdentifier const&, TextPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK10TextPacket
    virtual void handle(NetworkIdentifier const&, MoveActorAbsolutePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK23MoveActorAbsolutePacket
    virtual void handle(NetworkIdentifier const&, MovePlayerPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK16MovePlayerPacket
    virtual void handle(NetworkIdentifier const&, RiderJumpPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK15RiderJumpPacket
    virtual void handle(NetworkIdentifier const&, SetPlayerGameTypePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK23SetPlayerGameTypePacket
    virtual void handle(NetworkIdentifier const&, SetDefaultGameTypePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK24SetDefaultGameTypePacket
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK21LevelSoundEventPacket
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV1 const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK23LevelSoundEventPacketV1
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV2 const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK23LevelSoundEventPacketV2
    virtual void handle(NetworkIdentifier const&, BlockPickRequestPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK22BlockPickRequestPacket
    virtual void handle(NetworkIdentifier const&, ActorPickRequestPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK22ActorPickRequestPacket
    virtual void handle(NetworkIdentifier const&, ActorEventPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK16ActorEventPacket
    virtual void handle(NetworkIdentifier const&, MobEquipmentPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK18MobEquipmentPacket
    virtual void handle(NetworkIdentifier const&, MobArmorEquipmentPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK23MobArmorEquipmentPacket
    virtual void handle(NetworkIdentifier const&, InteractPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK14InteractPacket
    virtual void handle(NetworkIdentifier const&, PlayerActionPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK18PlayerActionPacket
    virtual void handle(NetworkIdentifier const&, ActorFallPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK15ActorFallPacket
    virtual void handle(NetworkIdentifier const&, ItemFrameDropItemPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK23ItemFrameDropItemPacket
    virtual void handle(NetworkIdentifier const&, ContainerClosePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK20ContainerClosePacket
    virtual void handle(NetworkIdentifier const&, PlayerHotbarPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK18PlayerHotbarPacket
    virtual void handle(NetworkIdentifier const&, CraftingEventPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK19CraftingEventPacket
    virtual void handle(NetworkIdentifier const&, AdventureSettingsPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK23AdventureSettingsPacket
    virtual void handle(NetworkIdentifier const&, AnimatePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK13AnimatePacket
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierSt10shared_ptrI20BlockActorDataPacketE
    virtual void handle(NetworkIdentifier const&, PlayerAuthInputPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK21PlayerAuthInputPacket
    virtual void handle(NetworkIdentifier const&, PlayerInputPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK17PlayerInputPacket
    virtual void handle(NetworkIdentifier const&, ClientCacheBlobStatusPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK27ClientCacheBlobStatusPacket
    virtual void handle(NetworkIdentifier const&, SetDifficultyPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK19SetDifficultyPacket
    virtual void handle(NetworkIdentifier const&, SimpleEventPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK17SimpleEventPacket
    virtual void handle(NetworkIdentifier const&, SpawnExperienceOrbPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK24SpawnExperienceOrbPacket
    virtual void handle(NetworkIdentifier const&, ClientCacheStatusPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK23ClientCacheStatusPacket
    virtual void handle(NetworkIdentifier const&, RequestChunkRadiusPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK24RequestChunkRadiusPacket
    virtual void handle(NetworkIdentifier const&, MapCreateLockedCopyPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK25MapCreateLockedCopyPacket
    virtual void handle(NetworkIdentifier const&, MapInfoRequestPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK20MapInfoRequestPacket
    virtual void handle(NetworkIdentifier const&, BossEventPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK15BossEventPacket
    virtual void handle(NetworkIdentifier const&, CommandRequestPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK20CommandRequestPacket
    virtual void handle(NetworkIdentifier const&, CommandBlockUpdatePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK24CommandBlockUpdatePacket
    virtual void handle(NetworkIdentifier const&, CompletedUsingItemPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK24CompletedUsingItemPacket
    virtual void handle(NetworkIdentifier const&, ResourcePackChunkRequestPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK30ResourcePackChunkRequestPacket
    virtual void handle(NetworkIdentifier const&, StructureBlockUpdatePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK26StructureBlockUpdatePacket
    virtual void handle(NetworkIdentifier const&, StructureTemplateDataRequestPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK34StructureTemplateDataRequestPacket
    virtual void handle(NetworkIdentifier const&, InventoryTransactionPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK26InventoryTransactionPacket
    virtual void handle(NetworkIdentifier const&, PurchaseReceiptPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK21PurchaseReceiptPacket
    virtual void handle(NetworkIdentifier const&, ModalFormResponsePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK23ModalFormResponsePacket
    virtual void handle(NetworkIdentifier const&, TickSyncPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK14TickSyncPacket
    virtual void handle(NetworkIdentifier const&, RespawnPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK13RespawnPacket
    virtual void handle(NetworkIdentifier const&, ShowCreditsPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK17ShowCreditsPacket
    virtual void handle(NetworkIdentifier const&, PlayerSkinPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK16PlayerSkinPacket
    virtual void handle(NetworkIdentifier const&, LecternUpdatePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK19LecternUpdatePacket
    virtual void handle(NetworkIdentifier const&, BookEditPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK14BookEditPacket
    virtual void handle(NetworkIdentifier const&, NpcRequestPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK16NpcRequestPacket
    virtual void handle(NetworkIdentifier const&, PhotoTransferPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK19PhotoTransferPacket
    virtual void handle(NetworkIdentifier const&, LabTablePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK14LabTablePacket
    virtual void handle(NetworkIdentifier const&, NetworkStackLatencyPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK25NetworkStackLatencyPacket
    virtual void handle(NetworkIdentifier const&, SetLocalPlayerAsInitializedPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK33SetLocalPlayerAsInitializedPacket
    virtual void handle(NetworkIdentifier const&, MultiplayerSettingsPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK25MultiplayerSettingsPacket
    virtual void handle(NetworkIdentifier const&, SettingsCommandPacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK21SettingsCommandPacket
    virtual void handle(NetworkIdentifier const&, AnvilDamagePacket const&); // _ZN20ServerNetworkHandler6handleERK17NetworkIdentifierRK17AnvilDamagePacket
    virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::string const&); // _ZN20ServerNetworkHandler26onInvalidPlayerJoinedLobbyERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onXboxUserBlocked(std::string const&); // _ZN20ServerNetworkHandler17onXboxUserBlockedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onXboxUserUnblocked(std::string const&); // _ZN20ServerNetworkHandler19onXboxUserUnblockedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition // _ZN20ServerNetworkHandler24sendServerLegacyParticleE12ParticleTypeRK4Vec3S3_i
//  ServerNetworkHandler(GameCallbacks &, Level &, NetworkHandler &, PrivateKeyManager &, ServerLocator &, PacketSender &, Whitelist &, PermissionsFile *, mce::UUID const&, int, bool, std::vector<std::string> const&, std::string, int, MinecraftCommands &, IMinecraftApp &, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *, ServerMetrics *); //TODO: incomplete function definition // _ZN20ServerNetworkHandlerC2ER13GameCallbacksR5LevelR14NetworkHandlerR17PrivateKeyManagerR13ServerLocatorR12PacketSenderR9WhitelistP15PermissionsFileRKN3mce4UUIDEibRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaISQ_EESQ_iR17MinecraftCommandsR13IMinecraftAppRKSt13unordered_mapI13PackIdVersionSQ_St4hashIS10_ESt8equal_toIS10_ESaISt4pairIKS10_SQ_EEER9SchedulerP22TextFilteringProcessorP13ServerMetrics
    void disallowIncomingConnections(); // _ZN20ServerNetworkHandler27disallowIncomingConnectionsEv
    void _displayGameMessage(Player const&, std::string const&); // _ZN20ServerNetworkHandler19_displayGameMessageERK6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void disconnectClient(NetworkIdentifier const&, std::string const&, bool); // _ZN20ServerNetworkHandler16disconnectClientERK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void _getServerPlayer(NetworkIdentifier const&, unsigned char); // _ZN20ServerNetworkHandler16_getServerPlayerERK17NetworkIdentifierh
    void allowIncomingConnections(std::string const&, bool); // _ZN20ServerNetworkHandler24allowIncomingConnectionsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void _getPlayer(NetworkIdentifier const&, unsigned char, ActorRuntimeID const&); // _ZN20ServerNetworkHandler10_getPlayerERK17NetworkIdentifierhRK14ActorRuntimeID
    void _onPlayerLeft(ServerPlayer *, bool); // _ZN20ServerNetworkHandler13_onPlayerLeftEP12ServerPlayerb
    void updateServerAnnouncement(); // _ZN20ServerNetworkHandler24updateServerAnnouncementEv
    void onSubclientLogoff(NetworkIdentifier const&, unsigned char const&); // _ZN20ServerNetworkHandler17onSubclientLogoffERK17NetworkIdentifierRKh
    void removeFromBlacklist(mce::UUID const&, std::string const&); // _ZN20ServerNetworkHandler19removeFromBlacklistERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _onClientAuthenticated(NetworkIdentifier const&, Certificate const&); // _ZN20ServerNetworkHandler22_onClientAuthenticatedERK17NetworkIdentifierRK11Certificate
    void _onSubClientAuthenticated(NetworkIdentifier const&, Certificate const&, SubClientLoginPacket const&); // _ZN20ServerNetworkHandler25_onSubClientAuthenticatedERK17NetworkIdentifierRK11CertificateRK20SubClientLoginPacket
    void _isServerFull(mce::UUID)const; // _ZNK20ServerNetworkHandler13_isServerFullEN3mce4UUIDE
    void sendSubClientLoginMessageLocal(NetworkIdentifier const&, SubClientConnectionRequest const&, unsigned char); // _ZN20ServerNetworkHandler30sendSubClientLoginMessageLocalERK17NetworkIdentifierRK26SubClientConnectionRequesth
    void sendLoginMessageLocal(NetworkIdentifier const&, ConnectionRequest const&); // _ZN20ServerNetworkHandler21sendLoginMessageLocalERK17NetworkIdentifierRK17ConnectionRequest
    void onReady_ClientGeneration(Player &, NetworkIdentifier const&); // _ZN20ServerNetworkHandler24onReady_ClientGenerationER6PlayerRK17NetworkIdentifier
    void activateWhitelist(); // _ZN20ServerNetworkHandler17activateWhitelistEv
    void addToBlacklist(mce::UUID const&, std::string const&); // _ZN20ServerNetworkHandler14addToBlacklistERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void addToBlacklist(mce::UUID const&, std::string const&, std::string const&, Blacklist::Duration const&); //TODO: incomplete function definition // _ZN20ServerNetworkHandler14addToBlacklistERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_RKN9Blacklist8DurationE
    void setIsTrial(bool); // _ZN20ServerNetworkHandler10setIsTrialEb
    void _getPlayer(NetworkIdentifier const&, unsigned char, ActorUniqueID const&); // _ZN20ServerNetworkHandler10_getPlayerERK17NetworkIdentifierhRK13ActorUniqueID
    void _tryGetEntity(EntityClientPacket const&); // _ZN20ServerNetworkHandler13_tryGetEntityERK18EntityClientPacket
    void _sendLevelData(ServerPlayer &, NetworkIdentifier const&); // _ZN20ServerNetworkHandler14_sendLevelDataER12ServerPlayerRK17NetworkIdentifier
    void _sendAdditionalLevelData(ServerPlayer &, NetworkIdentifier const&); // _ZN20ServerNetworkHandler24_sendAdditionalLevelDataER12ServerPlayerRK17NetworkIdentifier
    void _getActiveAndInProgressPlayerCount(mce::UUID)const; // _ZNK20ServerNetworkHandler34_getActiveAndInProgressPlayerCountEN3mce4UUIDE
    void setMaxNumPlayers(int); // _ZN20ServerNetworkHandler16setMaxNumPlayersEi
    void _createNewPlayer(NetworkIdentifier const&, ConnectionRequest const&); // _ZN20ServerNetworkHandler16_createNewPlayerERK17NetworkIdentifierRK17ConnectionRequest
    void _createNewPlayer(NetworkIdentifier const&, SubClientConnectionRequest const&, unsigned char); // _ZN20ServerNetworkHandler16_createNewPlayerERK17NetworkIdentifierRK26SubClientConnectionRequesth
    void sendBehaviorTrees(NetworkIdentifier const&, unsigned char); // _ZN20ServerNetworkHandler17sendBehaviorTreesERK17NetworkIdentifierh
    void _getOrCreateDimension(Player &); // _ZN20ServerNetworkHandler21_getOrCreateDimensionER6Player
    void _loadNewPlayer(ServerPlayer &, bool); // _ZN20ServerNetworkHandler14_loadNewPlayerER12ServerPlayerb
    void _setNewPlayerPermissions(ServerPlayer &); // _ZN20ServerNetworkHandler24_setNewPlayerPermissionsER12ServerPlayer
    void setAutomationClient(Automation::AutomationClient *); // _ZN20ServerNetworkHandler19setAutomationClientEPN10Automation16AutomationClientE
    void setTenantId(std::string const&); // _ZN20ServerNetworkHandler11setTenantIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setShareableIdentityToken(std::string const&); // _ZN20ServerNetworkHandler25setShareableIdentityTokenERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void setPermission(Player const&, PlayerPermissionLevel); //TODO: incomplete function definition // _ZN20ServerNetworkHandler13setPermissionERK6Player21PlayerPermissionLevel
    void getMaxNumPlayers()const; // _ZNK20ServerNetworkHandler16getMaxNumPlayersEv
    std::string getGlobalMultiplayerCorrelationId()const; // _ZNK20ServerNetworkHandler33getGlobalMultiplayerCorrelationIdB5cxx11Ev
    class Client {

    public:
        void removeSubClientRequest(unsigned char); // _ZN20ServerNetworkHandler6Client22removeSubClientRequestEh
        void addSubClientRequest(unsigned char, std::unique_ptr<SubClientConnectionRequest>); // _ZN20ServerNetworkHandler6Client19addSubClientRequestEhSt10unique_ptrI26SubClientConnectionRequestSt14default_deleteIS2_EE
        void getPrimaryRequest()const; // _ZNK20ServerNetworkHandler6Client17getPrimaryRequestEv
        void getSubClientRequests()const; // _ZNK20ServerNetworkHandler6Client20getSubClientRequestsEv
        Client(std::unique_ptr<ConnectionRequest>); // _ZN20ServerNetworkHandler6ClientC2ESt10unique_ptrI17ConnectionRequestSt14default_deleteIS2_EE
        ~Client(); // _ZN20ServerNetworkHandler6ClientD2Ev
    };
};
