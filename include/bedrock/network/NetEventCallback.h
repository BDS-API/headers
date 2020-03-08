#pragma once

#include "packet/InventoryTransactionPacket"
#include "packet/AddPaintingPacket"
#include "packet/UpdateEquipPacket"
#include "packet/ResourcePackChunkDataPacket"
#include "packet/OnScreenTextureAnimationPacket"
#include "packet/ShowProfilePacket"
#include "packet/MobEquipmentPacket"
#include "packet/UpdateSoftEnumPacket"
#include "packet/SpawnExperienceOrbPacket"
#include "packet/ServerSettingsResponsePacket"
#include "packet/EducationSettingsPacket"
#include "packet/LevelChunkPacket"
#include "packet/HurtArmorPacket"
#include "packet/BossEventPacket"
#include "packet/MoveActorDeltaPacket"
#include "packet/CameraPacket"
#include "packet/PlayerInputPacket"
#include "packet/AvailableCommandsPacket"
#include "packet/UpdateBlockPropertiesPacket"
#include "packet/MultiplayerSettingsPacket"
#include "packet/LecternUpdatePacket"
#include "packet/MoveActorAbsolutePacket"
#include "packet/SetScoreboardIdentityPacket"
#include "packet/ShowCreditsPacket"
#include "packet/CommandOutputPacket"
#include "packet/BlockActorDataPacket"
#include "packet/SetPlayerGameTypePacket"
#include "packet/UpdateBlockPacket"
#include "packet/MobArmorEquipmentPacket"
#include "packet/CraftingDataPacket"
#include "packet/ChunkRadiusUpdatedPacket"
#include "packet/MovePlayerPacket"
#include "packet/ClientCacheStatusPacket"
#include "packet/SettingsCommandPacket"
#include "packet/SetActorDataPacket"
#include "packet/TransferPacket"
#include "packet/LoginPacket"
#include "packet/ResourcePackDataInfoPacket"
#include "packet/ServerSettingsRequestPacket"
#include "packet/ActorFallPacket"
#include "packet/SetDifficultyPacket"
#include "packet/CraftingEventPacket"
#include "packet/AddItemActorPacket"
#include "packet/UpdateBlockSyncedPacket"
#include "packet/TickSyncPacket"
#include "packet/InventorySlotPacket"
#include "packet/DisconnectPacket"
#include "packet/PlayerListPacket"
#include "packet/SetActorLinkPacket"
#include "packet/NpcRequestPacket"
#include "packet/StructureTemplateDataRequestPacket"
#include "packet/SetHealthPacket"
#include "packet/LevelEventPacket"
#include "packet/MobEffectPacket"
#include "packet/ItemFrameDropItemPacket"
#include "../../unmapped/NetworkIdentifier"
#include "packet/PhotoTransferPacket"
#include "packet/ActorEventPacket"
#include "packet/ShowStoreOfferPacket"
#include "packet/SetCommandsEnabledPacket"
#include "packet/UpdateTradePacket"
#include "packet/AddPlayerPacket"
#include "packet/ClientToServerHandshakePacket"
#include "packet/PlayStatusPacket"
#include "packet/RemoveActorPacket"
#include "packet/SetSpawnPositionPacket"
#include "packet/ContainerOpenPacket"
#include "packet/VideoStreamConnectPacket"
#include "packet/AddBehaviorTreePacket"
#include "packet/RemoveObjectivePacket"
#include "packet/SubClientLoginPacket"
#include "packet/AutomationClientConnectPacket"
#include "packet/SetActorMotionPacket"
#include "packet/AddEntityPacket"
#include "packet/ModalFormRequestPacket"
#include "packet/ResourcePacksInfoPacket"
#include "packet/SetLocalPlayerAsInitializedPacket"
#include "packet/SetTitlePacket"
#include "packet/CommandBlockUpdatePacket"
#include "packet/TextPacket"
#include "packet/AddActorPacket"
#include "packet/ClientCacheMissResponsePacket"
#include "packet/ContainerClosePacket"
#include "packet/PlaySoundPacket"
#include "packet/StopSoundPacket"
#include "packet/AdventureSettingsPacket"
#include "packet/SetLastHurtByPacket"
#include "packet/TakeItemActorPacket"
#include "packet/ActorPickRequestPacket"
#include "../actor/Player"
#include "packet/CompletedUsingItemPacket"
#include "packet/LabTablePacket"
#include "packet/BlockPickRequestPacket"
#include "packet/GuiDataPickItemPacket"
#include "packet/PlayerHotbarPacket"
#include "packet/ContainerSetDataPacket"
#include "packet/UpdateAttributesPacket"
#include "packet/LevelSoundEventPacket"
#include "packet/SetTimePacket"
#include "packet/LevelSoundEventPacketV2"
#include "packet/ClientboundMapItemDataPacket"
#include "packet/ResourcePackChunkRequestPacket"
#include "packet/BiomeDefinitionListPacket"
#include "packet/LevelEventGenericPacket"
#include "packet/SpawnParticleEffectPacket"
#include "packet/InteractPacket"
#include "packet/ScriptCustomEventPacket"
#include "packet/StartGamePacket"
#include "packet/BookEditPacket"
#include "packet/PlayerAuthInputPacket"
#include "packet/MapCreateLockedCopyPacket"
#include "packet/EmotePacket"
#include "packet/RiderJumpPacket"
#include "packet/NetworkChunkPublisherUpdatePacket"
#include "packet/NetworkSettingsPacket"
#include "packet/ServerToClientHandshakePacket"
#include "packet/RemoveEntityPacket"
#include "packet/SetDisplayObjectivePacket"
#include "packet/SetScorePacket"
#include "packet/CommandRequestPacket"
#include "packet/PlayerActionPacket"
#include "packet/LevelSoundEventPacketV1"
#include "packet/StructureTemplateDataResponsePacket"
#include "packet/RequestChunkRadiusPacket"
#include "packet/SetDefaultGameTypePacket"
#include "packet/RespawnPacket"
#include "packet/ResourcePackClientResponsePacket"
#include "packet/PlayerSkinPacket"
#include "packet/AvailableActorIdentifiersPacket"
#include "packet/ModalFormResponsePacket"
#include "packet/SimpleEventPacket"
#include "packet/InventoryContentPacket"
#include "packet/GameRulesChangedPacket"
#include "packet/MapInfoRequestPacket"
#include "packet/ChangeDimensionPacket"
#include "packet/NetworkStackLatencyPacket"
#include "packet/BlockEventPacket"
#include "packet/EventPacket"
#include "packet/AnimatePacket"
#include "packet/ResourcePackStackPacket"
#include "packet/AnvilDamagePacket"
#include "packet/ClientCacheBlobStatusPacket"
#include "packet/PurchaseReceiptPacket"
#include "packet/StructureBlockUpdatePacket"


