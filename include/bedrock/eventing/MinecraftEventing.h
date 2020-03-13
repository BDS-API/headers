#pragma once

#include <unordered_map>
#include <vector>
#include "../../mce/UUID.h"
#include "IMinecraftEventing.h"
#include <memory>
#include <string>
#include <optional>


class MinecraftEventing : IMinecraftEventing {

public:
    static long sMutex;
    static long mUseMethodMap;
    static long mAcquisitionMethodMap;

    ~MinecraftEventing(); // _ZN17MinecraftEventingD2Ev
    virtual void fireEventPackUpgradeAttempt(PackManifest const&, PackReport const&); // _ZN17MinecraftEventing27fireEventPackUpgradeAttemptERK12PackManifestRK10PackReport
//  virtual void init(Social::IUserManager &); //TODO: incomplete function definition // _ZN17MinecraftEventing4initERN6Social12IUserManagerE
    virtual std::string getPlayerSessionId(); // _ZN17MinecraftEventing18getPlayerSessionIdB5cxx11Ev
    virtual void getShouldHaveAchievementsEnabled(); // _ZN17MinecraftEventing32getShouldHaveAchievementsEnabledEv
    virtual void setShouldHaveAchievementsEnabled(bool); // _ZN17MinecraftEventing32setShouldHaveAchievementsEnabledEb
    virtual void getAchievementsAlwaysEnabled(); // _ZN17MinecraftEventing28getAchievementsAlwaysEnabledEv
    virtual void getPrimaryLocalUserId(); // _ZN17MinecraftEventing21getPrimaryLocalUserIdEv
    virtual void forceSendEvents(); // _ZN17MinecraftEventing15forceSendEventsEv
    virtual void getEventManager()const; // _ZNK17MinecraftEventing15getEventManagerEv
    virtual void updatePrimaryLocalUserId(unsigned int const&); // _ZN17MinecraftEventing24updatePrimaryLocalUserIdERKj
    virtual void updateIsLegacyPlayer(bool); // _ZN17MinecraftEventing20updateIsLegacyPlayerEb
    virtual void updateIsTrial(bool)const; // _ZNK17MinecraftEventing13updateIsTrialEb
    virtual void registerOptionsObserver(std::shared_ptr<Options>); // _ZN17MinecraftEventing23registerOptionsObserverESt10shared_ptrI7OptionsE
    virtual void addListener(std::unique_ptr<Social::Events::IEventListener>); // _ZN17MinecraftEventing11addListenerESt10unique_ptrIN6Social6Events14IEventListenerESt14default_deleteIS3_EE
    virtual void fireEventOnSuccessfulClientLogin(Level const*); // _ZN17MinecraftEventing32fireEventOnSuccessfulClientLoginEPK5Level
    virtual void fireEventStartClient(std::string const&, std::string const&, std::string const&, bool); // _ZN17MinecraftEventing20fireEventStartClientERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_b
//  virtual void fireEventStartWorld(IMinecraftEventing::NetworkType, std::string const&, Social::MultiplayerServiceIdentifier); //TODO: incomplete function definition // _ZN17MinecraftEventing19fireEventStartWorldEN18IMinecraftEventing11NetworkTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN6Social28MultiplayerServiceIdentifierE
    virtual void fireGlobalResourcePackCrashRecovery(PackInstance &, mce::UUID, int); // _ZN17MinecraftEventing35fireGlobalResourcePackCrashRecoveryER12PackInstanceN3mce4UUIDEi
//  virtual void fireServerConnectionEvent(IMinecraftEventing::ServerConnectionOutcome, unsigned int, double, std::string const&); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireServerConnectionEventEN18IMinecraftEventing23ServerConnectionOutcomeEjdRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&); // _ZN17MinecraftEventing32fireServerConnectionAttemptEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbS7_
    virtual void fireTextToSpeechToggled(bool, bool); // _ZN17MinecraftEventing23fireTextToSpeechToggledEbb
    virtual void fireEventClientIdCreated(int); // _ZN17MinecraftEventing24fireEventClientIdCreatedEi
    virtual void fireEventFloatPropertyList(std::string const&, std::vector<std::pair<std::string, float>> const&); // _ZN17MinecraftEventing26fireEventFloatPropertyListERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorISt4pairIS5_fESaISA_EE
    virtual void fireEventHardwareInfo(); // _ZN17MinecraftEventing21fireEventHardwareInfoEv
//  virtual void fireEventOptionsUpdated(std::shared_ptr<Options>, InputMode, bool); //TODO: incomplete function definition // _ZN17MinecraftEventing23fireEventOptionsUpdatedESt10shared_ptrI7OptionsE9InputModeb
    virtual void fireEventChatSettingsUpdated(Player const*, std::vector<Social::Events::Property> const&)const; // _ZNK17MinecraftEventing28fireEventChatSettingsUpdatedEPK6PlayerRKSt6vectorIN6Social6Events8PropertyESaIS6_EE
//  virtual void fireEventPerformanceMetrics(ProfilerLiteTelemetry const&); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventPerformanceMetricsERK21ProfilerLiteTelemetry
    virtual void fireEventPlayerTravelled(Player *, float); // _ZN17MinecraftEventing24fireEventPlayerTravelledEP6Playerf
    virtual void fireEventPromotionNotificationClicked(std::string const&); // _ZN17MinecraftEventing37fireEventPromotionNotificationClickedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventVideoPlayed(std::string const&, std::string const&); // _ZN17MinecraftEventing20fireEventVideoPlayedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventRespondedToAcceptContent(ResourcePacksInfoData const&, bool); // _ZN17MinecraftEventing33fireEventRespondedToAcceptContentERK21ResourcePacksInfoDatab
//  virtual void fireEventSignInToXboxLive(Social::XboxLiveUser const&, bool, IMinecraftEventing::SignInStage); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventSignInToXboxLiveERKN6Social12XboxLiveUserEbN18IMinecraftEventing11SignInStageE
//  virtual void fireEventSignOutOfXboxLive(Social::XboxLiveUser const&); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventSignOutOfXboxLiveERKN6Social12XboxLiveUserE
    virtual void fireEventAppSuspended(bool); // _ZN17MinecraftEventing21fireEventAppSuspendedEb
    virtual void fireEventAppPaused(); // _ZN17MinecraftEventing18fireEventAppPausedEv
    virtual void fireEventAppUnpaused(); // _ZN17MinecraftEventing20fireEventAppUnpausedEv
    virtual void fireEventAppResumed(); // _ZN17MinecraftEventing19fireEventAppResumedEv
//  virtual void fireEventSplitScreenUpdated(IClientInstance const&); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventSplitScreenUpdatedERK15IClientInstance
    virtual void fireEventScreenChanged(unsigned int const&, std::string const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&); // _ZN17MinecraftEventing22fireEventScreenChangedERKjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt13unordered_mapIS7_S7_St4hashIS7_ESt8equal_toIS7_ESaISt4pairIS8_S7_EEE
    virtual void fireEventPopupClosed(std::string const&)const; // _ZNK17MinecraftEventing20fireEventPopupClosedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventGameplayTipShown(int, bool, std::string const&); // _ZN17MinecraftEventing25fireEventGameplayTipShownEibRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventWorldImported(long, unsigned long); // _ZN17MinecraftEventing22fireEventWorldImportedElm
//  virtual void fireCurrentInputUpdated(IClientInstance const&); //TODO: incomplete function definition // _ZN17MinecraftEventing23fireCurrentInputUpdatedERK15IClientInstance
    virtual void fireEventPackImportStarted(PackManifest const&); // _ZN17MinecraftEventing26fireEventPackImportStartedERK12PackManifest
    virtual void fireEventPackImportedCompleted(ResourcePack const*, PackManifest const&, bool, std::string const&); // _ZN17MinecraftEventing30fireEventPackImportedCompletedEPK12ResourcePackRK12PackManifestbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventTreatmentPackApplied(PackManifest const&); // _ZN17MinecraftEventing29fireEventTreatmentPackAppliedERK12PackManifest
    virtual void fireEventPackPlayed(PackInstance const&, unsigned int); // _ZN17MinecraftEventing19fireEventPackPlayedERK12PackInstancej
    virtual void fireEventNewUserPackDetected(PackManifest const&, bool, std::string const&, bool); // _ZN17MinecraftEventing28fireEventNewUserPackDetectedERK12PackManifestbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void fireEventPackHashChanged(PackManifest const&); // _ZN17MinecraftEventing24fireEventPackHashChangedERK12PackManifest
    virtual void fireEventTreatmentPackDownloaded(std::string); // _ZN17MinecraftEventing32fireEventTreatmentPackDownloadedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventTreatmentPackRemoved(std::string); // _ZN17MinecraftEventing29fireEventTreatmentPackRemovedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventContentLogsInWorldSession(std::string const&, unsigned int, unsigned int); // _ZN17MinecraftEventing34fireEventContentLogsInWorldSessionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjj
//  virtual void fireRealmConnectionEventStart(IMinecraftEventing::RealmConnectionFlow); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireRealmConnectionEventStartEN18IMinecraftEventing19RealmConnectionFlowE
//  virtual void fireRealmConnectionEventGenericLambdaCalled(IMinecraftEventing::RealmConnectionFlow, IMinecraftEventing::RealmConnectionLambda, IMinecraftEventing::RealmConnectionResult); //TODO: incomplete function definition // _ZN17MinecraftEventing43fireRealmConnectionEventGenericLambdaCalledEN18IMinecraftEventing19RealmConnectionFlowENS0_21RealmConnectionLambdaENS0_21RealmConnectionResultE
    virtual void fireEventCompoundCreatorCreated(int, int); // _ZN17MinecraftEventing31fireEventCompoundCreatorCreatedEii
//  virtual void fireEventElementConstructorUsed(int, int, IMinecraftEventing::ElementConstructorUseType); //TODO: incomplete function definition // _ZN17MinecraftEventing31fireEventElementConstructorUsedEiiN18IMinecraftEventing25ElementConstructorUseTypeE
    virtual void fireEventEntitySpawned(Player *, int, unsigned int); // _ZN17MinecraftEventing22fireEventEntitySpawnedEP6Playerij
    virtual void fireEventReducerBlockEntered(ItemDescriptor const&); // _ZN17MinecraftEventing28fireEventReducerBlockEnteredERK14ItemDescriptor
    virtual void fireEventRespawn(Player &, int); // _ZN17MinecraftEventing16fireEventRespawnER6Playeri
    virtual void fireEventServerRespawnSearchTime(Player &, PlayerRespawnTelemetryData const&); // _ZN17MinecraftEventing32fireEventServerRespawnSearchTimeER6PlayerRK26PlayerRespawnTelemetryData
    virtual void firePackSettingsEvent(PackSettings const&, PackManifest const&); // _ZN17MinecraftEventing21firePackSettingsEventERK12PackSettingsRK12PackManifest
    virtual void removeTestRunIdTag(); // _ZN17MinecraftEventing18removeTestRunIdTagEv
    virtual void removeTestTelemetryTag(); // _ZN17MinecraftEventing22removeTestTelemetryTagEv
    virtual void setTestRunIdTag(int); // _ZN17MinecraftEventing15setTestRunIdTagEi
    virtual void setTestTelemetryTag(char const*); // _ZN17MinecraftEventing19setTestTelemetryTagEPKc
    virtual void stopDebugEventLoggingForAllListeners(); // _ZN17MinecraftEventing36stopDebugEventLoggingForAllListenersEv
    virtual void tick(); // _ZN17MinecraftEventing4tickEv
    virtual void updateEditionType(); // _ZN17MinecraftEventing17updateEditionTypeEv
    virtual void fireEventMultiplayerConnectionStateChanged(bool, std::string const&, std::string const&, unsigned int, unsigned int, unsigned int, std::string const&); // _ZN17MinecraftEventing42fireEventMultiplayerConnectionStateChangedEbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_jjjS7_
//  virtual void fireEventJoinCanceled(LoadingState); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireEventJoinCanceledE12LoadingState
//  virtual void fireClubsEngagementEvent(IMinecraftEventing::ClubsEngagementAction, IMinecraftEventing::ClubsEngagementTargetType, char const*, Realms::RealmId, std::string); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireClubsEngagementEventEN18IMinecraftEventing21ClubsEngagementActionENS0_25ClubsEngagementTargetTypeEPKcN6Realms7RealmIdENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void fireClubsOpenFeedScreenEvent(IMinecraftEventing::ClubsFeedScreenSource, Realms::RealmId, std::string); //TODO: incomplete function definition // _ZN17MinecraftEventing28fireClubsOpenFeedScreenEventEN18IMinecraftEventing21ClubsFeedScreenSourceEN6Realms7RealmIdENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventEntitlementListInfo(std::vector<ContentIdentity> &, bool); // _ZN17MinecraftEventing28fireEventEntitlementListInfoERSt6vectorI15ContentIdentitySaIS1_EEb
//  virtual void fireEventFileTransmissionState(IMinecraftEventing::FileTransmissionDirection, IMinecraftEventing::FileTransmissionState, IMinecraftEventing::FileTransmissionType, std::string const&, unsigned long, double); //TODO: incomplete function definition // _ZN17MinecraftEventing30fireEventFileTransmissionStateEN18IMinecraftEventing25FileTransmissionDirectionENS0_21FileTransmissionStateENS0_20FileTransmissionTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmd
    virtual void fireEventIncognitoFailure(std::string const&, std::string const&); // _ZN17MinecraftEventing25fireEventIncognitoFailureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  virtual void fireEventDeviceAccountFailure(IMinecraftEventing::SignInStage, IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::string const&); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventDeviceAccountFailureEN18IMinecraftEventing11SignInStageENS0_25DeviceAccountFailurePhaseEjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventDeviceAccountSuccess(bool, std::string const&); // _ZN17MinecraftEventing29fireEventDeviceAccountSuccessEbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventStorage(int, std::string const&); // _ZN17MinecraftEventing16fireEventStorageEiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void fireEventIAPPurchaseAttempt(std::string const&, std::string const&, Offer &, PurchasePath); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventIAPPurchaseAttemptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_R5Offer12PurchasePath
//  virtual void fireEventIAPPurchaseResolved(std::string const&, std::string const&, Offer &, IMinecraftEventing::PurchaseResult, PurchasePath); //TODO: incomplete function definition // _ZN17MinecraftEventing28fireEventIAPPurchaseResolvedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_R5OfferN18IMinecraftEventing14PurchaseResultE12PurchasePath
//  virtual void fireEventIAPRedeemAttempt(std::string const&, std::string const&, std::string const&, PurchasePath); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventIAPRedeemAttemptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_12PurchasePath
//  virtual void fireEventIAPRedeemResolved(std::string const&, std::string const&, std::string const&, IMinecraftEventing::PurchaseResult, PurchasePath); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventIAPRedeemResolvedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_N18IMinecraftEventing14PurchaseResultE12PurchasePath
//  virtual void fireEventPurchaseAttempt(std::string const&, std::string const&, std::string const&, IMinecraftEventing::StoreType, PurchasePath); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireEventPurchaseAttemptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_N18IMinecraftEventing9StoreTypeE12PurchasePath
//  virtual void fireEventPurchaseResolved(std::string const&, std::string const&, std::string const&, IMinecraftEventing::StoreType, IMinecraftEventing::PurchaseResult, PurchasePath); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventPurchaseResolvedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_N18IMinecraftEventing9StoreTypeENS8_14PurchaseResultE12PurchasePath
//  virtual void fireEventIAPPurchaseFailure(std::string const&, unsigned short, std::string const&, PurchaseInfo const&); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventIAPPurchaseFailureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEtS7_RK12PurchaseInfo
    virtual void fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing31fireEventPurchaseFailureDetailsEiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventTreatmentsCleared(); // _ZN17MinecraftEventing26fireEventTreatmentsClearedEv
    virtual void fireEventTreatmentsSet(std::vector<std::string> const&); // _ZN17MinecraftEventing22fireEventTreatmentsSetERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    virtual void fireEventSetMultiplayerCorrelationId(Player *, std::string const&); // _ZN17MinecraftEventing36fireEventSetMultiplayerCorrelationIdEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void fireEventGameSessionStart(Player *, IClientInstance &, Level &, std::string const&, int, std::string const&, std::string const&, bool); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventGameSessionStartEP6PlayerR15IClientInstanceR5LevelRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSD_SD_b
//  virtual void prepEventSearchCatalogRequest(SearchRequestTelemetry const&); //TODO: incomplete function definition // _ZN17MinecraftEventing29prepEventSearchCatalogRequestERK22SearchRequestTelemetry
//  virtual void fireEventSearchCatalogRequest(SearchRequestTelemetry const&); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventSearchCatalogRequestERK22SearchRequestTelemetry
    virtual void fireEventArmorStandItemEquipped(ArmorStand const&, ItemDescriptor const&); // _ZN17MinecraftEventing31fireEventArmorStandItemEquippedERK10ArmorStandRK14ItemDescriptor
    virtual void fireEventArmorStandPosed(ArmorStand const&); // _ZN17MinecraftEventing24fireEventArmorStandPosedERK10ArmorStand
    virtual void fireEventPlayerBounced(Player *, Block const&, int); // _ZN17MinecraftEventing22fireEventPlayerBouncedEP6PlayerRK5Blocki
    virtual void fireEventSetValidForAchievements(Player *, bool); // _ZN17MinecraftEventing32fireEventSetValidForAchievementsEP6Playerb
    virtual void fireEventAchievementReceived(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing28fireEventAchievementReceivedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventWorldLoaded(Player *, Level &, ResourcePackManager &, ResourcePacksInfoData &); // _ZN17MinecraftEventing20fireEventWorldLoadedEP6PlayerR5LevelR19ResourcePackManagerR21ResourcePacksInfoData
    virtual void fireMinecraftVersionLaunched(bool); // _ZN17MinecraftEventing28fireMinecraftVersionLaunchedEb
    virtual void fireMinecraftVersionInviteAccepted(bool, unsigned long); // _ZN17MinecraftEventing34fireMinecraftVersionInviteAcceptedEbm
//  virtual void fireDayOneExperienceStateChanged(IMinecraftEventing::DayOneExperienceState, std::optional<unsigned int>, std::optional<unsigned long>); //TODO: incomplete function definition // _ZN17MinecraftEventing32fireDayOneExperienceStateChangedEN18IMinecraftEventing21DayOneExperienceStateESt8optionalIjES2_ImE
//  virtual void fireWorldConversionAttemptEvent(Legacy::WorldConversionReport const&); //TODO: incomplete function definition // _ZN17MinecraftEventing31fireWorldConversionAttemptEventERKN6Legacy21WorldConversionReportE
    virtual void fireWorldConversionInitiatedEvent(std::string const&); // _ZN17MinecraftEventing33fireWorldConversionInitiatedEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void fireLegacyWorldUploadEvent(Legacy::WorldConversionReport const&, bool, WorldConversionError); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireLegacyWorldUploadEventERKN6Legacy21WorldConversionReportEb20WorldConversionError
    virtual void fireEventAssertFailed(std::string &); // _ZN17MinecraftEventing21fireEventAssertFailedERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventSessionCrashed(std::string const&, std::string const&); // _ZN17MinecraftEventing23fireEventSessionCrashedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireChatUsedEvent(unsigned int, bool); // _ZN17MinecraftEventing17fireChatUsedEventEjb
    virtual void fireEventJoinByCode(std::string const&); // _ZN17MinecraftEventing19fireEventJoinByCodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventBlockPlacedByCommand(Block const&, int); // _ZN17MinecraftEventing29fireEventBlockPlacedByCommandERK5Blocki
    virtual void fireEventEntityDanced(int, int, unsigned char); // _ZN17MinecraftEventing21fireEventEntityDancedEiih
    virtual void fireEventDwellerDied(Actor &, ActorDamageSource const&, bool); // _ZN17MinecraftEventing20fireEventDwellerDiedER5ActorRK17ActorDamageSourceb
    virtual void fireEventDwellerRemoved(Actor &, bool); // _ZN17MinecraftEventing23fireEventDwellerRemovedER5Actorb
    virtual void fireEventScriptLoaded(std::string const&, unsigned long); // _ZN17MinecraftEventing21fireEventScriptLoadedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
    virtual void fireEventScriptRan(std::string const&, unsigned long, bool, bool); // _ZN17MinecraftEventing18fireEventScriptRanERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmbb
    virtual void fireEventDevConsoleOpen(); // _ZN17MinecraftEventing23fireEventDevConsoleOpenEv
    virtual void fireEventDevConsoleCommand(std::string const&); // _ZN17MinecraftEventing26fireEventDevConsoleCommandERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventNpcPropertiesUpdated(Actor &, bool); // _ZN17MinecraftEventing29fireEventNpcPropertiesUpdatedER5Actorb
    virtual void fireEventBoardTextUpdated(ChalkboardBlockActor &); // _ZN17MinecraftEventing25fireEventBoardTextUpdatedER20ChalkboardBlockActor
    virtual void fireEventCameraUsed(bool); // _ZN17MinecraftEventing19fireEventCameraUsedEb
    virtual void fireEventPortfolioExported(int, int); // _ZN17MinecraftEventing26fireEventPortfolioExportedEii
    virtual void fireQuickPlayEvent(); // _ZN17MinecraftEventing18fireQuickPlayEventEv
    virtual void fireLibraryButtonPressed(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing24fireLibraryButtonPressedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireCourseButtonPressed(std::string const&, std::string const&); // _ZN17MinecraftEventing23fireCourseButtonPressedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  virtual void fireLessonActionTaken(std::string const&, std::string const&, std::string const&, IMinecraftEventing::EducationLessonAction); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireLessonActionTakenERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_N18IMinecraftEventing21EducationLessonActionE
//  virtual void fireInAppCodeBuilderActivated(IMinecraftEventing::OpenCodeMethod); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireInAppCodeBuilderActivatedEN18IMinecraftEventing14OpenCodeMethodE
    virtual void fireCodeCommandButtonPressed(); // _ZN17MinecraftEventing28fireCodeCommandButtonPressedEv
    virtual void fireIDESelected(std::string const&)const; // _ZNK17MinecraftEventing15fireIDESelectedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventEduResources()const; // _ZNK17MinecraftEventing21fireEventEduResourcesEv
//  virtual void fireEventEduiOSPurchaseTransaction(TransactionStatus const&)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing34fireEventEduiOSPurchaseTransactionERK17TransactionStatus
    virtual void fireEventEduOptionSet(Option const&)const; // _ZNK17MinecraftEventing21fireEventEduOptionSetERK6Option
    virtual void fireEventCodeBuilderClosed()const; // _ZNK17MinecraftEventing26fireEventCodeBuilderClosedEv
//  virtual void fireEventEduServiceStatus(std::string const&, std::string const&, int, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing25fireEventEduServiceStatusERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_i11buffer_spanISt4pairIN3gsl17basic_string_spanIKcLln1EEESD_EE
//  virtual void fireEventWebviewDownload(std::string const&, WebviewDownloadInfo const&)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing24fireEventWebviewDownloadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK19WebviewDownloadInfo
//  virtual void fireEduServiceRequestFailed(std::string const&, std::string const&, std::string const&, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing27fireEduServiceRequestFailedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_11buffer_spanISt4pairIN3gsl17basic_string_spanIKcLln1EEESD_EE
//  virtual void fireEventButtonPressed(gsl::basic_string_span<char const, -1l>, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing22fireEventButtonPressedEN3gsl17basic_string_spanIKcLln1EEE11buffer_spanISt4pairIS3_S3_EE
    virtual void fireEventWorldExported(long, unsigned long); // _ZN17MinecraftEventing22fireEventWorldExportedElm
//  virtual void fireEventControlRemappedByPlayer(std::string const&, RawInputType, int)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing32fireEventControlRemappedByPlayerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE12RawInputTypei
//  virtual void fireEventDifficultySet(Difficulty, Difficulty); //TODO: incomplete function definition // _ZN17MinecraftEventing22fireEventDifficultySetE10DifficultyS0_
    virtual void fireEventGameRulesUpdated(bool, bool, std::string const&); // _ZN17MinecraftEventing25fireEventGameRulesUpdatedEbbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventGameRulesUpdated(int, int, std::string const&); // _ZN17MinecraftEventing25fireEventGameRulesUpdatedEiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventGameRulesUpdated(float, float, std::string const&); // _ZN17MinecraftEventing25fireEventGameRulesUpdatedEffRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void fireEventDefaultGameTypeChanged(GameType, GameType); //TODO: incomplete function definition // _ZN17MinecraftEventing31fireEventDefaultGameTypeChangedE8GameTypeS0_
//  virtual void fireEventConnectionFailed(IMinecraftEventing::ConnectionFailureReason); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventConnectionFailedEN18IMinecraftEventing23ConnectionFailureReasonE
    virtual void fireEventOfferRated(std::string const&, int, int, int, double); // _ZN17MinecraftEventing19fireEventOfferRatedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiid
    virtual void fireEventNewContentCheckCompleted(std::string const&, bool); // _ZN17MinecraftEventing33fireEventNewContentCheckCompletedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//  virtual void fireEventHowToPlayTopicChanged(std::string const&, InputMode); //TODO: incomplete function definition // _ZN17MinecraftEventing30fireEventHowToPlayTopicChangedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE9InputMode
    virtual void fireEventApiInit(float, unsigned long); // _ZN17MinecraftEventing16fireEventApiInitEfm
    virtual void fireEventWorldFilesListed(unsigned long, unsigned long, unsigned long, unsigned long); // _ZN17MinecraftEventing25fireEventWorldFilesListedEmmmm
    virtual void fireEventLabTableCreated(int, int, int); // _ZN17MinecraftEventing24fireEventLabTableCreatedEiii
    virtual void fireEventPlayerMessageSay(std::string const&, std::string const&); // _ZN17MinecraftEventing25fireEventPlayerMessageSayERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing26fireEventPlayerMessageTellERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventPlayerMessageChat(std::string const&, std::string const&); // _ZN17MinecraftEventing26fireEventPlayerMessageChatERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventPlayerMessageMe(std::string const&, std::string const&); // _ZN17MinecraftEventing24fireEventPlayerMessageMeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing27fireEventPlayerMessageTitleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
//  virtual void fireEventRealmShared(std::string const&, IMinecraftEventing::ShareMode const&, Realms::RealmId const&); //TODO: incomplete function definition // _ZN17MinecraftEventing20fireEventRealmSharedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN18IMinecraftEventing9ShareModeERKN6Realms7RealmIdE
//  virtual void fireEventRealmMemberlistCleared(Realms::RealmId const&, int const&); //TODO: incomplete function definition // _ZN17MinecraftEventing31fireEventRealmMemberlistClearedERKN6Realms7RealmIdERKi
//  virtual void fireEventRealmUrlGenerated(std::string const&, Realms::RealmId const&); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventRealmUrlGeneratedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN6Realms7RealmIdE
//  virtual void fireEventStructureExport(glTFExportData const&, IMinecraftEventing::ExportOutcome, IMinecraftEventing::ExportStage)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing24fireEventStructureExportERK14glTFExportDataN18IMinecraftEventing13ExportOutcomeENS3_11ExportStageE
//  virtual void fireEventContentShared(std::string const&, std::string const&, IMinecraftEventing::ShareMode const&); //TODO: incomplete function definition // _ZN17MinecraftEventing22fireEventContentSharedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RKN18IMinecraftEventing9ShareModeE
    virtual void fireEventStorageReport(std::string const&); // _ZN17MinecraftEventing22fireEventStorageReportERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventStackLoaded(StackStats const&); // _ZN17MinecraftEventing20fireEventStackLoadedERK10StackStats
    virtual void fireEventUnknownBlockReceived(NewBlockID const&, unsigned short); // _ZN17MinecraftEventing29fireEventUnknownBlockReceivedERK10NewBlockIDt
//  virtual void fireEventSignInEdu(std::string const&, ADRole, IMinecraftEventing::EduSignInStage, std::string const&, std::vector<std::pair<std::string, std::string>> const&); //TODO: incomplete function definition // _ZN17MinecraftEventing18fireEventSignInEduERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE6ADRoleN18IMinecraftEventing14EduSignInStageES7_RKSt6vectorISt4pairIS5_S5_ESaISD_EE
//  virtual void fireEventPopupFiredEdu(std::string const&, std::string const&, std::string const&, std::string const&, ActiveDirectoryAction); //TODO: incomplete function definition // _ZN17MinecraftEventing22fireEventPopupFiredEduERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_21ActiveDirectoryAction
    virtual void fireEventAppConfigurationChanged(); // _ZN17MinecraftEventing32fireEventAppConfigurationChangedEv
    virtual void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing28fireEventPurchaseGameAttemptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventTrialDeviceIdCorrelation(long, std::string const&, long, std::string const&); // _ZN17MinecraftEventing33fireEventTrialDeviceIdCorrelationElRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEElS7_
    virtual void fireEventPushNotificationPermission(bool, std::string const&); // _ZN17MinecraftEventing35fireEventPushNotificationPermissionEbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventPushNotificationReceived(PushNotificationMessage const&); // _ZN17MinecraftEventing33fireEventPushNotificationReceivedERK23PushNotificationMessage
    virtual void fireEventPushNotificationOpened(std::string const&, std::string const&); // _ZN17MinecraftEventing31fireEventPushNotificationOpenedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventUploadSkin(std::string const&, std::string const&); // _ZN17MinecraftEventing19fireEventUploadSkinERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  virtual void fireEventLicenseCheck(bool, ExtraLicenseData &); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireEventLicenseCheckEbR16ExtraLicenseData
    virtual void fireEventStorePromotionNotification(std::string const&); // _ZN17MinecraftEventing35fireEventStorePromotionNotificationERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventWorldGenerated(std::string const&, LevelSettings const&, bool); // _ZN17MinecraftEventing23fireEventWorldGeneratedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK13LevelSettingsb
    virtual void fireEventExperimentalGameplay(bool, bool); // _ZN17MinecraftEventing29fireEventExperimentalGameplayEbb
    virtual void fireEventCopyWorldEducationEnabled(); // _ZN17MinecraftEventing34fireEventCopyWorldEducationEnabledEv
    virtual void fireEventStoreOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&); // _ZN17MinecraftEventing26fireEventStoreOfferClickedEiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_bS7_
//  virtual void fireEventStoreSearch(StoreSearchTelemetryData const&); //TODO: incomplete function definition // _ZN17MinecraftEventing20fireEventStoreSearchERK24StoreSearchTelemetryData
    virtual void fireEventSearchItemSelected(int, int, std::string const&, int, int); // _ZN17MinecraftEventing27fireEventSearchItemSelectedEiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEii
    virtual void fireEventUgcDownloadStarted(std::string const&); // _ZN17MinecraftEventing27fireEventUgcDownloadStartedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventUgcDownloadCompleted(std::string const&, bool); // _ZN17MinecraftEventing29fireEventUgcDownloadCompletedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//  virtual void fireRealmConnectionEventRealmAPIRequest(IMinecraftEventing::RealmConnectionFlow); //TODO: incomplete function definition // _ZN17MinecraftEventing39fireRealmConnectionEventRealmAPIRequestEN18IMinecraftEventing19RealmConnectionFlowE
//  virtual void fireRealmConnectionEventRealmAPIResponse(IMinecraftEventing::RealmConnectionFlow, int); //TODO: incomplete function definition // _ZN17MinecraftEventing40fireRealmConnectionEventRealmAPIResponseEN18IMinecraftEventing19RealmConnectionFlowEi
//  virtual void onUserSignIn(Social::XboxLiveUser &); //TODO: incomplete function definition // _ZN17MinecraftEventing12onUserSignInERN6Social12XboxLiveUserE
//  virtual void onUserSignOut(Social::XboxLiveUser &); //TODO: incomplete function definition // _ZN17MinecraftEventing13onUserSignOutERN6Social12XboxLiveUserE
    virtual std::string getSessionId(); // _ZN17MinecraftEventing12getSessionIdB5cxx11Ev
    virtual void fireEventChunkLoaded(LevelChunk &); // _ZN17MinecraftEventing20fireEventChunkLoadedER10LevelChunk
    virtual void fireEventChunkUnloaded(LevelChunk &); // _ZN17MinecraftEventing22fireEventChunkUnloadedER10LevelChunk
    virtual void fireEventChunkChanged(LevelChunk &); // _ZN17MinecraftEventing21fireEventChunkChangedER10LevelChunk
    virtual void fireEventMultiplayerSessionUpdate(Level const*, Player const*); // _ZN17MinecraftEventing33fireEventMultiplayerSessionUpdateEPK5LevelPK6Player
    virtual void fireEventLevelDestruct(); // _ZN17MinecraftEventing22fireEventLevelDestructEv
    virtual void flagEventDeepLink(); // _ZN17MinecraftEventing17flagEventDeepLinkEv
    virtual void flagEventPlayerGameTypeDefault(bool); // _ZN17MinecraftEventing30flagEventPlayerGameTypeDefaultEb
    virtual void fireEventLevelDatLoadFailed(std::string const&, std::string const&, bool); // _ZN17MinecraftEventing27fireEventLevelDatLoadFailedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_b
    virtual void fireEventClientLeftGameDueToUnrecoverableError(std::string const&, bool); // _ZN17MinecraftEventing46fireEventClientLeftGameDueToUnrecoverableErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//  virtual void fireEventPersonaItemPreviewed(std::string const&, std::string const&, unsigned int, unsigned int, IMinecraftEventing::PromotionType, bool, IMinecraftEventing::StoreType); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventPersonaItemPreviewedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_jjN18IMinecraftEventing13PromotionTypeEbNS8_9StoreTypeE
    virtual void fireEventPersonaSkinChanged(std::string const&, std::string const&, bool); // _ZN17MinecraftEventing27fireEventPersonaSkinChangedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_b
    virtual void fireEventPersonaAvatarUpdated(std::string const&, std::vector<std::string> const&, std::vector const&, std::allocator<bool>); // _ZN17MinecraftEventing29fireEventPersonaAvatarUpdatedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EERKS8_IbSaIbEESG_bbS7_S7_S7_b
    virtual void fireEventPersonaAvatarsListed(std::vector<std::string> const&); // _ZN17MinecraftEventing29fireEventPersonaAvatarsListedERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    virtual void fireEventPersonaInitalizationEvent(unsigned int, std::string const&, std::string const&); // _ZN17MinecraftEventing34fireEventPersonaInitalizationEventEjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventPersonaGeneralError(std::string const&); // _ZN17MinecraftEventing28fireEventPersonaGeneralErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventPersonaLoadingPieces(unsigned int, double); // _ZN17MinecraftEventing29fireEventPersonaLoadingPiecesEjd
    virtual void fireEventPersonaStillLoading(bool, bool, bool, bool, bool, bool, bool, bool); // _ZN17MinecraftEventing28fireEventPersonaStillLoadingEbbbbbbbb
    virtual void fireEventPersonaCreationFailed(std::string const&, std::string const&, bool, bool, std::string const&, std::string const&); // _ZN17MinecraftEventing30fireEventPersonaCreationFailedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_bbS7_S7_
    virtual void fireEventPersonaXForgeResponses(std::vector<std::string> const&, int); // _ZN17MinecraftEventing31fireEventPersonaXForgeResponsesERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EEi
    virtual void fireEventPersonaCategoryInformation(std::string const&); // _ZN17MinecraftEventing35fireEventPersonaCategoryInformationERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing51fireEventWorldHistoryPackSourceMissingDuringUpgradeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventFixedMarketplaceWorldUsingV2VillagersToUseV1(); // _ZN17MinecraftEventing53fireEventFixedMarketplaceWorldUsingV2VillagersToUseV1Ev
//  virtual void fireEventAccountTransferStateChanged(std::string const&, TransferState, std::string const&); //TODO: incomplete function definition // _ZN17MinecraftEventing36fireEventAccountTransferStateChangedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13TransferStateS7_
//  virtual void fireStructureBlockAction(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireStructureBlockActionEN18IMinecraftEventing24StructureBlockActionTypeERK19StructureEditorDataPK28StructureTelemetryClientData
//  virtual void fireStructureBlockRedstoneActivated(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, StructureTelemetryClientData const*); //TODO: incomplete function definition // _ZN17MinecraftEventing35fireStructureBlockRedstoneActivatedEN18IMinecraftEventing24StructureBlockActionTypeERK19StructureEditorDataPK28StructureTelemetryClientData
    virtual void fireStructureBlockLoadedInUnloadedChunks(unsigned int, BlockPos const&, BlockPos const&); // _ZN17MinecraftEventing40fireStructureBlockLoadedInUnloadedChunksEjRK8BlockPosS2_
    MinecraftEventing(Core::Path const&); // _ZN17MinecraftEventingC2ERKN4Core4PathE
    void init(); // _ZN17MinecraftEventing4initEv
    void unregisterOptionsObserver(); // _ZN17MinecraftEventing25unregisterOptionsObserverEv
//  void fireEventGameTypeChanged(Player *, GameType, GameType); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireEventGameTypeChangedEP6Player8GameTypeS2_
    void fireEventHeartbeat(); // _ZN17MinecraftEventing18fireEventHeartbeatEv
    void fireEventBehaviorErrored(Player *, std::string); // _ZN17MinecraftEventing24fireEventBehaviorErroredEP6PlayerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void fireEventBehaviorFailed(Player *, std::string); // _ZN17MinecraftEventing23fireEventBehaviorFailedEP6PlayerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void fireEventPlayerMovementSettings(Player *); // _ZN17MinecraftEventing31fireEventPlayerMovementSettingsEP6Player
//  void fireEventPlayerMovementAnomalyDetected(Player *, MovementEventType, float, float, float, float, float); //TODO: incomplete function definition // _ZN17MinecraftEventing38fireEventPlayerMovementAnomalyDetectedEP6Player17MovementEventTypefffff
    void fireEventPlayerMovementCorrected(Player *, float, float, bool, float, float, int); // _ZN17MinecraftEventing32fireEventPlayerMovementCorrectedEP6Playerffbffi
//  void fireEventPOIBlockUsageAttempt(Player *, std::string const&, MinecraftEventing::PoiEventBlockType); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventPOIBlockUsageAttemptEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_17PoiEventBlockTypeE
//  void fireEventPOIBlockUsed(Player *, std::string const&, MinecraftEventing::PoiEventBlockType); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireEventPOIBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_17PoiEventBlockTypeE
//  void fireEventBarrelBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireEventBarrelBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
    void fireEventBellBlockUsed(Player *, std::string const&); // _ZN17MinecraftEventing22fireEventBellBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void fireEventCampfireBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventCampfireBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//  void fireEventCartographyBlockUsed(Player *, std::string const&, MapOutputType); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventCartographyBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13MapOutputType
//  void fireEventCauldronBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventCauldronBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//  void fireEventComposterBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventComposterBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//  void fireEventGrindstoneBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition // _ZN17MinecraftEventing28fireEventGrindstoneBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//  void fireEventLecternBlockUsed(Player *, std::string const&, MinecraftEventing::POIBlockInteractionType); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventLecternBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//  void fireEventBlockBroken(Player *, Block const&, MinecraftEventing::BlockPlacementMethod, int); //TODO: incomplete function definition // _ZN17MinecraftEventing20fireEventBlockBrokenEP6PlayerRK5BlockNS_20BlockPlacementMethodEi
    void fireEventBlockPlaced(Player *, Block const&, bool); // _ZN17MinecraftEventing20fireEventBlockPlacedEP6PlayerRK5Blockb
    void fireEventBlockFound(Player *, BlockPos const&); // _ZN17MinecraftEventing19fireEventBlockFoundEP6PlayerRK8BlockPos
    void fireEventCraftingSessionEnd(Player *); // _ZN17MinecraftEventing27fireEventCraftingSessionEndEP6Player
    void fireEventCraftingSessionStart(Player *, unsigned int); // _ZN17MinecraftEventing29fireEventCraftingSessionStartEP6Playerj
    void fireEventEndOfDay(Player *, Level &); // _ZN17MinecraftEventing17fireEventEndOfDayEP6PlayerR5Level
//  void fireEventItemAcquired(Player *, ItemDescriptor const&, unsigned int, ItemAcquisitionMethod); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireEventItemAcquiredEP6PlayerRK14ItemDescriptorj21ItemAcquisitionMethod
    void fireEventItemEquipped(Player *, ItemInstance const&, int); // _ZN17MinecraftEventing21fireEventItemEquippedEP6PlayerRK12ItemInstancei
    void fireEventItemCrafted(Player *, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool); // _ZN17MinecraftEventing20fireEventItemCraftedEP6PlayerRK12ItemInstancebbbiiibb
    void fireEventItemDestroyed(Player *, ItemDescriptor const&, unsigned int); // _ZN17MinecraftEventing22fireEventItemDestroyedEP6PlayerRK14ItemDescriptorj
    void fireEventItemDropped(Player *, ItemDescriptor const&); // _ZN17MinecraftEventing20fireEventItemDroppedEP6PlayerRK14ItemDescriptor
    void fireEventItemSmelted(Player *, ItemDescriptor const&, ItemDescriptor const&); // _ZN17MinecraftEventing20fireEventItemSmeltedEP6PlayerRK14ItemDescriptorS4_
//  void fireEventItemUsed(Player *, ItemDescriptor const&, ItemUseMethod); //TODO: incomplete function definition // _ZN17MinecraftEventing17fireEventItemUsedEP6PlayerRK14ItemDescriptor13ItemUseMethod
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, ItemEnchants const&); // _ZN17MinecraftEventing22fireEventItemEnchantedEP6PlayerRK14ItemDescriptorRK12ItemEnchants
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, unsigned int, int); // _ZN17MinecraftEventing22fireEventItemEnchantedEP6PlayerRK14ItemDescriptorji
    void fireEventItemNamed(Player *, ItemDescriptor const&); // _ZN17MinecraftEventing18fireEventItemNamedEP6PlayerRK14ItemDescriptor
    void fireEventTradeCompleted(Player *, Actor *, ItemDescriptor const&, ItemDescriptor const&, ItemInstance const&, int); // _ZN17MinecraftEventing23fireEventTradeCompletedEP6PlayerP5ActorRK14ItemDescriptorS6_RK12ItemInstancei
    void fireEventJukeboxUsed(Player *, ItemDescriptor const&); // _ZN17MinecraftEventing20fireEventJukeboxUsedEP6PlayerRK14ItemDescriptor
    void fireEventMenuShown(Player *, unsigned int, unsigned int); // _ZN17MinecraftEventing18fireEventMenuShownEP6Playerjj
    void fireEventMobKilled(Player *, Actor *, Mob &, unsigned int, std::string const&, int); // _ZN17MinecraftEventing18fireEventMobKilledEP6PlayerP5ActorR3MobjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void fireEventBossKilled(Player *, int, long, int); // _ZN17MinecraftEventing19fireEventBossKilledEP6Playerili
