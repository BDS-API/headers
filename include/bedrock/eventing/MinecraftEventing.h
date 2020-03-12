#pragma once

#include "../../unmapped/PackReport.h"
#include "../util/BlockPos.h"
#include <unordered_map>
#include "../../unmapped/Property.h"
#include "../block/actor/ChalkboardBlockActor.h"
#include "../actor/damagesource/ActorDamageSource.h"
#include "../../unmapped/PushNotificationMessage.h"
#include "../pack/PackManifest.h"
#include <memory>
#include "../../core/Path.h"
#include "../item/ItemInstance.h"
#include <string>
#include "../resourcepack/ResourcePack.h"
#include "../pack/ResourcePackManager.h"
#include "../actor/Actor.h"
#include "../../unmapped/StructureTelemetryClientData.h"
#include "../../unmapped/PlayerRespawnTelemetryData.h"
#include <functional>
#include "../actor/ArmorStand.h"
#include "../../unmapped/Block.h"
#include "../level/LevelData.h"
#include "../level/Level.h"
#include "../../unmapped/GameRules.h"
#include "../resourcepack/ResourcePacksInfoData.h"
#include "../level/LevelSettings.h"
#include "../../unmapped/Option.h"
#include "../../unmapped/NewBlockID.h"
#include "../level/LevelChunk.h"
#include "../../unmapped/StructureEditorData.h"
#include "../../mce/UUID.h"
#include "../../unmapped/MobEffectInstance.h"
#include <vector>
#include "../../unmapped/PackSettings.h"
#include "IMinecraftEventing.h"
#include "../../unmapped/StackStats.h"
#include "../../unmapped/BehaviorPackContents.h"
#include <optional>
#include <utility>
#include "../item/unmapped/ItemDescriptor.h"
#include "../../unmapped/ContentIdentity.h"
#include "../../unmapped/PackInstance.h"
#include "../../unmapped/BaseCommandBlock.h"
#include "../item/unmapped/ItemEnchants.h"
#include "../resourcepack/ResourcePackContents.h"
#include "../../unmapped/Dimension.h"
#include "../actor/Player.h"
#include "../actor/Mob.h"
#include "../../unmapped/Event.h"


class MinecraftEventing : IMinecraftEventing {

public:
    static long sMutex;
    static long mUseMethodMap;
    static long mAcquisitionMethodMap;

    virtual void fireEventStorage(int, std::string const&);
    virtual void fireEventLevelDestruct();
    virtual void fireEventStorePromotionNotification(std::string const&);
    virtual void fireEventTreatmentPackRemoved(std::string);
//  virtual void fireStructureBlockRedstoneActivated(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*); //TODO: incomplete function definition
    virtual void fireEventChunkLoaded(LevelChunk &);
    virtual void fireEventReducerBlockEntered(ItemDescriptor const&);
    virtual std::string getPlayerSessionId();
    virtual void fireEventPlayerMessageChat(std::string const&, std::string const&);
    virtual void fireEventServerRespawnSearchTime(Player &, PlayerRespawnTelemetryData const&);
    virtual void fireEventPackImportStarted(PackManifest const&);
    virtual void fireEventTreatmentPackDownloaded(std::string);
    virtual void fireEventAppResumed();
//  virtual void fireEventJoinCanceled(LoadingState); //TODO: incomplete function definition
    virtual void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&);
//  virtual void fireEventDifficultySet(Difficulty, Difficulty); //TODO: incomplete function definition
    virtual void fireEventNewContentCheckCompleted(std::string const&, bool);
    virtual void setTestTelemetryTag(char const*);
    virtual void fireEventPopupClosed(std::string const&)const;