class NetEventCallback {

public:
    virtual void onPlayerReady(Player &);
    NetEventCallback::~NetEventCallback()
    virtual void onConnect(NetworkIdentifier const&);
    virtual void onUnableToConnect();
    virtual void onTick();
    virtual void onStoreOfferReceive(bool, std::string const&);
    virtual void onDisconnect(NetworkIdentifier const&, std::string const&, bool, std::string const&);
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()(void)>);
    virtual void onTransferRequest(NetworkIdentifier const&, std::string const&, int);
    virtual void handle(NetworkIdentifier const&, DisconnectPacket const&);
    virtual void handle(NetworkIdentifier const&, EmotePacket const&);
    virtual void handle(NetworkIdentifier const&, LoginPacket const&);
    virtual void handle(NetworkIdentifier const&, SubClientLoginPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientToServerHandshakePacket const&);
    virtual void handle(NetworkIdentifier const&, ServerToClientHandshakePacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePacksInfoPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackStackPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackClientResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, PlayStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, SetTimePacket const&);
    virtual void handle(NetworkIdentifier const&, TextPacket const&);
    virtual void handle(NetworkIdentifier const&, StartGamePacket const&);
    virtual void handle(NetworkIdentifier const&, AddItemActorPacket const&);
    virtual void handle(NetworkIdentifier const&, AddPaintingPacket const&);
    virtual void handle(NetworkIdentifier const&, TakeItemActorPacket const&);
    virtual void handle(NetworkIdentifier const&, AddActorPacket const&);
    virtual void handle(NetworkIdentifier const&, AddEntityPacket const&);
    virtual void handle(NetworkIdentifier const&, AddMobPacket const&);
    virtual void handle(NetworkIdentifier const&, AddPlayerPacket const&);
    virtual void handle(NetworkIdentifier const&, RemoveActorPacket const&);
    virtual void handle(NetworkIdentifier const&, RemoveEntityPacket const&);
    virtual void handle(NetworkIdentifier const&, MoveActorAbsolutePacket const&);
    virtual void handle(NetworkIdentifier const&, MoveActorDeltaPacket const&);
    virtual void handle(NetworkIdentifier const&, MovePlayerPacket const&);
    virtual void handle(NetworkIdentifier const&, RiderJumpPacket const&);
    virtual void handle(NetworkIdentifier const&, SetPlayerGameTypePacket const&);
    virtual void handle(NetworkIdentifier const&, SetDefaultGameTypePacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<UpdateBlockPacket>);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<UpdateBlockSyncedPacket>);
    virtual void handle(NetworkIdentifier const&, SpawnParticleEffectPacket const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacket const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV1 const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV2 const&);
    virtual void handle(NetworkIdentifier const&, LevelEventPacket const&);
    virtual void handle(NetworkIdentifier const&, LevelEventGenericPacket const&);
    virtual void handle(NetworkIdentifier const&, BlockEventPacket const&);
    virtual void handle(NetworkIdentifier const&, BlockPickRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorPickRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, GuiDataPickItemPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorEventPacket const&);
    virtual void handle(NetworkIdentifier const&, MobEffectPacket const&);
    virtual void handle(NetworkIdentifier const&, MobEquipmentPacket const&);
    virtual void handle(NetworkIdentifier const&, MobArmorEquipmentPacket const&);
    virtual void handle(NetworkIdentifier const&, SetActorDataPacket const&);
    virtual void handle(NetworkIdentifier const&, SetActorMotionPacket const&);
    virtual void handle(NetworkIdentifier const&, SetHealthPacket const&);
    virtual void handle(NetworkIdentifier const&, SetActorLinkPacket const&);
    virtual void handle(NetworkIdentifier const&, SetSpawnPositionPacket const&);
    virtual void handle(NetworkIdentifier const&, InteractPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerActionPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorFallPacket const&);
    virtual void handle(NetworkIdentifier const&, HurtArmorPacket const&);
    virtual void handle(NetworkIdentifier const&, ItemFrameDropItemPacket const&);
    virtual void handle(NetworkIdentifier const&, ContainerOpenPacket const&);
    virtual void handle(NetworkIdentifier const&, ContainerClosePacket const&);
    virtual void handle(NetworkIdentifier const&, ContainerSetDataPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerHotbarPacket const&);
    virtual void handle(NetworkIdentifier const&, InventoryContentPacket const&);
    virtual void handle(NetworkIdentifier const&, InventorySlotPacket const&);
    virtual void handle(NetworkIdentifier const&, CraftingDataPacket const&);
    virtual void handle(NetworkIdentifier const&, CraftingEventPacket const&);
    virtual void handle(NetworkIdentifier const&, AdventureSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, AnimatePacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);
    virtual void handle(NetworkIdentifier const&, PlayerAuthInputPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerInputPacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<LevelChunkPacket>);
    virtual void handle(NetworkIdentifier const&, ClientCacheBlobStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<ClientCacheMissResponsePacket>);
    virtual void handle(NetworkIdentifier const&, SetCommandsEnabledPacket const&);
    virtual void handle(NetworkIdentifier const&, SetDifficultyPacket const&);
    virtual void handle(NetworkIdentifier const&, SimpleEventPacket const&);
    virtual void handle(NetworkIdentifier const&, ChangeDimensionPacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateAttributesPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerListPacket const&);
    virtual void handle(NetworkIdentifier const&, EventPacket const&);
    virtual void handle(NetworkIdentifier const&, SpawnExperienceOrbPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientboundMapItemDataPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientCacheStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, RequestChunkRadiusPacket const&);
    virtual void handle(NetworkIdentifier const&, MapCreateLockedCopyPacket const&);
    virtual void handle(NetworkIdentifier const&, MapInfoRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ChunkRadiusUpdatedPacket const&);
    virtual void handle(NetworkIdentifier const&, BossEventPacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateTradePacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateEquipPacket const&);
    virtual void handle(NetworkIdentifier const&, AvailableCommandsPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandOutputPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandBlockUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, CompletedUsingItemPacket const&);
    virtual void handle(NetworkIdentifier const&, CameraPacket const&);
    virtual void handle(NetworkIdentifier const&, InventoryActionPacket const&);
    virtual void handle(NetworkIdentifier const&, GameRulesChangedPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackDataInfoPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackChunkDataPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackChunkRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, NetworkChunkPublisherUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, StructureBlockUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, StructureTemplateDataRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, StructureTemplateDataResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, TransferPacket const&);
    virtual void handle(NetworkIdentifier const&, PlaySoundPacket const&);
    virtual void handle(NetworkIdentifier const&, StopSoundPacket const&);
    virtual void handle(NetworkIdentifier const&, SetTitlePacket const&);
    virtual void handle(NetworkIdentifier const&, InventoryTransactionPacket const&);
    virtual void handle(NetworkIdentifier const&, AddBehaviorTreePacket const&);
    virtual void handle(NetworkIdentifier const&, ShowStoreOfferPacket const&);
    virtual void handle(NetworkIdentifier const&, PurchaseReceiptPacket const&);
    virtual void handle(NetworkIdentifier const&, RemoveObjectivePacket const&);
    virtual void handle(NetworkIdentifier const&, SetDisplayObjectivePacket const&);
    virtual void handle(NetworkIdentifier const&, AutomationClientConnectPacket const&);
    virtual void handle(NetworkIdentifier const&, VideoStreamConnectPacket const&);
    virtual void handle(NetworkIdentifier const&, ModalFormRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ModalFormResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, OnScreenTextureAnimationPacket const&);
    virtual void handle(NetworkIdentifier const&, ServerSettingsRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ServerSettingsResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, ShowProfilePacket const&);
    virtual void handle(NetworkIdentifier const&, SetScorePacket const&);
    virtual void handle(NetworkIdentifier const&, SetScoreboardIdentityPacket const&);
    virtual void handle(NetworkIdentifier const&, TickSyncPacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateSoftEnumPacket const&);
    virtual void handle(NetworkIdentifier const&, AvailableActorIdentifiersPacket const&);
    virtual void handle(NetworkIdentifier const&, UpdateBlockPropertiesPacket const&);
    virtual void handle(NetworkIdentifier const&, RespawnPacket const&);
    virtual void handle(NetworkIdentifier const&, ShowCreditsPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerSkinPacket const&);
    virtual void handle(NetworkIdentifier const&, SetLastHurtByPacket const&);
    virtual void handle(NetworkIdentifier const&, BookAddPagePacket const&);
    virtual void handle(NetworkIdentifier const&, BookDeletePagePacket const&);
    virtual void handle(NetworkIdentifier const&, LecternUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, BookEditPacket const&);
    virtual void handle(NetworkIdentifier const&, BookSignPacket const&);
    virtual void handle(NetworkIdentifier const&, BookSwapPagesPacket const&);
    virtual void handle(NetworkIdentifier const&, NpcRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, PhotoTransferPacket const&);
    virtual void handle(NetworkIdentifier const&, LabTablePacket const&);
    virtual void handle(NetworkIdentifier const&, NetworkSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, NetworkStackLatencyPacket const&);
    virtual void handle(NetworkIdentifier const&, SetLocalPlayerAsInitializedPacket const&);
    virtual void handle(NetworkIdentifier const&, ScriptCustomEventPacket const&);
    virtual void handle(NetworkIdentifier const&, BiomeDefinitionListPacket const&);
    virtual void handle(NetworkIdentifier const&, EducationSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, MultiplayerSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, SettingsCommandPacket const&);
    virtual void handle(NetworkIdentifier const&, AnvilDamagePacket const&);

    NetEventCallback(void);
};