//  void fireEventEntityInteracted(Player *, int, MinecraftEventing::InteractionType, int, unsigned char); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventEntityInteractedEP6PlayeriNS_15InteractionTypeEih
    void fireEventMobBorn(Player *, int, int, unsigned char); // _ZN17MinecraftEventing16fireEventMobBornEP6Playeriih
    void fireEventAgentCommand(Player &, int, int, std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing21fireEventAgentCommandER6PlayeriiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_S9_
    void fireEventAgentCreated(Player &); // _ZN17MinecraftEventing21fireEventAgentCreatedER6Player
//  void fireEventPlayerTeleported(Player *, float, MinecraftEventing::TeleportationCause, int); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventPlayerTeleportedEP6PlayerfNS_18TeleportationCauseEi
    void fireEventPlayerDied(Player *, int, int, int, bool); // _ZN17MinecraftEventing19fireEventPlayerDiedEP6Playeriiib
    void fireEventPlayerSaved(Player *); // _ZN17MinecraftEventing20fireEventPlayerSavedEP6Player
//  void fireEventPortalBuilt(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN17MinecraftEventing20fireEventPortalBuiltEP6Player11AutomaticIDI9DimensioniE
//  void fireEventPortalUsed(Player *, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN17MinecraftEventing19fireEventPortalUsedEP6Player11AutomaticIDI9DimensioniES4_
    void fireEventPotionBrewed(Player *, ItemDescriptor const&, unsigned int); // _ZN17MinecraftEventing21fireEventPotionBrewedEP6PlayerRK14ItemDescriptorj
    void fireEventCauldronUsed(Player *, short, unsigned int, short); // _ZN17MinecraftEventing21fireEventCauldronUsedEP6Playersjs
    void fireEventFishBucketed(Player *, int, int, int, bool); // _ZN17MinecraftEventing21fireEventFishBucketedEP6Playeriiib
    void fireEventSpecialMobBuilt(Player *, Mob &); // _ZN17MinecraftEventing24fireEventSpecialMobBuiltEP6PlayerR3Mob
    void fireEventVehicleExited(Player *, unsigned int, unsigned long); // _ZN17MinecraftEventing22fireEventVehicleExitedEP6Playerjm
    void fireEventCaravanChanged(Mob &, int); // _ZN17MinecraftEventing23fireEventCaravanChangedER3Mobi
//  void fireEventMobEffectChanged(Mob &, MobEffectInstance const&, MinecraftEventing::ChangeType); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventMobEffectChangedER3MobRK17MobEffectInstanceNS_10ChangeTypeE
    void fireRaidEvent(Player *, int, int, bool); // _ZN17MinecraftEventing13fireRaidEventEP6Playeriib
//  void fireEventCommandBlockEdited(Player *, BaseCommandBlock const&, bool, CommandBlockMode, bool, bool); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventCommandBlockEditedEP6PlayerRK16BaseCommandBlockb16CommandBlockModebb
//  void _fireStructureBlockAction(IMinecraftEventing::StructureBlockActionType, StructureEditorData const&, bool, StructureTelemetryClientData const*); //TODO: incomplete function definition // _ZN17MinecraftEventing25_fireStructureBlockActionEN18IMinecraftEventing24StructureBlockActionTypeERK19StructureEditorDatabPK28StructureTelemetryClientData
    void fireEventBookEdited(Player *, ItemDescriptor const&, unsigned int); // _ZN17MinecraftEventing19fireEventBookEditedEP6PlayerRK14ItemDescriptorj
    void fireEventBookImageImported(Player *); // _ZN17MinecraftEventing26fireEventBookImageImportedEP6Player
    void fireEventBookCopied(Player *, ItemInstance const&); // _ZN17MinecraftEventing19fireEventBookCopiedEP6PlayerRK12ItemInstance
    void fireEventBookExported(Player *, int, int); // _ZN17MinecraftEventing21fireEventBookExportedEP6Playerii
    void fireEventSignedBookOpened(Player *, bool); // _ZN17MinecraftEventing25fireEventSignedBookOpenedEP6Playerb
    void fireEventPatternAdded(Player *, ItemInstance const&); // _ZN17MinecraftEventing21fireEventPatternAddedEP6PlayerRK12ItemInstance
    void fireEventPatternRemoved(Player *, int, int, int, int, int); // _ZN17MinecraftEventing23fireEventPatternRemovedEP6Playeriiiii
    void _generateWorldSessionId(); // _ZN17MinecraftEventing23_generateWorldSessionIdEv
    void fireEventWorldUnloaded(Player *, LevelData const&, unsigned int); // _ZN17MinecraftEventing22fireEventWorldUnloadedEP6PlayerRK9LevelDataj
//  void fireEventAwardAchievement(Player *, MinecraftEventing::AchievementIds); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventAwardAchievementEP6PlayerNS_14AchievementIdsE
    void fireEventAwardTrophy(Player const*, unsigned int); // _ZN17MinecraftEventing20fireEventAwardTrophyEPK6Playerj
//  void fireEventMultiplayerRoundStart(Player *, Level &, std::string const&, int, std::string const&, int, Realms::World const&); //TODO: incomplete function definition // _ZN17MinecraftEventing30fireEventMultiplayerRoundStartEP6PlayerR5LevelRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSB_iRKN6Realms5WorldE
    void fireEventMultiplayerRoundEnd(Player *, int); // _ZN17MinecraftEventing28fireEventMultiplayerRoundEndEP6Playeri
    void fireEventSlashCommandExecuted(Player *, std::string const&, int, int, std::string const&); // _ZN17MinecraftEventing29fireEventSlashCommandExecutedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiS9_
    void fireEventCaravanChanged(Player *, int, int); // _ZN17MinecraftEventing23fireEventCaravanChangedEP6Playerii
    std::string _getUserXUID(unsigned int)const; // _ZNK17MinecraftEventing12_getUserXUIDB5cxx11Ej
    void _getUserManagerConst()const; // _ZNK17MinecraftEventing20_getUserManagerConstEv
    void fireEventFirstTimeClientOpen(); // _ZN17MinecraftEventing28fireEventFirstTimeClientOpenEv
    void fireEventGameRulesLoaded(Player *, GameRules const&); // _ZN17MinecraftEventing24fireEventGameRulesLoadedEP6PlayerRK9GameRules
    void fireEventPlayerTransform(Player &); // _ZN17MinecraftEventing24fireEventPlayerTransformER6Player
    void fireEventPlayerJoin(Player &); // _ZN17MinecraftEventing19fireEventPlayerJoinER6Player
    void fireEventPlayerLeave(Player &); // _ZN17MinecraftEventing20fireEventPlayerLeaveER6Player
    void fireEventPlayerMessage(std::string const&, std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing22fireEventPlayerMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_
//  void fireEventItemInteracted(Player *, ItemInstance const&, MinecraftEventing::ItemInteractMethod); //TODO: incomplete function definition // _ZN17MinecraftEventing23fireEventItemInteractedEP6PlayerRK12ItemInstanceNS_18ItemInteractMethodE
    void _fireEventPackImportStage(ResourcePack const*, PackManifest const&, std::string const&, std::string const&, bool, bool); // _ZN17MinecraftEventing25_fireEventPackImportStageEPK12ResourcePackRK12PackManifestRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESD_bb
    void addBehaviorPackData(Social::Events::Event &, BehaviorPackContents const&); // _ZN17MinecraftEventing19addBehaviorPackDataERN6Social6Events5EventERK20BehaviorPackContents
    void addResourcePackData(Social::Events::Event &, ResourcePackContents const&); // _ZN17MinecraftEventing19addResourcePackDataERN6Social6Events5EventERK20ResourcePackContents
//  void _addConversionReportData(Social::Events::Event &, mclc::ConversionReport const*); //TODO: incomplete function definition // _ZN17MinecraftEventing24_addConversionReportDataERN6Social6Events5EventEPKN4mclc16ConversionReportE
    void _getAccountType(std::shared_ptr<Social::User>); // _ZN17MinecraftEventing15_getAccountTypeESt10shared_ptrIN6Social4UserEE
//  std::string _convertStoreTypeToString(IMinecraftEventing::StoreType)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing25_convertStoreTypeToStringB5cxx11EN18IMinecraftEventing9StoreTypeE
//  std::string _convertPurchasePathToString(PurchasePath)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing28_convertPurchasePathToStringB5cxx11E12PurchasePath
//  std::string _convertPromotionTypeToString(IMinecraftEventing::PromotionType)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing29_convertPromotionTypeToStringB5cxx11EN18IMinecraftEventing13PromotionTypeE
//  void fireEventPetDied(Player *, bool, Actor *, ActorType, unsigned int); //TODO: incomplete function definition // _ZN17MinecraftEventing16fireEventPetDiedEP6PlayerbP5Actor9ActorTypej
//  void _addCommonPurchaseEventProperties(Social::Events::Event &, std::string const&, std::string const&, std::string const&, PurchasePath)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing33_addCommonPurchaseEventPropertiesERN6Social6Events5EventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_SB_12PurchasePath
};
