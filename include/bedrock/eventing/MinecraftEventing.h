#pragma once

#include "../../mce/UUID.h"
#include <memory>
#include "IMinecraftEventing.h"
#include <vector>
#include <optional>
#include <string>
#include <unordered_map>


class MinecraftEventing : IMinecraftEventing {

public:
    static long sMutex;
    static long mUseMethodMap;
    static long mAcquisitionMethodMap;

//  virtual void fireRealmConnectionEventStart(IMinecraftEventing::RealmConnectionFlow); //TODO: incomplete function definition
//  virtual void fireEventControlRemappedByPlayer(std::string const&, RawInputType, int)const; //TODO: incomplete function definition
    virtual void fireEventPersonaAvatarsListed(std::vector<std::string> const&);
//  virtual void fireStructureBlockAction(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*); //TODO: incomplete function definition
    virtual void fireEventPlayerMessageMe(std::string const&, std::string const&);
    virtual void fireEventSetValidForAchievements(Player *, bool);
//  virtual void fireClubsEngagementEvent(IMinecraftEventing::ClubsEngagementAction, IMinecraftEventing::ClubsEngagementTargetType, char const*, Realms::RealmId, std::string); //TODO: incomplete function definition
    virtual void fireEventPersonaInitalizationEvent(unsigned int, std::string const&, std::string const&);
//  virtual void fireEventEduiOSPurchaseTransaction(TransactionStatus const&)const; //TODO: incomplete function definition
    virtual void fireEventWorldFilesListed(unsigned long, unsigned long, unsigned long, unsigned long);
//  virtual void fireRealmConnectionEventGenericLambdaCalled(IMinecraftEventing::RealmConnectionFlow, IMinecraftEventing::RealmConnectionLambda, IMinecraftEventing::RealmConnectionResult); //TODO: incomplete function definition
    virtual void fireEventUgcDownloadStarted(std::string const&);
    virtual void fireEventGameplayTipShown(int, bool, std::string const&);
//  virtual void fireRealmConnectionEventRealmAPIResponse(IMinecraftEventing::RealmConnectionFlow, int); //TODO: incomplete function definition
    virtual void fireEventWorldImported(long, unsigned long);
//  virtual void fireEventConnectionFailed(IMinecraftEventing::ConnectionFailureReason); //TODO: incomplete function definition
//  virtual void fireEventStoreSearch(StoreSearchTelemetryData const&); //TODO: incomplete function definition
    virtual void stopDebugEventLoggingForAllListeners();
    virtual void fireEventAppUnpaused();
    virtual void removeTestRunIdTag();
    virtual void fireEventTreatmentPackRemoved(std::string);
    virtual void fireEventWorldGenerated(std::string const&, LevelSettings const&, bool);
    virtual void forceSendEvents();
    virtual void fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&);
    virtual void fireEventArmorStandPosed(ArmorStand const&);
//  virtual void fireEventDifficultySet(Difficulty, Difficulty); //TODO: incomplete function definition
    virtual void fireEventClientIdCreated(int);
    virtual void fireEventTreatmentPackDownloaded(std::string);
    virtual void fireIDESelected(std::string const&)const;
    virtual void fireEventTreatmentPackApplied(PackManifest const&);
    virtual void fireEventGameRulesUpdated(float, float, std::string const&);
//  virtual void fireEventAccountTransferStateChanged(std::string const&, TransferState, std::string const&); //TODO: incomplete function definition
    virtual void fireEventContentLogsInWorldSession(std::string const&, unsigned int, unsigned int);
//  virtual void fireEventOptionsUpdated(std::shared_ptr<Options>, InputMode, bool); //TODO: incomplete function definition
    virtual void fireEventCameraUsed(bool);
    virtual void setShouldHaveAchievementsEnabled(bool);
    virtual void fireEventPersonaCategoryInformation(std::string const&);
    virtual void getEventManager()const;
    virtual void fireEventPushNotificationPermission(bool, std::string const&);
    virtual void fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&);
    virtual void firePackSettingsEvent(PackSettings const&, PackManifest const&);
    virtual void fireEventReducerBlockEntered(ItemDescriptor const&);
    virtual void fireEventPlayerMessageChat(std::string const&, std::string const&);