//  virtual void fireEventRealmShared(std::string const&, IMinecraftEventing::ShareMode const&, Realms::RealmId const&); //TODO: incomplete function definition
    virtual void updateIsLegacyPlayer(bool);
    virtual void fireTextToSpeechToggled(bool, bool);
    virtual void fireEventWorldExported(long, unsigned long);
    virtual void fireEventTreatmentsSet(std::vector<std::string> const&);
    virtual void fireEventScriptRan(std::string const&, unsigned long, bool, bool);
    virtual void fireEventUgcDownloadCompleted(std::string const&, bool);
    virtual void fireQuickPlayEvent();
    virtual void updatePrimaryLocalUserId(unsigned int const&);
    virtual void fireEventGameplayTipShown(int, bool, std::string const&);
    virtual void fireEventContentLogsInWorldSession(std::string const&, unsigned int, unsigned int);
    virtual void fireEventPersonaStillLoading(bool, bool, bool, bool, bool, bool, bool, bool);
    virtual void fireEventOnSuccessfulClientLogin(Level const*);
    virtual void fireEventWorldLoaded(Player *, Level &, ResourcePackManager &, ResourcePacksInfoData &);
    virtual void fireEventCompoundCreatorCreated(int, int);
    virtual void fireEventChunkUnloaded(LevelChunk &);
    virtual void getEventManager()const;
    virtual void fireEventAchievementReceived(std::string const&, std::string const&, std::string const&);
    virtual void fireEventApiInit(float, unsigned long);
    virtual void fireEventWorldFilesListed(unsigned long, unsigned long, unsigned long, unsigned long);
    virtual void fireStructureBlockLoadedInUnloadedChunks(unsigned int, BlockPos const&, BlockPos const&);
//  virtual void fireEventIAPRedeemAttempt(std::string const&, std::string const&, std::string const&, PurchasePath); //TODO: incomplete function definition
    virtual void fireEventGameRulesUpdated(int, int, std::string const&);
    virtual void fireEventDwellerRemoved(Actor &, bool);
    virtual void fireEventArmorStandItemEquipped(ArmorStand const&, ItemDescriptor const&);
    virtual void fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool);
//  virtual void fireLessonActionTaken(std::string const&, std::string const&, std::string const&, IMinecraftEventing::EducationLessonAction); //TODO: incomplete function definition
    virtual void stopDebugEventLoggingForAllListeners();
    virtual void fireEventPlayerBounced(Player *, Block const&, int);
//  virtual void init(Social::IUserManager &); //TODO: incomplete function definition
    virtual void fireEventPersonaInitalizationEvent(unsigned int, std::string const&, std::string const&);
    virtual void fireEventPersonaCategoryInformation(std::string const&);
    virtual void fireEventExperimentalGameplay(bool, bool);
    virtual void fireEventVideoPlayed(std::string const&, std::string const&);
    virtual void fireEventEduResources()const;
    virtual void fireEventTreatmentsCleared();
//  virtual void fireEventRealmMemberlistCleared(Realms::RealmId const&, int const&); //TODO: incomplete function definition
    virtual void fireEventSearchItemSelected(int, int, std::string const&, int, int);
    virtual void fireEventScriptLoaded(std::string const&, unsigned long);
    virtual void fireGlobalResourcePackCrashRecovery(PackInstance &, mce::UUID, int);
    virtual void fireEventArmorStandPosed(ArmorStand const&);
    virtual void setShouldHaveAchievementsEnabled(bool);
//  virtual void fireEventOptionsUpdated(std::shared_ptr<Options>, InputMode, bool); //TODO: incomplete function definition
    virtual void fireEventMultiplayerConnectionStateChanged(bool, std::string const&, std::string const&, unsigned int, unsigned int, unsigned int, std::string const&);
    virtual void fireEventChunkChanged(LevelChunk &);
//  virtual void fireEventSignInEdu(std::string const&, ADRole, IMinecraftEventing::EduSignInStage, std::string const&, std::vector<std::pair<std::string, std::string>> const&); //TODO: incomplete function definition
//  virtual void fireEventPopupFiredEdu(std::string const&, std::string const&, std::string const&, std::string const&, ActiveDirectoryAction); //TODO: incomplete function definition
    virtual void fireEventOfferRated(std::string const&, int, int, int, double);
    virtual void fireEventPersonaXForgeResponses(std::vector<std::string> const&, int);
//  virtual void fireLegacyWorldUploadEvent(Legacy::WorldConversionReport const&, bool, WorldConversionError); //TODO: incomplete function definition
    virtual void fireEventPackPlayed(PackInstance const&, unsigned int);
//  virtual void fireInAppCodeBuilderActivated(IMinecraftEventing::OpenCodeMethod); //TODO: incomplete function definition
//  virtual void fireEventButtonPressed(gsl::basic_string_span<char const, -1l>, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const; //TODO: incomplete function definition
    virtual void fireEventCopyWorldEducationEnabled();
