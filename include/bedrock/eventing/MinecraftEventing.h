#pragma once

#include "../../unmapped/MobEffectInstance"
#include "../../mce/UUID"
#include "../item/ItemInstance"
#include "../resourcepack/ResourcePack"
#include "../../unmapped/NewBlockID"
#include "../../unmapped/Option"
#include "../item/unmapped/ItemDescriptor"
#include "../../unmapped/PlayerRespawnTelemetryData"
#include "../../unmapped/PackSettings"
#include "../../unmapped/StackStats"
#include "../level/LevelSettings"
#include "../../core/Path"
#include "../resourcepack/ResourcePacksInfoData"
#include "../../unmapped/StructureEditorData"
#include "../level/LevelChunk"
#include "../../unmapped/GameRules"
#include "../../unmapped/PackInstance"
#include "../actor/Mob"
#include "../pack/PackManifest"
#include "../../unmapped/Event"
#include "../../unmapped/PushNotificationMessage"
#include "../../unmapped/Dimension"
#include "../actor/Player"
#include "../../unmapped/BaseCommandBlock"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../pack/ResourcePackManager"
#include "../actor/damagesource/ActorDamageSource"
#include "../../unmapped/PackReport"
#include "../actor/ArmorStand"
#include "../actor/Actor"
#include "../../unmapped/StructureTelemetryClientData"
#include "../level/Level"
#include "../../unmapped/BehaviorPackContents"
#include "../../unmapped/Property"
#include "../level/LevelData"
#include "../resourcepack/ResourcePackContents"
#include "../../unmapped/ContentIdentity"
#include "../block/actor/ChalkboardBlockActor"
#include "../item/unmapped/ItemEnchants"


class MinecraftEventing : IMinecraftEventing {

public:
    static long sMutex;
    static long mUseMethodMap;
    static long mAcquisitionMethodMap;