//  virtual void fireEventFileTransmissionState(IMinecraftEventing::FileTransmissionDirection, IMinecraftEventing::FileTransmissionState, IMinecraftEventing::FileTransmissionType, std::string const&, unsigned long, double); //TODO: incomplete function definition
    virtual void fireEventPersonaSkinChanged(std::string const&, std::string const&, bool);
    virtual void getAchievementsAlwaysEnabled();
    virtual void fireEventDeviceAccountSuccess(bool, std::string const&);
//  virtual void fireEventContentShared(std::string const&, std::string const&, IMinecraftEventing::ShareMode const&); //TODO: incomplete function definition
    virtual void fireMinecraftVersionLaunched(bool);
    virtual void fireMinecraftVersionInviteAccepted(bool, unsigned long);
    virtual void getShouldHaveAchievementsEnabled();
    virtual void fireEventAppConfigurationChanged();
    virtual void fireEventRespawn(Player &, int);
//  virtual void fireEventIAPPurchaseResolved(std::string const&, std::string const&, Offer &, IMinecraftEventing::PurchaseResult, PurchasePath); //TODO: incomplete function definition
    virtual void fireEventDevConsoleOpen();
    virtual void fireEventAppPaused();
//  virtual void fireEventWebviewDownload(std::string const&, WebviewDownloadInfo const&)const; //TODO: incomplete function definition
    virtual void fireEventTrialDeviceIdCorrelation(long, std::string const&, long, std::string const&);
    virtual void fireEventPackImportedCompleted(ResourcePack const*, PackManifest const&, bool, std::string const&);
    virtual void fireEventStoreOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&);
//  virtual void fireEventLicenseCheck(bool, ExtraLicenseData &); //TODO: incomplete function definition
//  virtual void fireEventStartWorld(IMinecraftEventing::NetworkType, std::string const&, Social::MultiplayerServiceIdentifier); //TODO: incomplete function definition
    virtual void fireEventApiInit(float, unsigned long);
    virtual void flagEventPlayerGameTypeDefault(bool);
    virtual void fireEventPersonaStillLoading(bool, bool, bool, bool, bool, bool, bool, bool);
    virtual void fireEventPushNotificationOpened(std::string const&, std::string const&);
//  virtual void fireStructureBlockRedstoneActivated(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*); //TODO: incomplete function definition
    virtual std::string getSessionId();
//  virtual void fireServerConnectionEvent(IMinecraftEventing::ServerConnectionOutcome, unsigned int, double, std::string const&); //TODO: incomplete function definition
    virtual void fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool);
    virtual std::string getPlayerSessionId();
    virtual void fireEventPackImportStarted(PackManifest const&);
    virtual void fireEventOfferRated(std::string const&, int, int, int, double);
//  virtual void fireEventIAPRedeemAttempt(std::string const&, std::string const&, std::string const&, PurchasePath); //TODO: incomplete function definition
    virtual void fireEventEduOptionSet(Option const&)const;
    virtual void removeTestTelemetryTag();
    virtual void fireEventCopyWorldEducationEnabled();
    virtual void fireEventDwellerDied(Actor &, ActorDamageSource const&, bool);
//  virtual void fireEventHowToPlayTopicChanged(std::string const&, InputMode); //TODO: incomplete function definition
    virtual void fireEventIncognitoFailure(std::string const&, std::string const&);
    virtual void addListener(std::unique_ptr<Social::Events::IEventListener>);
    virtual void registerOptionsObserver(std::shared_ptr<Options>);
    virtual void fireEventNpcPropertiesUpdated(Actor &, bool);