//  virtual void fireEventControlRemappedByPlayer(std::string const&, RawInputType, int)const; //TODO: incomplete function definition
    virtual void fireEventTrialDeviceIdCorrelation(long, std::string const&, long, std::string const&);
    virtual void fireEventPlayerTravelled(Player *, float);
    virtual void fireEventEduOptionSet(Option const&)const;
//  virtual void fireRealmConnectionEventRealmAPIRequest(IMinecraftEventing::RealmConnectionFlow); //TODO: incomplete function definition
//  virtual void fireEventSignOutOfXboxLive(Social::XboxLiveUser const&); //TODO: incomplete function definition
    virtual void fireEventPackUpgradeAttempt(PackManifest const&, PackReport const&);
//  virtual void fireEventIAPRedeemResolved(std::string const&, std::string const&, std::string const&, IMinecraftEventing::PurchaseResult, PurchasePath); //TODO: incomplete function definition
//  virtual void fireClubsOpenFeedScreenEvent(IMinecraftEventing::ClubsFeedScreenSource, Realms::RealmId, std::string); //TODO: incomplete function definition
    virtual void updateIsTrial(bool)const;
//  virtual void fireEventDeviceAccountFailure(IMinecraftEventing::SignInStage, IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::string const&); //TODO: incomplete function definition
//  virtual void fireEventPersonaItemPreviewed(std::string const&, std::string const&, unsigned int, unsigned int, IMinecraftEventing::PromotionType, bool, IMinecraftEventing::StoreType); //TODO: incomplete function definition
//  virtual void fireEventStructureExport(glTFExportData const&, IMinecraftEventing::ExportOutcome, IMinecraftEventing::ExportStage)const; //TODO: incomplete function definition
    virtual void fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&);
    virtual void fireEventGameRulesUpdated(float, float, std::string const&);
    virtual void getPrimaryLocalUserId();
    virtual void fireEventIncognitoFailure(std::string const&, std::string const&);
    virtual void fireEventPortfolioExported(int, int);
    virtual void fireEventWorldGenerated(std::string const&, LevelSettings const&, bool);
    virtual void getShouldHaveAchievementsEnabled();
//  virtual void fireStructureBlockAction(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*); //TODO: incomplete function definition
//  virtual void fireCurrentInputUpdated(IClientInstance const&); //TODO: incomplete function definition
    virtual void flagEventPlayerGameTypeDefault(bool);
//  virtual void fireWorldConversionAttemptEvent(Legacy::WorldConversionReport const&); //TODO: incomplete function definition
    virtual void fireEventBlockPlacedByCommand(Block const&, int);
    virtual void fireEventSessionCrashed(std::string const&, std::string const&);
    virtual void fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&);
    virtual void fireEventUploadSkin(std::string const&, std::string const&);
    virtual void fireEventRespondedToAcceptContent(ResourcePacksInfoData const&, bool);
//  virtual void onUserSignIn(Social::XboxLiveUser &); //TODO: incomplete function definition
//  virtual void fireEventSplitScreenUpdated(IClientInstance const&); //TODO: incomplete function definition
    virtual void fireEventPackHashChanged(PackManifest const&);
//  virtual void fireEventIAPPurchaseAttempt(std::string const&, std::string const&, Offer &, PurchasePath); //TODO: incomplete function definition
    virtual void fireEventSetValidForAchievements(Player *, bool);
    virtual void fireEventGameRulesUpdated(bool, bool, std::string const&);
    virtual void fireEventPersonaSkinChanged(std::string const&, std::string const&, bool);
    virtual void fireEventJoinByCode(std::string const&);
    virtual void fireEventBoardTextUpdated(ChalkboardBlockActor &);
//  virtual void fireEventIAPPurchaseResolved(std::string const&, std::string const&, Offer &, IMinecraftEventing::PurchaseResult, PurchasePath); //TODO: incomplete function definition
    virtual void fireEventAppUnpaused();
    virtual void fireEventDevConsoleCommand(std::string const&);
    virtual void fireEventDwellerDied(Actor &, ActorDamageSource const&, bool);
