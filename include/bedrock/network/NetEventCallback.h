#pragma once

#include <string>
#include <memory>
#include <functional>


class NetEventCallback {

public:
    virtual void onPlayerReady(Player &); // _ZN16NetEventCallback13onPlayerReadyER6Player
    ~NetEventCallback(); // _ZN16NetEventCallbackD2Ev
    virtual void onConnect(NetworkIdentifier const&); // _ZN16NetEventCallback9onConnectERK17NetworkIdentifier
    virtual void onUnableToConnect(); // _ZN16NetEventCallback17onUnableToConnectEv
    virtual void onTick(); // _ZN16NetEventCallback6onTickEv
    virtual void onStoreOfferReceive(bool, std::string const&); // _ZN16NetEventCallback19onStoreOfferReceiveEbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onDisconnect(NetworkIdentifier const&, std::string const&, bool, std::string const&); // _ZN16NetEventCallback12onDisconnectERK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbSA_
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>); // _ZN16NetEventCallback18onWebsocketRequestERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_St8functionIFvvEE
    virtual void onTransferRequest(NetworkIdentifier const&, std::string const&, int); // _ZN16NetEventCallback17onTransferRequestERK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    virtual void handle(NetworkIdentifier const&, DisconnectPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK16DisconnectPacket
    virtual void handle(NetworkIdentifier const&, EmotePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK11EmotePacket
    virtual void handle(NetworkIdentifier const&, LoginPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK11LoginPacket
    virtual void handle(NetworkIdentifier const&, SubClientLoginPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK20SubClientLoginPacket
    virtual void handle(NetworkIdentifier const&, ClientToServerHandshakePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK29ClientToServerHandshakePacket
    virtual void handle(NetworkIdentifier const&, ServerToClientHandshakePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK29ServerToClientHandshakePacket
    virtual void handle(NetworkIdentifier const&, ResourcePacksInfoPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23ResourcePacksInfoPacket
    virtual void handle(NetworkIdentifier const&, ResourcePackStackPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23ResourcePackStackPacket
    virtual void handle(NetworkIdentifier const&, ResourcePackClientResponsePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK32ResourcePackClientResponsePacket
    virtual void handle(NetworkIdentifier const&, PlayStatusPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK16PlayStatusPacket
    virtual void handle(NetworkIdentifier const&, SetTimePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK13SetTimePacket
    virtual void handle(NetworkIdentifier const&, TextPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK10TextPacket
    virtual void handle(NetworkIdentifier const&, StartGamePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15StartGamePacket
    virtual void handle(NetworkIdentifier const&, AddItemActorPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK18AddItemActorPacket
    virtual void handle(NetworkIdentifier const&, AddPaintingPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17AddPaintingPacket
    virtual void handle(NetworkIdentifier const&, TakeItemActorPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19TakeItemActorPacket
    virtual void handle(NetworkIdentifier const&, AddActorPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK14AddActorPacket
    virtual void handle(NetworkIdentifier const&, AddEntityPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15AddEntityPacket
//  virtual void handle(NetworkIdentifier const&, AddMobPacket const&); //TODO: incomplete function definition // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK12AddMobPacket
    virtual void handle(NetworkIdentifier const&, AddPlayerPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15AddPlayerPacket
    virtual void handle(NetworkIdentifier const&, RemoveActorPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17RemoveActorPacket
    virtual void handle(NetworkIdentifier const&, RemoveEntityPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK18RemoveEntityPacket
    virtual void handle(NetworkIdentifier const&, MoveActorAbsolutePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23MoveActorAbsolutePacket
    virtual void handle(NetworkIdentifier const&, MoveActorDeltaPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK20MoveActorDeltaPacket
    virtual void handle(NetworkIdentifier const&, MovePlayerPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK16MovePlayerPacket
    virtual void handle(NetworkIdentifier const&, RiderJumpPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15RiderJumpPacket
    virtual void handle(NetworkIdentifier const&, SetPlayerGameTypePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23SetPlayerGameTypePacket
    virtual void handle(NetworkIdentifier const&, SetDefaultGameTypePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK24SetDefaultGameTypePacket
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<UpdateBlockPacket>); // _ZN16NetEventCallback6handleERK17NetworkIdentifierSt10shared_ptrI17UpdateBlockPacketE
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<UpdateBlockSyncedPacket>); // _ZN16NetEventCallback6handleERK17NetworkIdentifierSt10shared_ptrI23UpdateBlockSyncedPacketE
    virtual void handle(NetworkIdentifier const&, SpawnParticleEffectPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK25SpawnParticleEffectPacket
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21LevelSoundEventPacket
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV1 const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23LevelSoundEventPacketV1
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV2 const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23LevelSoundEventPacketV2
    virtual void handle(NetworkIdentifier const&, LevelEventPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK16LevelEventPacket
    virtual void handle(NetworkIdentifier const&, LevelEventGenericPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23LevelEventGenericPacket
    virtual void handle(NetworkIdentifier const&, BlockEventPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK16BlockEventPacket
    virtual void handle(NetworkIdentifier const&, BlockPickRequestPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK22BlockPickRequestPacket
    virtual void handle(NetworkIdentifier const&, ActorPickRequestPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK22ActorPickRequestPacket
    virtual void handle(NetworkIdentifier const&, GuiDataPickItemPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21GuiDataPickItemPacket
    virtual void handle(NetworkIdentifier const&, ActorEventPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK16ActorEventPacket
    virtual void handle(NetworkIdentifier const&, MobEffectPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15MobEffectPacket
    virtual void handle(NetworkIdentifier const&, MobEquipmentPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK18MobEquipmentPacket
    virtual void handle(NetworkIdentifier const&, MobArmorEquipmentPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23MobArmorEquipmentPacket
    virtual void handle(NetworkIdentifier const&, SetActorDataPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK18SetActorDataPacket
    virtual void handle(NetworkIdentifier const&, SetActorMotionPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK20SetActorMotionPacket
    virtual void handle(NetworkIdentifier const&, SetHealthPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15SetHealthPacket
    virtual void handle(NetworkIdentifier const&, SetActorLinkPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK18SetActorLinkPacket
    virtual void handle(NetworkIdentifier const&, SetSpawnPositionPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK22SetSpawnPositionPacket
    virtual void handle(NetworkIdentifier const&, InteractPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK14InteractPacket
    virtual void handle(NetworkIdentifier const&, PlayerActionPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK18PlayerActionPacket
    virtual void handle(NetworkIdentifier const&, ActorFallPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15ActorFallPacket
    virtual void handle(NetworkIdentifier const&, HurtArmorPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15HurtArmorPacket
    virtual void handle(NetworkIdentifier const&, ItemFrameDropItemPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23ItemFrameDropItemPacket
    virtual void handle(NetworkIdentifier const&, ContainerOpenPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19ContainerOpenPacket
    virtual void handle(NetworkIdentifier const&, ContainerClosePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK20ContainerClosePacket
    virtual void handle(NetworkIdentifier const&, ContainerSetDataPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK22ContainerSetDataPacket
    virtual void handle(NetworkIdentifier const&, PlayerHotbarPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK18PlayerHotbarPacket
    virtual void handle(NetworkIdentifier const&, InventoryContentPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK22InventoryContentPacket
    virtual void handle(NetworkIdentifier const&, InventorySlotPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19InventorySlotPacket
    virtual void handle(NetworkIdentifier const&, CraftingDataPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK18CraftingDataPacket
    virtual void handle(NetworkIdentifier const&, CraftingEventPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19CraftingEventPacket
    virtual void handle(NetworkIdentifier const&, AdventureSettingsPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23AdventureSettingsPacket
    virtual void handle(NetworkIdentifier const&, AnimatePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK13AnimatePacket
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>); // _ZN16NetEventCallback6handleERK17NetworkIdentifierSt10shared_ptrI20BlockActorDataPacketE
    virtual void handle(NetworkIdentifier const&, PlayerAuthInputPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21PlayerAuthInputPacket
    virtual void handle(NetworkIdentifier const&, PlayerInputPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17PlayerInputPacket
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<LevelChunkPacket>); // _ZN16NetEventCallback6handleERK17NetworkIdentifierSt10shared_ptrI16LevelChunkPacketE
    virtual void handle(NetworkIdentifier const&, ClientCacheBlobStatusPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK27ClientCacheBlobStatusPacket
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<ClientCacheMissResponsePacket>); // _ZN16NetEventCallback6handleERK17NetworkIdentifierSt10shared_ptrI29ClientCacheMissResponsePacketE
    virtual void handle(NetworkIdentifier const&, SetCommandsEnabledPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK24SetCommandsEnabledPacket
    virtual void handle(NetworkIdentifier const&, SetDifficultyPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19SetDifficultyPacket
    virtual void handle(NetworkIdentifier const&, SimpleEventPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17SimpleEventPacket
    virtual void handle(NetworkIdentifier const&, ChangeDimensionPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21ChangeDimensionPacket
    virtual void handle(NetworkIdentifier const&, UpdateAttributesPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK22UpdateAttributesPacket
    virtual void handle(NetworkIdentifier const&, PlayerListPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK16PlayerListPacket
    virtual void handle(NetworkIdentifier const&, EventPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK11EventPacket
    virtual void handle(NetworkIdentifier const&, SpawnExperienceOrbPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK24SpawnExperienceOrbPacket
    virtual void handle(NetworkIdentifier const&, ClientboundMapItemDataPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK28ClientboundMapItemDataPacket
    virtual void handle(NetworkIdentifier const&, ClientCacheStatusPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23ClientCacheStatusPacket
    virtual void handle(NetworkIdentifier const&, RequestChunkRadiusPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK24RequestChunkRadiusPacket
    virtual void handle(NetworkIdentifier const&, MapCreateLockedCopyPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK25MapCreateLockedCopyPacket
    virtual void handle(NetworkIdentifier const&, MapInfoRequestPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK20MapInfoRequestPacket
    virtual void handle(NetworkIdentifier const&, ChunkRadiusUpdatedPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK24ChunkRadiusUpdatedPacket
    virtual void handle(NetworkIdentifier const&, BossEventPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15BossEventPacket
    virtual void handle(NetworkIdentifier const&, UpdateTradePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17UpdateTradePacket
    virtual void handle(NetworkIdentifier const&, UpdateEquipPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17UpdateEquipPacket
    virtual void handle(NetworkIdentifier const&, AvailableCommandsPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23AvailableCommandsPacket
    virtual void handle(NetworkIdentifier const&, CommandRequestPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK20CommandRequestPacket
    virtual void handle(NetworkIdentifier const&, CommandOutputPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19CommandOutputPacket
    virtual void handle(NetworkIdentifier const&, CommandBlockUpdatePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK24CommandBlockUpdatePacket
    virtual void handle(NetworkIdentifier const&, CompletedUsingItemPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK24CompletedUsingItemPacket
    virtual void handle(NetworkIdentifier const&, CameraPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK12CameraPacket
//  virtual void handle(NetworkIdentifier const&, InventoryActionPacket const&); //TODO: incomplete function definition // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21InventoryActionPacket
    virtual void handle(NetworkIdentifier const&, GameRulesChangedPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK22GameRulesChangedPacket
    virtual void handle(NetworkIdentifier const&, ResourcePackDataInfoPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK26ResourcePackDataInfoPacket
    virtual void handle(NetworkIdentifier const&, ResourcePackChunkDataPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK27ResourcePackChunkDataPacket
    virtual void handle(NetworkIdentifier const&, ResourcePackChunkRequestPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK30ResourcePackChunkRequestPacket
    virtual void handle(NetworkIdentifier const&, NetworkChunkPublisherUpdatePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK33NetworkChunkPublisherUpdatePacket
    virtual void handle(NetworkIdentifier const&, StructureBlockUpdatePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK26StructureBlockUpdatePacket
    virtual void handle(NetworkIdentifier const&, StructureTemplateDataRequestPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK34StructureTemplateDataRequestPacket
    virtual void handle(NetworkIdentifier const&, StructureTemplateDataResponsePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK35StructureTemplateDataResponsePacket
    virtual void handle(NetworkIdentifier const&, TransferPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK14TransferPacket
    virtual void handle(NetworkIdentifier const&, PlaySoundPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15PlaySoundPacket
    virtual void handle(NetworkIdentifier const&, StopSoundPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK15StopSoundPacket
    virtual void handle(NetworkIdentifier const&, SetTitlePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK14SetTitlePacket
    virtual void handle(NetworkIdentifier const&, InventoryTransactionPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK26InventoryTransactionPacket
    virtual void handle(NetworkIdentifier const&, AddBehaviorTreePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21AddBehaviorTreePacket
    virtual void handle(NetworkIdentifier const&, ShowStoreOfferPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK20ShowStoreOfferPacket
    virtual void handle(NetworkIdentifier const&, PurchaseReceiptPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21PurchaseReceiptPacket
    virtual void handle(NetworkIdentifier const&, RemoveObjectivePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21RemoveObjectivePacket
    virtual void handle(NetworkIdentifier const&, SetDisplayObjectivePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK25SetDisplayObjectivePacket
    virtual void handle(NetworkIdentifier const&, AutomationClientConnectPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK29AutomationClientConnectPacket
    virtual void handle(NetworkIdentifier const&, VideoStreamConnectPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK24VideoStreamConnectPacket
    virtual void handle(NetworkIdentifier const&, ModalFormRequestPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK22ModalFormRequestPacket
    virtual void handle(NetworkIdentifier const&, ModalFormResponsePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23ModalFormResponsePacket
    virtual void handle(NetworkIdentifier const&, OnScreenTextureAnimationPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK30OnScreenTextureAnimationPacket
    virtual void handle(NetworkIdentifier const&, ServerSettingsRequestPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK27ServerSettingsRequestPacket
    virtual void handle(NetworkIdentifier const&, ServerSettingsResponsePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK28ServerSettingsResponsePacket
    virtual void handle(NetworkIdentifier const&, ShowProfilePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17ShowProfilePacket
    virtual void handle(NetworkIdentifier const&, SetScorePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK14SetScorePacket
    virtual void handle(NetworkIdentifier const&, SetScoreboardIdentityPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK27SetScoreboardIdentityPacket
    virtual void handle(NetworkIdentifier const&, TickSyncPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK14TickSyncPacket
    virtual void handle(NetworkIdentifier const&, UpdateSoftEnumPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK20UpdateSoftEnumPacket
    virtual void handle(NetworkIdentifier const&, AvailableActorIdentifiersPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK31AvailableActorIdentifiersPacket
    virtual void handle(NetworkIdentifier const&, UpdateBlockPropertiesPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK27UpdateBlockPropertiesPacket
    virtual void handle(NetworkIdentifier const&, RespawnPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK13RespawnPacket
    virtual void handle(NetworkIdentifier const&, ShowCreditsPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17ShowCreditsPacket
    virtual void handle(NetworkIdentifier const&, PlayerSkinPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK16PlayerSkinPacket
    virtual void handle(NetworkIdentifier const&, SetLastHurtByPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19SetLastHurtByPacket
//  virtual void handle(NetworkIdentifier const&, BookAddPagePacket const&); //TODO: incomplete function definition // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17BookAddPagePacket
//  virtual void handle(NetworkIdentifier const&, BookDeletePagePacket const&); //TODO: incomplete function definition // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK20BookDeletePagePacket
    virtual void handle(NetworkIdentifier const&, LecternUpdatePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19LecternUpdatePacket
    virtual void handle(NetworkIdentifier const&, BookEditPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK14BookEditPacket
//  virtual void handle(NetworkIdentifier const&, BookSignPacket const&); //TODO: incomplete function definition // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK14BookSignPacket
//  virtual void handle(NetworkIdentifier const&, BookSwapPagesPacket const&); //TODO: incomplete function definition // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19BookSwapPagesPacket
    virtual void handle(NetworkIdentifier const&, NpcRequestPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK16NpcRequestPacket
    virtual void handle(NetworkIdentifier const&, PhotoTransferPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK19PhotoTransferPacket
    virtual void handle(NetworkIdentifier const&, LabTablePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK14LabTablePacket
    virtual void handle(NetworkIdentifier const&, NetworkSettingsPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21NetworkSettingsPacket
    virtual void handle(NetworkIdentifier const&, NetworkStackLatencyPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK25NetworkStackLatencyPacket
    virtual void handle(NetworkIdentifier const&, SetLocalPlayerAsInitializedPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK33SetLocalPlayerAsInitializedPacket
    virtual void handle(NetworkIdentifier const&, ScriptCustomEventPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23ScriptCustomEventPacket
    virtual void handle(NetworkIdentifier const&, BiomeDefinitionListPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK25BiomeDefinitionListPacket
    virtual void handle(NetworkIdentifier const&, EducationSettingsPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK23EducationSettingsPacket
    virtual void handle(NetworkIdentifier const&, MultiplayerSettingsPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK25MultiplayerSettingsPacket
    virtual void handle(NetworkIdentifier const&, SettingsCommandPacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK21SettingsCommandPacket
    virtual void handle(NetworkIdentifier const&, AnvilDamagePacket const&); // _ZN16NetEventCallback6handleERK17NetworkIdentifierRK17AnvilDamagePacket
    NetEventCallback(); // _ZN16NetEventCallbackC2Ev
};