//  virtual void fireEventPopupFiredEdu(std::string const&, std::string const&, std::string const&, std::string const&, ActiveDirectoryAction); //TODO: incomplete function definition
    virtual void fireEventHardwareInfo();
    virtual void fireEventPersonaAvatarUpdated(std::string const&, std::vector<std::string> const&, std::vector const&, std::allocator<bool>);
    virtual void fireEventPersonaGeneralError(std::string const&);
//  virtual void fireEventGameSessionStart(Player *, IClientInstance &, Level &, std::string const&, int, std::string const&, std::string const&, bool); //TODO: incomplete function definition
    virtual void fireEventTreatmentsSet(std::vector<std::string> const&);
    virtual void fireEventPortfolioExported(int, int);
    virtual void updateIsLegacyPlayer(bool);
    virtual void fireStructureBlockLoadedInUnloadedChunks(unsigned int, BlockPos const&, BlockPos const&);
//  virtual void onUserSignOut(Social::XboxLiveUser &); //TODO: incomplete function definition
    virtual void getPrimaryLocalUserId();
//  virtual void fireEventSearchCatalogRequest(SearchRequestTelemetry const&); //TODO: incomplete function definition
//  virtual void fireInAppCodeBuilderActivated(IMinecraftEventing::OpenCodeMethod); //TODO: incomplete function definition
//  virtual void fireCurrentInputUpdated(IClientInstance const&); //TODO: incomplete function definition
//  virtual void fireEventSplitScreenUpdated(IClientInstance const&); //TODO: incomplete function definition
//  virtual void prepEventSearchCatalogRequest(SearchRequestTelemetry const&); //TODO: incomplete function definition
    virtual void fireEventSessionCrashed(std::string const&, std::string const&);
    virtual void fireEventServerRespawnSearchTime(Player &, PlayerRespawnTelemetryData const&);
    virtual void fireWorldConversionInitiatedEvent(std::string const&);
    virtual void fireEventStorageReport(std::string const&);
    virtual void fireEventAchievementReceived(std::string const&, std::string const&, std::string const&);
//  virtual void fireEventEduServiceStatus(std::string const&, std::string const&, int, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const; //TODO: incomplete function definition
    virtual void fireEventUnknownBlockReceived(NewBlockID const&, unsigned short);
    virtual void updateEditionType();
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const&, std::string const&, std::string const&);
    virtual void fireEventChatSettingsUpdated(Player const*, std::vector<Social::Events::Property> const&)const;
//  virtual void fireEventSignOutOfXboxLive(Social::XboxLiveUser const&); //TODO: incomplete function definition
    virtual void fireEventNewUserPackDetected(PackManifest const&, bool, std::string const&, bool);
    virtual void fireEventAppSuspended(bool);
//  virtual void fireClubsOpenFeedScreenEvent(IMinecraftEventing::ClubsFeedScreenSource, Realms::RealmId, std::string); //TODO: incomplete function definition
    virtual void fireEventPopupClosed(std::string const&)const;
    virtual void fireEventBoardTextUpdated(ChalkboardBlockActor &);
    virtual void fireEventPushNotificationReceived(PushNotificationMessage const&);
//  virtual void fireEventIAPPurchaseAttempt(std::string const&, std::string const&, Offer &, PurchasePath); //TODO: incomplete function definition
    virtual void fireEventExperimentalGameplay(bool, bool);
    virtual void fireEventStartClient(std::string const&, std::string const&, std::string const&, bool);
    virtual void fireEventChunkUnloaded(LevelChunk &);
    virtual void fireEventUgcDownloadCompleted(std::string const&, bool);