//  virtual void fireEventStoreSearch(StoreSearchTelemetryData const&); //TODO: incomplete function definition
    virtual void fireEventUnknownBlockReceived(NewBlockID const&, unsigned short);
    virtual void fireEventAppConfigurationChanged();
    virtual void fireEventLevelDatLoadFailed(std::string const&, std::string const&, bool);
    virtual void fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&);
    virtual void fireEventUgcDownloadStarted(std::string const&);
    virtual void fireEventLabTableCreated(int, int, int);
    virtual void fireEventHardwareInfo();
    virtual void removeTestTelemetryTag();
//  virtual void fireServerConnectionEvent(IMinecraftEventing::ServerConnectionOutcome, unsigned int, double, std::string const&); //TODO: incomplete function definition
//  virtual void fireClubsEngagementEvent(IMinecraftEventing::ClubsEngagementAction, IMinecraftEventing::ClubsEngagementTargetType, char const*, Realms::RealmId, std::string); //TODO: incomplete function definition
    virtual void fireEventStartClient(std::string const&, std::string const&, std::string const&, bool);
    virtual void fireWorldConversionInitiatedEvent(std::string const&);
    virtual void fireEventPlayerMessageMe(std::string const&, std::string const&);
    virtual void fireEventPersonaCreationFailed(std::string const&, std::string const&, bool, bool, std::string const&, std::string const&);
    virtual void fireCourseButtonPressed(std::string const&, std::string const&);
    virtual void fireEventNpcPropertiesUpdated(Actor &, bool);
    virtual void fireEventAppSuspended(bool);
//  virtual void fireEventGameSessionStart(Player *, IClientInstance &, Level &, std::string const&, int, std::string const&, std::string const&, bool); //TODO: incomplete function definition
    virtual void fireEventEntitlementListInfo(std::vector<ContentIdentity> &, bool);
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const&, std::string const&, std::string const&);
    virtual void flagEventDeepLink();
//  virtual void fireRealmConnectionEventRealmAPIResponse(IMinecraftEventing::RealmConnectionFlow, int); //TODO: incomplete function definition
    virtual void fireEventFixedMarketplaceWorldUsingV2VillagersToUseV1();
    virtual void updateEditionType();
//  virtual void fireEventDefaultGameTypeChanged(GameType, GameType); //TODO: incomplete function definition
//  virtual void fireEventHowToPlayTopicChanged(std::string const&, InputMode); //TODO: incomplete function definition
//  virtual void onUserSignOut(Social::XboxLiveUser &); //TODO: incomplete function definition
    virtual void forceSendEvents();
    virtual void fireEventMultiplayerSessionUpdate(Level const*, Player const*);
    virtual void fireEventSetMultiplayerCorrelationId(Player *, std::string const&);
    ~MinecraftEventing();
    virtual void fireCodeCommandButtonPressed();
    virtual void fireMinecraftVersionLaunched(bool);
    virtual void fireEventNewUserPackDetected(PackManifest const&, bool, std::string const&, bool);
//  virtual void fireRealmConnectionEventStart(IMinecraftEventing::RealmConnectionFlow); //TODO: incomplete function definition
    virtual void removeTestRunIdTag();
    virtual void fireEventPersonaGeneralError(std::string const&);
    virtual void fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&);
    virtual void fireEventPushNotificationPermission(bool, std::string const&);
//  virtual void fireEventAccountTransferStateChanged(std::string const&, TransferState, std::string const&); //TODO: incomplete function definition
//  virtual void fireEventIAPPurchaseFailure(std::string const&, unsigned short, std::string const&, PurchaseInfo const&); //TODO: incomplete function definition
    virtual void fireChatUsedEvent(unsigned int, bool);
    virtual void tick();
    virtual void fireEventDevConsoleOpen();
    virtual void fireEventTreatmentPackApplied(PackManifest const&);
    virtual void fireEventFloatPropertyList(std::string const&, std::vector<std::pair<std::string, float>> const&);
//  virtual void addListener(std::unique_ptr<Social::Events::IEventListener>); //TODO: incomplete function definition
    virtual void fireEventAssertFailed(std::string &);