    virtual MinecraftEventing::~MinecraftEventing()
    virtual void fireEventPackUpgradeAttempt(PackManifest const&, PackReport const&);
    virtual void init(Social::IUserManager &);
    virtual void getPlayerSessionId();
    virtual void getShouldHaveAchievementsEnabled();
    virtual void setShouldHaveAchievementsEnabled(bool);
    virtual void getAchievementsAlwaysEnabled();
    virtual void getPrimaryLocalUserId();
    virtual void forceSendEvents();
    virtual void getEventManager()const;
    virtual void updatePrimaryLocalUserId(unsigned int const&);
    virtual void updateIsLegacyPlayer(bool);
    virtual void updateIsTrial(bool)const;
    virtual void registerOptionsObserver(std::shared_ptr<Options>);
    virtual void addListener(std::unique_ptr<Social::Events::IEventListener, std::default_delete<Social::Events::IEventListener>>);
    virtual void fireEventOnSuccessfulClientLogin(Level const*);
    virtual void fireEventStartClient(std::string const&, std::string const&, std::string const&, bool);
    virtual void fireEventStartWorld(IMinecraftEventing::NetworkType, std::string const&, Social::MultiplayerServiceIdentifier);
    virtual void fireGlobalResourcePackCrashRecovery(PackInstance &, mce::UUID, int);
    virtual void fireServerConnectionEvent(IMinecraftEventing::ServerConnectionOutcome, unsigned int, double, std::string const&);
    virtual void fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&);
    virtual void fireTextToSpeechToggled(bool, bool);
    virtual void fireEventClientIdCreated(int);
    virtual void fireEventFloatPropertyList(std::string const&, std::vector<std::pair<std::string, float>, std::allocator<std::pair<std::string, float>>> const&);
    virtual void fireEventHardwareInfo();
    virtual void fireEventOptionsUpdated(std::shared_ptr<Options>, InputMode, bool);
    virtual void fireEventChatSettingsUpdated(Player const*, std::vector<Social::Events::Property, std::allocator<Social::Events::Property>> const&)const;
    virtual void fireEventPerformanceMetrics(ProfilerLiteTelemetry const&);
    virtual void fireEventPlayerTravelled(Player *, float);
    virtual void fireEventPromotionNotificationClicked(std::string const&);
    virtual void fireEventVideoPlayed(std::string const&, std::string const&);
    virtual void fireEventRespondedToAcceptContent(ResourcePacksInfoData const&, bool);
    virtual void fireEventSignInToXboxLive(Social::XboxLiveUser const&, bool, IMinecraftEventing::SignInStage);
    virtual void fireEventSignOutOfXboxLive(Social::XboxLiveUser const&);
    virtual void fireEventAppSuspended(bool);
    virtual void fireEventAppPaused();
    virtual void fireEventAppUnpaused();
    virtual void fireEventAppResumed();
    virtual void fireEventSplitScreenUpdated(IClientInstance const&);
    virtual void fireEventScreenChanged(unsigned int const&, std::string const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&);
    virtual void fireEventPopupClosed(std::string const&)const;
    virtual void fireEventGameplayTipShown(int, bool, std::string const&);
    virtual void fireEventWorldImported(long, unsigned long);
    virtual void fireCurrentInputUpdated(IClientInstance const&);
    virtual void fireEventPackImportStarted(PackManifest const&);
    virtual void fireEventPackImportedCompleted(ResourcePack const*, PackManifest const&, bool, std::string const&);
    virtual void fireEventTreatmentPackApplied(PackManifest const&);
    virtual void fireEventPackPlayed(PackInstance const&, unsigned int);
    virtual void fireEventNewUserPackDetected(PackManifest const&, bool, std::string const&, bool);
    virtual void fireEventPackHashChanged(PackManifest const&);
    virtual void fireEventTreatmentPackDownloaded(std::string);
    virtual void fireEventTreatmentPackRemoved(std::string);
    virtual void fireEventContentLogsInWorldSession(std::string const&, unsigned int, unsigned int);
    virtual void fireRealmConnectionEventStart(IMinecraftEventing::RealmConnectionFlow);
    virtual void fireRealmConnectionEventGenericLambdaCalled(IMinecraftEventing::RealmConnectionFlow, IMinecraftEventing::RealmConnectionLambda, IMinecraftEventing::RealmConnectionResult);
    virtual void fireEventCompoundCreatorCreated(int, int);
    virtual void fireEventElementConstructorUsed(int, int, IMinecraftEventing::ElementConstructorUseType);
    virtual void fireEventEntitySpawned(Player *, int, unsigned int);
    virtual void fireEventReducerBlockEntered(ItemDescriptor const&);
    virtual void fireEventRespawn(Player &, int);
    virtual void fireEventServerRespawnSearchTime(Player &, PlayerRespawnTelemetryData const&);
    virtual void firePackSettingsEvent(PackSettings const&, PackManifest const&);
    virtual void removeTestRunIdTag();
    virtual void removeTestTelemetryTag();
    virtual void setTestRunIdTag(int);
    virtual void setTestTelemetryTag(char const*);
    virtual void stopDebugEventLoggingForAllListeners();
    virtual void tick();
    virtual void updateEditionType();
    virtual void fireEventMultiplayerConnectionStateChanged(bool, std::string const&, std::string const&, unsigned int, unsigned int, unsigned int, std::string const&);
    virtual void fireEventJoinCanceled(LoadingState);
    virtual void fireClubsEngagementEvent(IMinecraftEventing::ClubsEngagementAction, IMinecraftEventing::ClubsEngagementTargetType, char const*, Realms::RealmId, std::string);
    virtual void fireClubsOpenFeedScreenEvent(IMinecraftEventing::ClubsFeedScreenSource, Realms::RealmId, std::string);
    virtual void fireEventEntitlementListInfo(std::vector<ContentIdentity, std::allocator<ContentIdentity>> &, bool);
    virtual void fireEventFileTransmissionState(IMinecraftEventing::FileTransmissionDirection, IMinecraftEventing::FileTransmissionState, IMinecraftEventing::FileTransmissionType, std::string const&, unsigned long, double);
    virtual void fireEventIncognitoFailure(std::string const&, std::string const&);
    virtual void fireEventDeviceAccountFailure(IMinecraftEventing::SignInStage, IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::string const&);
    virtual void fireEventDeviceAccountSuccess(bool, std::string const&);
    virtual void fireEventStorage(int, std::string const&);
    virtual void fireEventIAPPurchaseAttempt(std::string const&, std::string const&, Offer &, PurchasePath);
    virtual void fireEventIAPPurchaseResolved(std::string const&, std::string const&, Offer &, IMinecraftEventing::PurchaseResult, PurchasePath);
    virtual void fireEventIAPRedeemAttempt(std::string const&, std::string const&, std::string const&, PurchasePath);
    virtual void fireEventIAPRedeemResolved(std::string const&, std::string const&, std::string const&, IMinecraftEventing::PurchaseResult, PurchasePath);
    virtual void fireEventPurchaseAttempt(std::string const&, std::string const&, std::string const&, IMinecraftEventing::StoreType, PurchasePath);
    virtual void fireEventPurchaseResolved(std::string const&, std::string const&, std::string const&, IMinecraftEventing::StoreType, IMinecraftEventing::PurchaseResult, PurchasePath);
    virtual void fireEventIAPPurchaseFailure(std::string const&, unsigned short, std::string const&, PurchaseInfo const&);
    virtual void fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&);
    virtual void fireEventTreatmentsCleared();
    virtual void fireEventTreatmentsSet(std::vector<std::string, std::allocator<std::string>> const&);
    virtual void fireEventSetMultiplayerCorrelationId(Player *, std::string const&);
    virtual void fireEventGameSessionStart(Player *, IClientInstance &, Level &, std::string const&, int, std::string const&, std::string const&, bool);
    virtual void prepEventSearchCatalogRequest(SearchRequestTelemetry const&);
    virtual void fireEventSearchCatalogRequest(SearchRequestTelemetry const&);
    virtual void fireEventArmorStandItemEquipped(ArmorStand const&, ItemDescriptor const&);
    virtual void fireEventArmorStandPosed(ArmorStand const&);
    virtual void fireEventPlayerBounced(Player *, Block const&, int);
    virtual void fireEventSetValidForAchievements(Player *, bool);
    virtual void fireEventAchievementReceived(std::string const&, std::string const&, std::string const&);
    virtual void fireEventWorldLoaded(Player *, Level &, ResourcePackManager &, ResourcePacksInfoData &);
    virtual void fireMinecraftVersionLaunched(bool);
    virtual void fireMinecraftVersionInviteAccepted(bool, unsigned long);
    virtual void fireDayOneExperienceStateChanged(IMinecraftEventing::DayOneExperienceState, std::optional<unsigned int>, std::optional<unsigned long>);
    virtual void fireWorldConversionAttemptEvent(Legacy::WorldConversionReport const&);
    virtual void fireWorldConversionInitiatedEvent(std::string const&);
    virtual void fireLegacyWorldUploadEvent(Legacy::WorldConversionReport const&, bool, WorldConversionError);
    virtual void fireEventAssertFailed(std::string &);
    virtual void fireEventSessionCrashed(std::string const&, std::string const&);
    virtual void fireChatUsedEvent(unsigned int, bool);
    virtual void fireEventJoinByCode(std::string const&);
    virtual void fireEventBlockPlacedByCommand(Block const&, int);
    virtual void fireEventEntityDanced(int, int, unsigned char);
    virtual void fireEventDwellerDied(Actor &, ActorDamageSource const&, bool);
    virtual void fireEventDwellerRemoved(Actor &, bool);
    virtual void fireEventScriptLoaded(std::string const&, unsigned long);
    virtual void fireEventScriptRan(std::string const&, unsigned long, bool, bool);
    virtual void fireEventDevConsoleOpen();
    virtual void fireEventDevConsoleCommand(std::string const&);
    virtual void fireEventNpcPropertiesUpdated(Actor &, bool);
    virtual void fireEventBoardTextUpdated(ChalkboardBlockActor &);
    virtual void fireEventCameraUsed(bool);
    virtual void fireEventPortfolioExported(int, int);
    virtual void fireQuickPlayEvent();
    virtual void fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&);
    virtual void fireCourseButtonPressed(std::string const&, std::string const&);
    virtual void fireLessonActionTaken(std::string const&, std::string const&, std::string const&, IMinecraftEventing::EducationLessonAction);
    virtual void fireInAppCodeBuilderActivated(IMinecraftEventing::OpenCodeMethod);
    virtual void fireCodeCommandButtonPressed();
    virtual void fireIDESelected(std::string const&)const;
    virtual void fireEventEduResources()const;
    virtual void fireEventEduiOSPurchaseTransaction(TransactionStatus const&)const;
    virtual void fireEventEduOptionSet(Option const&)const;
    virtual void fireEventCodeBuilderClosed()const;
    virtual void fireEventEduServiceStatus(std::string const&, std::string const&, int, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const;
    virtual void fireEventWebviewDownload(std::string const&, WebviewDownloadInfo const&)const;
    virtual void fireEduServiceRequestFailed(std::string const&, std::string const&, std::string const&, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const;
    virtual void fireEventButtonPressed(gsl::basic_string_span<char const, -1l>, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const;
    virtual void fireEventWorldExported(long, unsigned long);
    virtual void fireEventControlRemappedByPlayer(std::string const&, RawInputType, int)const;
    virtual void fireEventDifficultySet(Difficulty, Difficulty);
    virtual void fireEventGameRulesUpdated(bool, bool, std::string const&);
    virtual void fireEventGameRulesUpdated(int, int, std::string const&);
    virtual void fireEventGameRulesUpdated(float, float, std::string const&);
    virtual void fireEventDefaultGameTypeChanged(GameType, GameType);
    virtual void fireEventConnectionFailed(IMinecraftEventing::ConnectionFailureReason);
    virtual void fireEventOfferRated(std::string const&, int, int, int, double);
    virtual void fireEventNewContentCheckCompleted(std::string const&, bool);
    virtual void fireEventHowToPlayTopicChanged(std::string const&, InputMode);
    virtual void fireEventApiInit(float, unsigned long);
    virtual void fireEventWorldFilesListed(unsigned long, unsigned long, unsigned long, unsigned long);
    virtual void fireEventLabTableCreated(int, int, int);
    virtual void fireEventPlayerMessageSay(std::string const&, std::string const&);
    virtual void fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&);
    virtual void fireEventPlayerMessageChat(std::string const&, std::string const&);
    virtual void fireEventPlayerMessageMe(std::string const&, std::string const&);
    virtual void fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&);
    virtual void fireEventRealmShared(std::string const&, IMinecraftEventing::ShareMode const&, Realms::RealmId const&);
    virtual void fireEventRealmMemberlistCleared(Realms::RealmId const&, int const&);
    virtual void fireEventRealmUrlGenerated(std::string const&, Realms::RealmId const&);
    virtual void fireEventStructureExport(glTFExportData const&, IMinecraftEventing::ExportOutcome, IMinecraftEventing::ExportStage)const;
    virtual void fireEventContentShared(std::string const&, std::string const&, IMinecraftEventing::ShareMode const&);
    virtual void fireEventStorageReport(std::string const&);
    virtual void fireEventStackLoaded(StackStats const&);
    virtual void fireEventUnknownBlockReceived(NewBlockID const&, unsigned short);
    virtual void fireEventSignInEdu(std::string const&, ADRole, IMinecraftEventing::EduSignInStage, std::string const&, std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> const&);
    virtual void fireEventPopupFiredEdu(std::string const&, std::string const&, std::string const&, std::string const&, ActiveDirectoryAction);
    virtual void fireEventAppConfigurationChanged();
    virtual void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&);
    virtual void fireEventTrialDeviceIdCorrelation(long, std::string const&, long, std::string const&);
    virtual void fireEventPushNotificationPermission(bool, std::string const&);
    virtual void fireEventPushNotificationReceived(PushNotificationMessage const&);
    virtual void fireEventPushNotificationOpened(std::string const&, std::string const&);
    virtual void fireEventUploadSkin(std::string const&, std::string const&);
    virtual void fireEventLicenseCheck(bool, ExtraLicenseData &);
    virtual void fireEventStorePromotionNotification(std::string const&);
    virtual void fireEventWorldGenerated(std::string const&, LevelSettings const&, bool);
    virtual void fireEventExperimentalGameplay(bool, bool);
    virtual void fireEventCopyWorldEducationEnabled();
    virtual void fireEventStoreOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&);
    virtual void fireEventStoreSearch(StoreSearchTelemetryData const&);
    virtual void fireEventSearchItemSelected(int, int, std::string const&, int, int);
    virtual void fireEventUgcDownloadStarted(std::string const&);
    virtual void fireEventUgcDownloadCompleted(std::string const&, bool);
    virtual void fireRealmConnectionEventRealmAPIRequest(IMinecraftEventing::RealmConnectionFlow);
    virtual void fireRealmConnectionEventRealmAPIResponse(IMinecraftEventing::RealmConnectionFlow, int);
    virtual void onUserSignIn(Social::XboxLiveUser &);
    virtual void onUserSignOut(Social::XboxLiveUser &);
    virtual void getSessionId();
    virtual void fireEventChunkLoaded(LevelChunk &);
    virtual void fireEventChunkUnloaded(LevelChunk &);
    virtual void fireEventChunkChanged(LevelChunk &);
    virtual void fireEventMultiplayerSessionUpdate(Level const*, Player const*);
    virtual void fireEventLevelDestruct();
    virtual void flagEventDeepLink();
    virtual void flagEventPlayerGameTypeDefault(bool);
    virtual void fireEventLevelDatLoadFailed(std::string const&, std::string const&, bool);
    virtual void fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool);
    virtual void fireEventPersonaItemPreviewed(std::string const&, std::string const&, unsigned int, unsigned int, IMinecraftEventing::PromotionType, bool, IMinecraftEventing::StoreType);
    virtual void fireEventPersonaSkinChanged(std::string const&, std::string const&, bool);
    virtual void fireEventPersonaAvatarUpdated(std::string const&, std::vector<std::string, std::allocator<std::string>> const&, std::vector const&, std::allocator<bool>);
    virtual void fireEventPersonaAvatarsListed(std::vector<std::string, std::allocator<std::string>> const&);
    virtual void fireEventPersonaInitalizationEvent(unsigned int, std::string const&, std::string const&);
    virtual void fireEventPersonaGeneralError(std::string const&);
    virtual void fireEventPersonaLoadingPieces(unsigned int, double);
    virtual void fireEventPersonaStillLoading(bool, bool, bool, bool, bool, bool, bool, bool);
    virtual void fireEventPersonaCreationFailed(std::string const&, std::string const&, bool, bool, std::string const&, std::string const&);
    virtual void fireEventPersonaXForgeResponses(std::vector<std::string, std::allocator<std::string>> const&, int);
    virtual void fireEventPersonaCategoryInformation(std::string const&);
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const&, std::string const&, std::string const&);
    virtual void fireEventFixedMarketplaceWorldUsingV2VillagersToUseV1();
    virtual void fireEventAccountTransferStateChanged(std::string const&, TransferState, std::string const&);
    virtual void fireStructureBlockAction(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*);
    virtual void fireStructureBlockRedstoneActivated(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*);
    virtual void fireStructureBlockLoadedInUnloadedChunks(unsigned int, BlockPos const&, BlockPos const&);

    MinecraftEventing(Core::Path const&);
    void init();
    void unregisterOptionsObserver();
    void fireEventGameTypeChanged(Player *, GameType, GameType);
    void fireEventHeartbeat();
    void fireEventBehaviorErrored(Player *, std::string);
    void fireEventBehaviorFailed(Player *, std::string);
    void fireEventPlayerMovementSettings(Player *);
    void fireEventPlayerMovementAnomalyDetected(Player *, MovementEventType, float, float, float, float, float);
    void fireEventPlayerMovementCorrected(Player *, float, float, bool, float, float, int);
    void fireEventPOIBlockUsageAttempt(Player *, std::string const&, MinecraftEventing::PoiEventBlockType);
    void fireEventPOIBlockUsed(Player *, std::string const&, MinecraftEventing::PoiEventBlockType);
    void fireEventBarrelBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType);
    void fireEventBellBlockUsed(Player *, std::string const&);
    void fireEventCampfireBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType);
    void fireEventCartographyBlockUsed(Player *, std::string const&, MapOutputType);
    void fireEventCauldronBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType);
    void fireEventComposterBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType);
    void fireEventGrindstoneBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType);
    void fireEventLecternBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType);
    void fireEventBlockBroken(Player *, Block const&, MinecraftEventing::BlockPlacementMethod, int);
    void fireEventBlockPlaced(Player *, Block const&, bool);
    void fireEventBlockFound(Player *, BlockPos const&);
    void fireEventCraftingSessionEnd(Player *);
    void fireEventCraftingSessionStart(Player *, unsigned int);
    void fireEventEndOfDay(Player *, Level &);
    void fireEventItemAcquired(Player *, ItemDescriptor const&, unsigned int, ItemAcquisitionMethod);
    void fireEventItemEquipped(Player *, ItemInstance const&, int);
    void fireEventItemCrafted(Player *, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool);
    void fireEventItemDestroyed(Player *, ItemDescriptor const&, unsigned int);
    void fireEventItemDropped(Player *, ItemDescriptor const&);
    void fireEventItemSmelted(Player *, ItemDescriptor const&, ItemDescriptor const&);
    void fireEventItemUsed(Player *, ItemDescriptor const&, ItemUseMethod);
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, ItemEnchants const&);
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, unsigned int, int);
    void fireEventItemNamed(Player *, ItemDescriptor const&);
    void fireEventTradeCompleted(Player *, Actor *, ItemDescriptor const&, ItemDescriptor const&, ItemInstance const&, int);
    void fireEventJukeboxUsed(Player *, ItemDescriptor const&);
    void fireEventMenuShown(Player *, unsigned int, unsigned int);
    void fireEventMobKilled(Player *, Actor *, Mob &, unsigned int, std::string const&, int);
    void fireEventBossKilled(Player *, int, long, int);
    void fireEventEntityInteracted(Player *, int, MinecraftEventing::InteractionType, int, unsigned char);
    void fireEventMobBorn(Player *, int, int, unsigned char);
    void fireEventAgentCommand(Player &, int, int, std::string const&, std::string const&, std::string const&);
    void fireEventAgentCreated(Player &);
    void fireEventPlayerTeleported(Player *, float, MinecraftEventing::TeleportationCause, int);
    void fireEventPlayerDied(Player *, int, int, int, bool);
    void fireEventPlayerSaved(Player *);
    void fireEventPortalBuilt(Player *, AutomaticID<Dimension, int>);
    void fireEventPortalUsed(Player *, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>);
    void fireEventPotionBrewed(Player *, ItemDescriptor const&, unsigned int);
    void fireEventCauldronUsed(Player *, short, unsigned int, short);
    void fireEventFishBucketed(Player *, int, int, int, bool);
    void fireEventSpecialMobBuilt(Player *, Mob &);
    void fireEventVehicleExited(Player *, unsigned int, unsigned long);
    void fireEventCaravanChanged(Mob &, int);
    void fireEventMobEffectChanged(Mob &, MobEffectInstance const&, MinecraftEventing::ChangeType);
    void fireRaidEvent(Player *, int, int, bool);
    void fireEventCommandBlockEdited(Player *, BaseCommandBlock const&, bool, CommandBlockMode, bool, bool);
    void _fireStructureBlockAction(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, bool, StructureTelemetryClientData const*);
    void fireEventBookEdited(Player *, ItemDescriptor const&, unsigned int);
    void fireEventBookImageImported(Player *);
    void fireEventBookCopied(Player *, ItemInstance const&);
    void fireEventBookExported(Player *, int, int);
    void fireEventSignedBookOpened(Player *, bool);
    void fireEventPatternAdded(Player *, ItemInstance const&);
    void fireEventPatternRemoved(Player *, int, int, int, int, int);
    void _generateWorldSessionId();
    void fireEventWorldUnloaded(Player *, LevelData const&, unsigned int);
    void fireEventAwardAchievement(Player *, MinecraftEventing::AchievementIds);
    void fireEventAwardTrophy(Player const*, unsigned int);
    void fireEventMultiplayerRoundStart(Player *, Level &, std::string const&, int, std::string const&, int, Realms::World const&);
    void fireEventMultiplayerRoundEnd(Player *, int);
    void fireEventSlashCommandExecuted(Player *, std::string const&, int, int, std::string const&);
    void fireEventCaravanChanged(Player *, int, int);
    void _getUserManagerConst()const;
    void fireEventFirstTimeClientOpen();
    void fireEventGameRulesLoaded(Player *, GameRules const&);
    void fireEventPlayerTransform(Player &);
    void fireEventPlayerJoin(Player &);
    void fireEventPlayerLeave(Player &);
    void fireEventPlayerMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    void fireEventItemInteracted(Player *, ItemInstance const&, MinecraftEventing::ItemInteractMethod);
    void _fireEventPackImportStage(ResourcePack const*, PackManifest const&, std::string const&, std::string const&, bool, bool);
    void addBehaviorPackData(Social::Events::Event &, BehaviorPackContents const&);
    void addResourcePackData(Social::Events::Event &, ResourcePackContents const&);
    void _addConversionReportData(Social::Events::Event &, mclc::ConversionReport const*);
    void _getAccountType(std::shared_ptr<Social::User>);
    void fireEventPetDied(Player *, bool, Actor *, ActorType, unsigned int);
    void _addCommonPurchaseEventProperties(Social::Events::Event &, std::string const&, std::string const&, std::string const&, PurchasePath)const;
};