//  virtual void fireEventIAPPurchaseFailure(std::string const&, unsigned short, std::string const&, PurchaseInfo const&); //TODO: incomplete function definition
//  virtual void fireEventIAPRedeemResolved(std::string const&, std::string const&, std::string const&, IMinecraftEventing::PurchaseResult, PurchasePath); //TODO: incomplete function definition
//  virtual void fireEventRealmUrlGenerated(std::string const&, Realms::RealmId const&); //TODO: incomplete function definition
    virtual void fireEventScriptRan(std::string const&, unsigned long, bool, bool);
    virtual void fireEventUploadSkin(std::string const&, std::string const&);
    virtual void fireEventMultiplayerSessionUpdate(Level const*, Player const*);
//  virtual void fireEventPurchaseAttempt(std::string const&, std::string const&, std::string const&, IMinecraftEventing::StoreType, PurchasePath); //TODO: incomplete function definition
//  virtual void fireEventPerformanceMetrics(ProfilerLiteTelemetry const&); //TODO: incomplete function definition
    virtual void fireEventEntitlementListInfo(std::vector<ContentIdentity> &, bool);
    virtual void fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&);
    virtual void fireEventStorePromotionNotification(std::string const&);
    ~MinecraftEventing();
    virtual void fireEventCodeBuilderClosed()const;
//  virtual void fireEventStructureExport(glTFExportData const&, IMinecraftEventing::ExportOutcome, IMinecraftEventing::ExportStage)const; //TODO: incomplete function definition
    virtual void fireEventRespondedToAcceptContent(ResourcePacksInfoData const&, bool);
    virtual void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&);
    virtual void fireEventLevelDestruct();
    virtual void fireEventLevelDatLoadFailed(std::string const&, std::string const&, bool);
    virtual void fireEventGameRulesUpdated(int, int, std::string const&);
    virtual void fireEventScriptLoaded(std::string const&, unsigned long);
    virtual void fireEventArmorStandItemEquipped(ArmorStand const&, ItemDescriptor const&);
//  virtual void fireDayOneExperienceStateChanged(IMinecraftEventing::DayOneExperienceState, std::optional<unsigned int>, std::optional<unsigned long>); //TODO: incomplete function definition
    virtual void fireEventAppResumed();
    virtual void fireEventPackHashChanged(PackManifest const&);
//  virtual void fireEventRealmMemberlistCleared(Realms::RealmId const&, int const&); //TODO: incomplete function definition
    virtual void fireEventPackPlayed(PackInstance const&, unsigned int);
    virtual void fireEventEntitySpawned(Player *, int, unsigned int);
    virtual void setTestRunIdTag(int);
    virtual void fireEventTreatmentsCleared();
    virtual void fireChatUsedEvent(unsigned int, bool);
    virtual void fireEventChunkChanged(LevelChunk &);
//  virtual void fireEventElementConstructorUsed(int, int, IMinecraftEventing::ElementConstructorUseType); //TODO: incomplete function definition
//  virtual void fireEventSignInToXboxLive(Social::XboxLiveUser const&, bool, IMinecraftEventing::SignInStage); //TODO: incomplete function definition
    virtual void fireEventBlockPlacedByCommand(Block const&, int);
    virtual void fireEventLabTableCreated(int, int, int);
    virtual void fireEventSearchItemSelected(int, int, std::string const&, int, int);
    virtual void updateIsTrial(bool)const;
    virtual void fireEventWorldExported(long, unsigned long);
//  virtual void fireEventJoinCanceled(LoadingState); //TODO: incomplete function definition
    virtual void fireEventScreenChanged(unsigned int const&, std::string const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&);
//  virtual void fireEventDeviceAccountFailure(IMinecraftEventing::SignInStage, IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::string const&); //TODO: incomplete function definition
    virtual void fireEventFloatPropertyList(std::string const&, std::vector<std::pair<std::string, float>> const&);
    virtual void fireEventPromotionNotificationClicked(std::string const&);
    virtual void setTestTelemetryTag(char const*);
    virtual void fireEventAssertFailed(std::string &);
//  virtual void fireWorldConversionAttemptEvent(Legacy::WorldConversionReport const&); //TODO: incomplete function definition
    virtual void fireEventPlayerMessageSay(std::string const&, std::string const&);
