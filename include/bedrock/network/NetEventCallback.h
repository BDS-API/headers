#pragma once

#include "packet/UpdateTradePacket.h"
#include "packet/ServerSettingsRequestPacket.h"
#include "packet/SetActorMotionPacket.h"
#include "packet/LevelChunkPacket.h"
#include "packet/ClientCacheMissResponsePacket.h"
#include "packet/ServerToClientHandshakePacket.h"
#include "packet/SetScoreboardIdentityPacket.h"
#include "packet/AddBehaviorTreePacket.h"
#include "packet/InventoryContentPacket.h"
#include "packet/EmotePacket.h"
#include "packet/BlockEventPacket.h"
#include "packet/ShowCreditsPacket.h"
#include "packet/ClientboundMapItemDataPacket.h"
#include "../actor/Player.h"
#include "packet/SetTimePacket.h"
#include "packet/ActorFallPacket.h"
#include "packet/ItemFrameDropItemPacket.h"
#include "packet/ShowStoreOfferPacket.h"
#include "packet/ResourcePacksInfoPacket.h"
#include "packet/StartGamePacket.h"
#include "packet/SetDifficultyPacket.h"
#include "packet/CommandBlockUpdatePacket.h"
#include "packet/BlockActorDataPacket.h"
#include "packet/ContainerSetDataPacket.h"
#include "packet/AvailableCommandsPacket.h"
#include "packet/CommandOutputPacket.h"
#include "packet/LabTablePacket.h"
#include "packet/OnScreenTextureAnimationPacket.h"
#include <memory>
#include "packet/SetTitlePacket.h"
#include "packet/SimpleEventPacket.h"
#include "packet/SpawnExperienceOrbPacket.h"
#include "packet/NetworkChunkPublisherUpdatePacket.h"
#include "packet/LevelSoundEventPacketV1.h"
#include "packet/ResourcePackStackPacket.h"
#include "packet/ChunkRadiusUpdatedPacket.h"
#include "packet/RemoveActorPacket.h"
#include "packet/AvailableActorIdentifiersPacket.h"
#include "packet/ActorPickRequestPacket.h"
#include "packet/EventPacket.h"
#include "packet/CraftingDataPacket.h"
#include "packet/NpcRequestPacket.h"
#include "packet/SetPlayerGameTypePacket.h"
#include "packet/PlayerHotbarPacket.h"
#include "packet/MultiplayerSettingsPacket.h"
#include "packet/SetLastHurtByPacket.h"
#include "packet/UpdateBlockPropertiesPacket.h"
#include "packet/ResourcePackChunkDataPacket.h"
#include "packet/UpdateBlockPacket.h"
#include "packet/ShowProfilePacket.h"
#include "packet/StructureTemplateDataRequestPacket.h"
#include "packet/SetDefaultGameTypePacket.h"
#include "packet/TransferPacket.h"
#include "packet/LevelSoundEventPacket.h"
#include "packet/SetScorePacket.h"
#include "packet/ScriptCustomEventPacket.h"
#include "packet/BossEventPacket.h"
#include "packet/StructureTemplateDataResponsePacket.h"
#include "packet/InventoryTransactionPacket.h"
#include "packet/GameRulesChangedPacket.h"
#include "packet/CommandRequestPacket.h"
#include "packet/InteractPacket.h"
#include "packet/LevelSoundEventPacketV2.h"
#include "packet/SpawnParticleEffectPacket.h"
#include "packet/AdventureSettingsPacket.h"
#include "packet/TakeItemActorPacket.h"
#include "packet/ChangeDimensionPacket.h"
#include "packet/RiderJumpPacket.h"
#include "packet/SetActorDataPacket.h"
#include "packet/PlaySoundPacket.h"
#include "packet/CameraPacket.h"
#include "packet/StopSoundPacket.h"
#include <string>
#include "packet/RemoveEntityPacket.h"
#include "packet/GuiDataPickItemPacket.h"
#include "packet/ClientCacheBlobStatusPacket.h"
#include "packet/PlayerInputPacket.h"
#include "packet/SetActorLinkPacket.h"
#include "packet/UpdateAttributesPacket.h"
#include "packet/MoveActorDeltaPacket.h"
#include "packet/ServerSettingsResponsePacket.h"
#include "packet/RequestChunkRadiusPacket.h"
#include <functional>
#include "packet/ContainerOpenPacket.h"
#include "packet/SetLocalPlayerAsInitializedPacket.h"
#include "packet/SubClientLoginPacket.h"
#include "packet/SetCommandsEnabledPacket.h"
#include "packet/CompletedUsingItemPacket.h"
#include "packet/EducationSettingsPacket.h"
#include "packet/TickSyncPacket.h"
#include "packet/LevelEventPacket.h"
#include "packet/ActorEventPacket.h"
#include "packet/PlayerActionPacket.h"
#include "packet/ResourcePackChunkRequestPacket.h"
#include "packet/VideoStreamConnectPacket.h"
#include "packet/MoveActorAbsolutePacket.h"
#include "packet/InventorySlotPacket.h"
#include "packet/PlayStatusPacket.h"
#include "packet/ContainerClosePacket.h"
#include "packet/BlockPickRequestPacket.h"
#include "packet/RespawnPacket.h"
#include "packet/PurchaseReceiptPacket.h"
#include "packet/ResourcePackClientResponsePacket.h"
#include "packet/HurtArmorPacket.h"
#include "packet/UpdateEquipPacket.h"
#include "packet/NetworkSettingsPacket.h"
#include "packet/PhotoTransferPacket.h"
#include "packet/CraftingEventPacket.h"
#include "packet/UpdateBlockSyncedPacket.h"
#include "packet/AnvilDamagePacket.h"
#include "packet/LoginPacket.h"
#include "packet/ModalFormRequestPacket.h"
#include "packet/PlayerAuthInputPacket.h"
#include "packet/ClientToServerHandshakePacket.h"
#include "packet/AddActorPacket.h"
#include "packet/SetSpawnPositionPacket.h"
#include "../../unmapped/NetworkIdentifier.h"
#include "packet/MobEquipmentPacket.h"
#include "packet/LecternUpdatePacket.h"
#include "packet/MapInfoRequestPacket.h"
#include "packet/AnimatePacket.h"
#include "packet/RemoveObjectivePacket.h"
#include "packet/MovePlayerPacket.h"
#include "packet/UpdateSoftEnumPacket.h"
#include "packet/StructureBlockUpdatePacket.h"
#include "packet/MapCreateLockedCopyPacket.h"
#include "packet/SetHealthPacket.h"
#include "packet/TextPacket.h"
#include "packet/LevelEventGenericPacket.h"
#include "packet/PlayerSkinPacket.h"
#include "packet/AddEntityPacket.h"
#include "packet/AddPlayerPacket.h"
#include "packet/MobArmorEquipmentPacket.h"
#include "packet/ModalFormResponsePacket.h"
#include "packet/SetDisplayObjectivePacket.h"
#include "packet/AddItemActorPacket.h"
#include "packet/MobEffectPacket.h"
#include "packet/AutomationClientConnectPacket.h"
#include "packet/ResourcePackDataInfoPacket.h"
#include "packet/BookEditPacket.h"
#include "packet/SettingsCommandPacket.h"
#include "packet/ClientCacheStatusPacket.h"
#include "packet/BiomeDefinitionListPacket.h"
#include "packet/NetworkStackLatencyPacket.h"
#include "packet/AddPaintingPacket.h"
#include "packet/PlayerListPacket.h"
#include "packet/DisconnectPacket.h"