//  virtual void prepEventSearchCatalogRequest(SearchRequestTelemetry const&); //TODO: incomplete function definition
//  virtual void fireEventRealmUrlGenerated(std::string const&, Realms::RealmId const&); //TODO: incomplete function definition
    virtual void getAchievementsAlwaysEnabled();
//  virtual void fireEventEduiOSPurchaseTransaction(TransactionStatus const&)const; //TODO: incomplete function definition
    virtual void fireEventPersonaLoadingPieces(unsigned int, double);
    virtual void fireEventCameraUsed(bool);
//  virtual void fireEventSearchCatalogRequest(SearchRequestTelemetry const&); //TODO: incomplete function definition
    virtual void fireEventDeviceAccountSuccess(bool, std::string const&);
    virtual void fireEventStoreOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&);
    virtual void fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&);
//  virtual void fireEventEduServiceStatus(std::string const&, std::string const&, int, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const; //TODO: incomplete function definition
//  virtual void fireEventScreenChanged(unsigned int const&, std::string const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&); //TODO: incomplete function definition
//  virtual void fireDayOneExperienceStateChanged(IMinecraftEventing::DayOneExperienceState, std::optional<unsigned int>, std::optional<unsigned long>); //TODO: incomplete function definition
//  virtual void fireEventLicenseCheck(bool, ExtraLicenseData &); //TODO: incomplete function definition
    virtual void fireEventPlayerMessageSay(std::string const&, std::string const&);
    virtual void fireEventPersonaAvatarUpdated(std::string const&, std::vector<std::string> const&, std::vector const&, std::allocator<bool>);
    virtual void fireEventPromotionNotificationClicked(std::string const&);
//  virtual void fireEduServiceRequestFailed(std::string const&, std::string const&, std::string const&, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const; //TODO: incomplete function definition
    virtual void fireEventPushNotificationOpened(std::string const&, std::string const&);
//  virtual void fireEventSignInToXboxLive(Social::XboxLiveUser const&, bool, IMinecraftEventing::SignInStage); //TODO: incomplete function definition
    virtual void fireEventPersonaAvatarsListed(std::vector<std::string> const&);
    virtual void fireEventClientIdCreated(int);
//  virtual void fireEventFileTransmissionState(IMinecraftEventing::FileTransmissionDirection, IMinecraftEventing::FileTransmissionState, IMinecraftEventing::FileTransmissionType, std::string const&, unsigned long, double); //TODO: incomplete function definition
    virtual void setTestRunIdTag(int);
//  virtual void fireEventContentShared(std::string const&, std::string const&, IMinecraftEventing::ShareMode const&); //TODO: incomplete function definition
    virtual void fireEventWorldImported(long, unsigned long);
    virtual void fireEventStackLoaded(StackStats const&);
//  virtual void fireEventPurchaseResolved(std::string const&, std::string const&, std::string const&, IMinecraftEventing::StoreType, IMinecraftEventing::PurchaseResult, PurchasePath); //TODO: incomplete function definition
    virtual void fireEventAppPaused();
    virtual void fireEventEntityDanced(int, int, unsigned char);
    virtual void fireEventEntitySpawned(Player *, int, unsigned int);
//  virtual void fireEventPurchaseAttempt(std::string const&, std::string const&, std::string const&, IMinecraftEventing::StoreType, PurchasePath); //TODO: incomplete function definition
//  virtual void fireRealmConnectionEventGenericLambdaCalled(IMinecraftEventing::RealmConnectionFlow, IMinecraftEventing::RealmConnectionLambda, IMinecraftEventing::RealmConnectionResult); //TODO: incomplete function definition
    virtual void fireMinecraftVersionInviteAccepted(bool, unsigned long);
    virtual std::string getSessionId();
    virtual void fireEventCodeBuilderClosed()const;
    virtual void fireEventStorageReport(std::string const&);
    virtual void fireEventRespawn(Player &, int);
    virtual void firePackSettingsEvent(PackSettings const&, PackManifest const&);
    virtual void fireEventChatSettingsUpdated(Player const*, std::vector<Social::Events::Property> const&)const;