//  virtual void fireEventRealmShared(std::string const&, IMinecraftEventing::ShareMode const&, Realms::RealmId const&); //TODO: incomplete function definition
    virtual void fireEventChunkLoaded(LevelChunk &);
    virtual void fireEventPackUpgradeAttempt(PackManifest const&, PackReport const&);
    virtual void fireEventPersonaCreationFailed(std::string const&, std::string const&, bool, bool, std::string const&, std::string const&);
//  virtual void fireLessonActionTaken(std::string const&, std::string const&, std::string const&, IMinecraftEventing::EducationLessonAction); //TODO: incomplete function definition
    virtual void updatePrimaryLocalUserId(unsigned int const&);
//  virtual void fireRealmConnectionEventRealmAPIRequest(IMinecraftEventing::RealmConnectionFlow); //TODO: incomplete function definition
    virtual void fireEventWorldLoaded(Player *, Level &, ResourcePackManager &, ResourcePacksInfoData &);
    virtual void fireEventStorage(int, std::string const&);
//  virtual void fireEduServiceRequestFailed(std::string const&, std::string const&, std::string const&, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const; //TODO: incomplete function definition
    virtual void fireGlobalResourcePackCrashRecovery(PackInstance &, mce::UUID, int);
    virtual void tick();
//  virtual void fireEventDefaultGameTypeChanged(GameType, GameType); //TODO: incomplete function definition
//  virtual void fireEventSignInEdu(std::string const&, ADRole, IMinecraftEventing::EduSignInStage, std::string const&, std::vector<std::pair<std::string, std::string>> const&); //TODO: incomplete function definition
    virtual void fireEventPersonaXForgeResponses(std::vector<std::string> const&, int);
    virtual void fireEventPlayerTravelled(Player *, float);
    virtual void fireEventStackLoaded(StackStats const&);
    virtual void fireEventNewContentCheckCompleted(std::string const&, bool);
    virtual void fireEventEduResources()const;
//  virtual void fireLegacyWorldUploadEvent(Legacy::WorldConversionReport const&, bool, WorldConversionError); //TODO: incomplete function definition
    virtual void fireEventOnSuccessfulClientLogin(Level const*);
    virtual void fireEventCompoundCreatorCreated(int, int);
    virtual void fireEventMultiplayerConnectionStateChanged(bool, std::string const&, std::string const&, unsigned int, unsigned int, unsigned int, std::string const&);
    virtual void fireEventJoinByCode(std::string const&);
    virtual void fireQuickPlayEvent();
//  virtual void fireEventButtonPressed(gsl::basic_string_span<char const, -1l>, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const; //TODO: incomplete function definition
    virtual void fireCourseButtonPressed(std::string const&, std::string const&);
    virtual void fireEventGameRulesUpdated(bool, bool, std::string const&);
    virtual void fireEventPersonaLoadingPieces(unsigned int, double);
    virtual void fireEventDevConsoleCommand(std::string const&);
    virtual void fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&);
    virtual void flagEventDeepLink();
//  virtual void onUserSignIn(Social::XboxLiveUser &); //TODO: incomplete function definition
    virtual void fireEventEntityDanced(int, int, unsigned char);
    virtual void fireEventFixedMarketplaceWorldUsingV2VillagersToUseV1();
    virtual void fireTextToSpeechToggled(bool, bool);
    virtual void fireEventVideoPlayed(std::string const&, std::string const&);
//  virtual void fireEventPersonaItemPreviewed(std::string const&, std::string const&, unsigned int, unsigned int, IMinecraftEventing::PromotionType, bool, IMinecraftEventing::StoreType); //TODO: incomplete function definition
//  virtual void fireEventPurchaseResolved(std::string const&, std::string const&, std::string const&, IMinecraftEventing::StoreType, IMinecraftEventing::PurchaseResult, PurchasePath); //TODO: incomplete function definition
    virtual void fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&);
    virtual void fireEventSetMultiplayerCorrelationId(Player *, std::string const&);
    virtual void fireCodeCommandButtonPressed();
    virtual void fireEventDwellerRemoved(Actor &, bool);