class NetEventCallback {

public:
    virtual void onPlayerReady(Player &);
    virtual ~NetEventCallback();
    virtual void onConnect(NetworkIdentifier const&);
    virtual void onUnableToConnect();
    virtual void onTick();
    virtual void onStoreOfferReceive(bool, std::string const&);
    virtual void onDisconnect(NetworkIdentifier const&, std::string const&, bool, std::string const&);
//  virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>); //TODO: incomplete function definition
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
//  virtual void handle(NetworkIdentifier const&, AddMobPacket const&); //TODO: incomplete function definition
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
//  virtual void handle(NetworkIdentifier const&, InventoryActionPacket const&); //TODO: incomplete function definition
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
//  virtual void handle(NetworkIdentifier const&, BookAddPagePacket const&); //TODO: incomplete function definition
//  virtual void handle(NetworkIdentifier const&, BookDeletePagePacket const&); //TODO: incomplete function definition
    virtual void handle(NetworkIdentifier const&, LecternUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, BookEditPacket const&);
//  virtual void handle(NetworkIdentifier const&, BookSignPacket const&); //TODO: incomplete function definition
//  virtual void handle(NetworkIdentifier const&, BookSwapPagesPacket const&); //TODO: incomplete function definition
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

    NetEventCallback();
};