//  virtual void fireEventElementConstructorUsed(int, int, IMinecraftEventing::ElementConstructorUseType); //TODO: incomplete function definition
//  virtual void fireEventPerformanceMetrics(ProfilerLiteTelemetry const&); //TODO: incomplete function definition
//  virtual void fireEventWebviewDownload(std::string const&, WebviewDownloadInfo const&)const; //TODO: incomplete function definition
    virtual void fireEventPushNotificationReceived(PushNotificationMessage const&);
//  virtual void fireEventStartWorld(IMinecraftEventing::NetworkType, std::string const&, Social::MultiplayerServiceIdentifier); //TODO: incomplete function definition
    virtual void fireIDESelected(std::string const&)const;
//  virtual void registerOptionsObserver(std::shared_ptr<Options>); //TODO: incomplete function definition
//  virtual void fireEventConnectionFailed(IMinecraftEventing::ConnectionFailureReason); //TODO: incomplete function definition
    virtual void fireEventPackImportedCompleted(ResourcePack const*, PackManifest const&, bool, std::string const&);
//  std::string _convertPromotionTypeToString(IMinecraftEventing::PromotionType)const; //TODO: incomplete function definition
    void fireEventItemEquipped(Player *, ItemInstance const&, int);
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, ItemEnchants const&);
    void fireEventPlayerMovementSettings(Player *);
    void fireEventPlayerMovementCorrected(Player *, float, float, bool, float, float, int);
//  std::string _convertPurchasePathToString(PurchasePath)const; //TODO: incomplete function definition
//  void fireEventPortalUsed(Player *, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void unregisterOptionsObserver();
    void fireEventMenuShown(Player *, unsigned int, unsigned int);
//  void fireEventPlayerMovementAnomalyDetected(Player *, MovementEventType, float, float, float, float, float); //TODO: incomplete function definition
//  void fireEventEntityInteracted(Player *, int, MinecraftEventing::InteractionType, int, unsigned char); //TODO: incomplete function definition
    void fireEventBlockFound(Player *, BlockPos const&);
    void fireEventBehaviorFailed(Player *, std::string);
    void fireEventBossKilled(Player *, int, long, int);
    void fireEventEndOfDay(Player *, Level &);
    void _fireEventPackImportStage(ResourcePack const*, PackManifest const&, std::string const&, std::string const&, bool, bool);
    void fireEventItemCrafted(Player *, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool);
//  void fireEventCauldronBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
    void _getUserManagerConst()const;
//  void fireEventGameTypeChanged(Player *, GameType, GameType); //TODO: incomplete function definition
    void fireEventMultiplayerRoundEnd(Player *, int);
    void fireEventItemNamed(Player *, ItemDescriptor const&);
    void fireEventBehaviorErrored(Player *, std::string);
//  void fireEventMobEffectChanged(Mob &, MobEffectInstance const&, MinecraftEventing::ChangeType); //TODO: incomplete function definition
    void fireEventBookImageImported(Player *);
    void fireEventItemDestroyed(Player *, ItemDescriptor const&, unsigned int);
    void fireEventGameRulesLoaded(Player *, GameRules const&);
    void fireEventPlayerSaved(Player *);
    void fireEventTradeCompleted(Player *, Actor *, ItemDescriptor const&, ItemDescriptor const&, ItemInstance const&, int);
//  void fireEventBlockBroken(Player *, Block const&, MinecraftEventing::BlockPlacementMethod, int); //TODO: incomplete function definition
    void fireEventItemDropped(Player *, ItemDescriptor const&);
    void fireEventAwardTrophy(Player const*, unsigned int);
    void fireEventCaravanChanged(Mob &, int);
    void addResourcePackData(Social::Events::Event &, ResourcePackContents const&);
    void fireEventPlayerMessage(std::string const&, std::string const&, std::string const&, std::string const&);
//  void fireEventGrindstoneBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
    void init();
//  void fireEventComposterBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
    void fireEventPotionBrewed(Player *, ItemDescriptor const&, unsigned int);
    void fireEventBellBlockUsed(Player *, std::string const&);
    std::string _getUserXUID(unsigned int)const;
    void fireEventFishBucketed(Player *, int, int, int, bool);
    void fireEventFirstTimeClientOpen();
//  void fireEventItemAcquired(Player *, ItemDescriptor const&, unsigned int, ItemAcquisitionMethod); //TODO: incomplete function definition
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, unsigned int, int);
    void addBehaviorPackData(Social::Events::Event &, BehaviorPackContents const&);