//  virtual void init(Social::IUserManager &); //TODO: incomplete function definition
    virtual void fireEventPlayerBounced(Player *, Block const&, int);
    MinecraftEventing(Core::Path const&);
//  void fireEventItemAcquired(Player *, ItemDescriptor const&, unsigned int, ItemAcquisitionMethod); //TODO: incomplete function definition
    void fireEventMobKilled(Player *, Actor *, Mob &, unsigned int, std::string const&, int);
    void fireEventBossKilled(Player *, int, long, int);
    void unregisterOptionsObserver();
//  void fireEventPortalBuilt(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void _getUserManagerConst()const;
//  void fireEventPlayerMovementAnomalyDetected(Player *, MovementEventType, float, float, float, float, float); //TODO: incomplete function definition
    void _getAccountType(std::shared_ptr<Social::User>);
//  void fireEventEntityInteracted(Player *, int, MinecraftEventing::InteractionType, int, unsigned char); //TODO: incomplete function definition
    void fireEventPlayerDied(Player *, int, int, int, bool);
    void fireEventBlockPlaced(Player *, Block const&, bool);
//  void fireEventPortalUsed(Player *, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  void fireEventLecternBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
    void fireEventPatternAdded(Player *, ItemInstance const&);
    void fireEventVehicleExited(Player *, unsigned int, unsigned long);
//  void fireEventCommandBlockEdited(Player *, BaseCommandBlock const&, bool, CommandBlockMode, bool, bool); //TODO: incomplete function definition
    void _fireEventPackImportStage(ResourcePack const*, PackManifest const&, std::string const&, std::string const&, bool, bool);
    void fireEventTradeCompleted(Player *, Actor *, ItemDescriptor const&, ItemDescriptor const&, ItemInstance const&, int);
    void fireEventPlayerJoin(Player &);
    void _generateWorldSessionId();
//  std::string _convertPromotionTypeToString(IMinecraftEventing::PromotionType)const; //TODO: incomplete function definition
    void fireEventPatternRemoved(Player *, int, int, int, int, int);
//  void fireEventMultiplayerRoundStart(Player *, Level &, std::string const&, int, std::string const&, int, Realms::World const&); //TODO: incomplete function definition
    void fireEventItemNamed(Player *, ItemDescriptor const&);
    void fireEventPlayerLeave(Player &);
    void fireEventBellBlockUsed(Player *, std::string const&);
//  void fireEventBlockBroken(Player *, Block const&, MinecraftEventing::BlockPlacementMethod, int); //TODO: incomplete function definition
    void fireEventWorldUnloaded(Player *, LevelData const&, unsigned int);
    void fireEventPotionBrewed(Player *, ItemDescriptor const&, unsigned int);
    void fireEventPlayerMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    void fireEventBookEdited(Player *, ItemDescriptor const&, unsigned int);
//  void fireEventItemUsed(Player *, ItemDescriptor const&, ItemUseMethod); //TODO: incomplete function definition
    void fireEventItemEquipped(Player *, ItemInstance const&, int);
    void fireEventItemDropped(Player *, ItemDescriptor const&);
    void fireEventSlashCommandExecuted(Player *, std::string const&, int, int, std::string const&);
//  void _fireStructureBlockAction(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, bool, StructureTelemetryClientData const*); //TODO: incomplete function definition
//  std::string _convertPurchasePathToString(PurchasePath)const; //TODO: incomplete function definition
    void fireEventCauldronUsed(Player *, short, unsigned int, short);
    void fireEventCaravanChanged(Mob &, int);
//  void fireEventGrindstoneBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
//  void fireEventPOIBlockUsageAttempt(Player *, std::string const&, MinecraftEventing::PoiEventBlockType); //TODO: incomplete function definition
    void fireEventItemDestroyed(Player *, ItemDescriptor const&, unsigned int);
//  void fireEventPOIBlockUsed(Player *, std::string const&, MinecraftEventing::PoiEventBlockType); //TODO: incomplete function definition
    void fireEventPlayerTransform(Player &);
//  void _addConversionReportData(Social::Events::Event &, mclc::ConversionReport const*); //TODO: incomplete function definition
    void fireEventPlayerMovementCorrected(Player *, float, float, bool, float, float, int);
    void fireEventMultiplayerRoundEnd(Player *, int);
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, unsigned int, int);
//  void fireEventGameTypeChanged(Player *, GameType, GameType); //TODO: incomplete function definition
    void fireEventBookExported(Player *, int, int);
    void addResourcePackData(Social::Events::Event &, ResourcePackContents const&);
    void fireEventBookImageImported(Player *);
    void fireEventBehaviorErrored(Player *, std::string);
    void fireEventItemSmelted(Player *, ItemDescriptor const&, ItemDescriptor const&);
    void fireEventMenuShown(Player *, unsigned int, unsigned int);
    void fireEventMobBorn(Player *, int, int, unsigned char);
    void fireEventSpecialMobBuilt(Player *, Mob &);
    std::string _getUserXUID(unsigned int)const;
    void fireEventHeartbeat();
    void fireRaidEvent(Player *, int, int, bool);
//  void fireEventCartographyBlockUsed(Player *, std::string const&, MapOutputType); //TODO: incomplete function definition
    void fireEventEndOfDay(Player *, Level &);
    void fireEventBehaviorFailed(Player *, std::string);
    void fireEventCraftingSessionEnd(Player *);
    void fireEventAwardTrophy(Player const*, unsigned int);
    void fireEventCaravanChanged(Player *, int, int);
    void fireEventCraftingSessionStart(Player *, unsigned int);
//  void fireEventPlayerTeleported(Player *, float, MinecraftEventing::TeleportationCause, int); //TODO: incomplete function definition
//  void _addCommonPurchaseEventProperties(Social::Events::Event &, std::string const&, std::string const&, std::string const&, PurchasePath)const; //TODO: incomplete function definition
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, ItemEnchants const&);
    void init();
    void fireEventItemCrafted(Player *, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool);
    void fireEventGameRulesLoaded(Player *, GameRules const&);
//  void fireEventBarrelBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
    void fireEventJukeboxUsed(Player *, ItemDescriptor const&);
//  void fireEventComposterBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
    void fireEventAgentCommand(Player &, int, int, std::string const&, std::string const&, std::string const&);
//  void fireEventCauldronBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
//  void fireEventItemInteracted(Player *, ItemInstance const&, MinecraftEventing::ItemInteractMethod); //TODO: incomplete function definition
    void fireEventFishBucketed(Player *, int, int, int, bool);
    void fireEventBookCopied(Player *, ItemInstance const&);
    void addBehaviorPackData(Social::Events::Event &, BehaviorPackContents const&);
//  void fireEventMobEffectChanged(Mob &, MobEffectInstance const&, MinecraftEventing::ChangeType); //TODO: incomplete function definition
//  std::string _convertStoreTypeToString(IMinecraftEventing::StoreType)const; //TODO: incomplete function definition
    void fireEventFirstTimeClientOpen();
    void fireEventBlockFound(Player *, BlockPos const&);
    void fireEventPlayerMovementSettings(Player *);
//  void fireEventPetDied(Player *, bool, Actor *, ActorType, unsigned int); //TODO: incomplete function definition
    void fireEventAgentCreated(Player &);
    void fireEventPlayerSaved(Player *);
//  void fireEventCampfireBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
//  void fireEventAwardAchievement(Player *, MinecraftEventing::AchievementIds); //TODO: incomplete function definition
    void fireEventSignedBookOpened(Player *, bool);
};