//  void fireEventPortalBuilt(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void fireEventPatternRemoved(Player *, int, int, int, int, int);
//  void fireEventAwardAchievement(Player *, MinecraftEventing::AchievementIds); //TODO: incomplete function definition
    void fireEventItemSmelted(Player *, ItemDescriptor const&, ItemDescriptor const&);
//  void fireEventMultiplayerRoundStart(Player *, Level &, std::string const&, int, std::string const&, int, Realms::World const&); //TODO: incomplete function definition
    void fireEventBookCopied(Player *, ItemInstance const&);
    void fireEventCaravanChanged(Player *, int, int);
    void fireEventMobKilled(Player *, Actor *, Mob &, unsigned int, std::string const&, int);
    void fireEventPlayerJoin(Player &);
//  void fireEventBarrelBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
    void _generateWorldSessionId();
    void fireEventSlashCommandExecuted(Player *, std::string const&, int, int, std::string const&);
//  void fireEventCampfireBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
    void fireEventPatternAdded(Player *, ItemInstance const&);
    MinecraftEventing(Core::Path const&);
    void fireEventAgentCommand(Player &, int, int, std::string const&, std::string const&, std::string const&);
    void fireEventPlayerLeave(Player &);
//  std::string _convertStoreTypeToString(IMinecraftEventing::StoreType)const; //TODO: incomplete function definition
    void fireEventHeartbeat();
//  void _addCommonPurchaseEventProperties(Social::Events::Event &, std::string const&, std::string const&, std::string const&, PurchasePath)const; //TODO: incomplete function definition
    void fireEventPlayerDied(Player *, int, int, int, bool);
    void fireEventSpecialMobBuilt(Player *, Mob &);
    void fireEventBookExported(Player *, int, int);
    void fireEventPlayerTransform(Player &);
//  void fireEventLecternBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition
//  void fireEventCommandBlockEdited(Player *, BaseCommandBlock const&, bool, CommandBlockMode, bool, bool); //TODO: incomplete function definition
    void fireEventBookEdited(Player *, ItemDescriptor const&, unsigned int);
    void fireEventSignedBookOpened(Player *, bool);
    void fireEventCraftingSessionStart(Player *, unsigned int);
//  void fireEventPOIBlockUsageAttempt(Player *, std::string const&, MinecraftEventing::PoiEventBlockType); //TODO: incomplete function definition
//  void _fireStructureBlockAction(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, bool, StructureTelemetryClientData const*); //TODO: incomplete function definition
//  void fireEventPetDied(Player *, bool, Actor *, ActorType, unsigned int); //TODO: incomplete function definition
//  void fireEventItemInteracted(Player *, ItemInstance const&, MinecraftEventing::ItemInteractMethod); //TODO: incomplete function definition
//  void _addConversionReportData(Social::Events::Event &, mclc::ConversionReport const*); //TODO: incomplete function definition
    void fireEventBlockPlaced(Player *, Block const&, bool);
//  void fireEventItemUsed(Player *, ItemDescriptor const&, ItemUseMethod); //TODO: incomplete function definition
//  void fireEventPlayerTeleported(Player *, float, MinecraftEventing::TeleportationCause, int); //TODO: incomplete function definition
    void fireEventAgentCreated(Player &);
    void fireEventCauldronUsed(Player *, short, unsigned int, short);
    void fireEventMobBorn(Player *, int, int, unsigned char);
    void fireEventVehicleExited(Player *, unsigned int, unsigned long);
//  void _getAccountType(std::shared_ptr<Social::User>); //TODO: incomplete function definition
    void fireEventCraftingSessionEnd(Player *);
    void fireEventJukeboxUsed(Player *, ItemDescriptor const&);
    void fireRaidEvent(Player *, int, int, bool);
    void fireEventWorldUnloaded(Player *, LevelData const&, unsigned int);
//  void fireEventCartographyBlockUsed(Player *, std::string const&, MapOutputType); //TODO: incomplete function definition
//  void fireEventPOIBlockUsed(Player *, std::string const&, MinecraftEventing::PoiEventBlockType); //TODO: incomplete function definition
};
