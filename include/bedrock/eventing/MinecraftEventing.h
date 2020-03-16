#pragma once

#include <string>
#include <memory>
#include <vector>
#include "../../mce/UUID.h"
#include <unordered_map>
#include "IMinecraftEventing.h"
#include <optional>


class MinecraftEventing : public IMinecraftEventing {

public:
    static long sMutex;
    static long mUseMethodMap;
    static long mAcquisitionMethodMap;

    virtual ~MinecraftEventing(); // _ZN17MinecraftEventingD2Ev
    virtual void __fake_function0(); // fake
    virtual void fireEventPackUpgradeAttempt(PackManifest const&, PackReport const&); // _ZN17MinecraftEventing27fireEventPackUpgradeAttemptERK12PackManifestRK10PackReport
    virtual void init__incomplete1(long &); //TODO: incomplete function definition // _ZN17MinecraftEventing4initERN6Social12IUserManagerE
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
    virtual void registerOptionsObserver(std::shared_ptr<long>); // _ZN17MinecraftEventing23registerOptionsObserverESt10shared_ptrI7OptionsE
    virtual void addListener(std::unique_ptr<long>); // _ZN17MinecraftEventing11addListenerESt10unique_ptrIN6Social6Events14IEventListenerESt14default_deleteIS3_EE
    virtual void fireEventOnSuccessfulClientLogin(Level const*); // _ZN17MinecraftEventing32fireEventOnSuccessfulClientLoginEPK5Level
    virtual void fireEventStartClient(std::string const&, std::string const&, std::string const&, bool); // _ZN17MinecraftEventing20fireEventStartClientERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_b
    virtual void fireEventStartWorld__incomplete0(long, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing19fireEventStartWorldEN18IMinecraftEventing11NetworkTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN6Social28MultiplayerServiceIdentifierE
    virtual void fireGlobalResourcePackCrashRecovery(PackInstance &, mce::UUID, int); // _ZN17MinecraftEventing35fireGlobalResourcePackCrashRecoveryER12PackInstanceN3mce4UUIDEi
    virtual void fireServerConnectionEvent__incomplete0(long, unsigned int, double, std::string const&); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireServerConnectionEventEN18IMinecraftEventing23ServerConnectionOutcomeEjdRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireServerConnectionAttemptEvent(std::string const&, bool, std::string const&); // _ZN17MinecraftEventing32fireServerConnectionAttemptEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbS7_
    virtual void fireTextToSpeechToggled(bool, bool); // _ZN17MinecraftEventing23fireTextToSpeechToggledEbb
    virtual void fireEventClientIdCreated(int); // _ZN17MinecraftEventing24fireEventClientIdCreatedEi
    virtual void fireEventFloatPropertyList(std::string const&, std::vector<std::pair<std::string, float>> const&); // _ZN17MinecraftEventing26fireEventFloatPropertyListERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorISt4pairIS5_fESaISA_EE
    virtual void fireEventHardwareInfo(); // _ZN17MinecraftEventing21fireEventHardwareInfoEv
    virtual void fireEventOptionsUpdated__incomplete0(std::shared_ptr<long>, long, bool); //TODO: incomplete function definition // _ZN17MinecraftEventing23fireEventOptionsUpdatedESt10shared_ptrI7OptionsE9InputModeb
    virtual void fireEventChatSettingsUpdated(Player const*, std::vector<Social::Events::Property> const&)const; // _ZNK17MinecraftEventing28fireEventChatSettingsUpdatedEPK6PlayerRKSt6vectorIN6Social6Events8PropertyESaIS6_EE
    virtual void fireEventPerformanceMetrics__incomplete0(long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventPerformanceMetricsERK21ProfilerLiteTelemetry
    virtual void fireEventPlayerTravelled(Player *, float); // _ZN17MinecraftEventing24fireEventPlayerTravelledEP6Playerf
    virtual void fireEventPromotionNotificationClicked(std::string const&); // _ZN17MinecraftEventing37fireEventPromotionNotificationClickedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventVideoPlayed(std::string const&, std::string const&); // _ZN17MinecraftEventing20fireEventVideoPlayedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventRespondedToAcceptContent(ResourcePacksInfoData const&, bool); // _ZN17MinecraftEventing33fireEventRespondedToAcceptContentERK21ResourcePacksInfoDatab
    virtual void fireEventSignInToXboxLive__incomplete0(long const&, bool, long); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventSignInToXboxLiveERKN6Social12XboxLiveUserEbN18IMinecraftEventing11SignInStageE
    virtual void fireEventSignOutOfXboxLive__incomplete0(long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventSignOutOfXboxLiveERKN6Social12XboxLiveUserE
    virtual void fireEventAppSuspended(bool); // _ZN17MinecraftEventing21fireEventAppSuspendedEb
    virtual void fireEventAppPaused(); // _ZN17MinecraftEventing18fireEventAppPausedEv
    virtual void fireEventAppUnpaused(); // _ZN17MinecraftEventing20fireEventAppUnpausedEv
    virtual void fireEventAppResumed(); // _ZN17MinecraftEventing19fireEventAppResumedEv
    virtual void fireEventSplitScreenUpdated__incomplete0(long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventSplitScreenUpdatedERK15IClientInstance
    virtual void fireEventScreenChanged(unsigned int const&, std::string const&, std::unordered_map<std::string, std::string, std::hash<std::string>, long, std::allocator<std::pair<std::string const, std::string>>> const&); // _ZN17MinecraftEventing22fireEventScreenChangedERKjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt13unordered_mapIS7_S7_St4hashIS7_ESt8equal_toIS7_ESaISt4pairIS8_S7_EEE
    virtual void fireEventPopupClosed(std::string const&)const; // _ZNK17MinecraftEventing20fireEventPopupClosedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventGameplayTipShown(int, bool, std::string const&); // _ZN17MinecraftEventing25fireEventGameplayTipShownEibRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventWorldImported(long, unsigned long); // _ZN17MinecraftEventing22fireEventWorldImportedElm
    virtual void fireCurrentInputUpdated__incomplete0(long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing23fireCurrentInputUpdatedERK15IClientInstance
    virtual void fireEventPackImportStarted(PackManifest const&); // _ZN17MinecraftEventing26fireEventPackImportStartedERK12PackManifest
    virtual void fireEventPackImportedCompleted(ResourcePack const*, PackManifest const&, bool, std::string const&); // _ZN17MinecraftEventing30fireEventPackImportedCompletedEPK12ResourcePackRK12PackManifestbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventTreatmentPackApplied(PackManifest const&); // _ZN17MinecraftEventing29fireEventTreatmentPackAppliedERK12PackManifest
    virtual void fireEventPackPlayed(PackInstance const&, unsigned int); // _ZN17MinecraftEventing19fireEventPackPlayedERK12PackInstancej
    virtual void fireEventNewUserPackDetected(PackManifest const&, bool, std::string const&, bool); // _ZN17MinecraftEventing28fireEventNewUserPackDetectedERK12PackManifestbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void fireEventPackHashChanged(PackManifest const&); // _ZN17MinecraftEventing24fireEventPackHashChangedERK12PackManifest
    virtual void fireEventTreatmentPackDownloaded(std::string); // _ZN17MinecraftEventing32fireEventTreatmentPackDownloadedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventTreatmentPackRemoved(std::string); // _ZN17MinecraftEventing29fireEventTreatmentPackRemovedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventContentLogsInWorldSession(std::string const&, unsigned int, unsigned int); // _ZN17MinecraftEventing34fireEventContentLogsInWorldSessionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjj
    virtual void fireRealmConnectionEventStart__incomplete0(long); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireRealmConnectionEventStartEN18IMinecraftEventing19RealmConnectionFlowE
    virtual void fireRealmConnectionEventGenericLambdaCalled__incomplete0(long, long, long); //TODO: incomplete function definition // _ZN17MinecraftEventing43fireRealmConnectionEventGenericLambdaCalledEN18IMinecraftEventing19RealmConnectionFlowENS0_21RealmConnectionLambdaENS0_21RealmConnectionResultE
    virtual void fireEventCompoundCreatorCreated(int, int); // _ZN17MinecraftEventing31fireEventCompoundCreatorCreatedEii
    virtual void fireEventElementConstructorUsed__incomplete0(int, int, long); //TODO: incomplete function definition // _ZN17MinecraftEventing31fireEventElementConstructorUsedEiiN18IMinecraftEventing25ElementConstructorUseTypeE
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
    virtual void fireEventJoinCanceled__incomplete0(long); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireEventJoinCanceledE12LoadingState
    virtual void fireClubsEngagementEvent__incomplete0(long, long, char const*, long, std::string); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireClubsEngagementEventEN18IMinecraftEventing21ClubsEngagementActionENS0_25ClubsEngagementTargetTypeEPKcN6Realms7RealmIdENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireClubsOpenFeedScreenEvent__incomplete0(long, long, std::string); //TODO: incomplete function definition // _ZN17MinecraftEventing28fireClubsOpenFeedScreenEventEN18IMinecraftEventing21ClubsFeedScreenSourceEN6Realms7RealmIdENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventEntitlementListInfo(std::vector<ContentIdentity> &, bool); // _ZN17MinecraftEventing28fireEventEntitlementListInfoERSt6vectorI15ContentIdentitySaIS1_EEb
    virtual void fireEventFileTransmissionState__incomplete0(long, long, long, std::string const&, unsigned long, double); //TODO: incomplete function definition // _ZN17MinecraftEventing30fireEventFileTransmissionStateEN18IMinecraftEventing25FileTransmissionDirectionENS0_21FileTransmissionStateENS0_20FileTransmissionTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEmd
    virtual void fireEventIncognitoFailure(std::string const&, std::string const&); // _ZN17MinecraftEventing25fireEventIncognitoFailureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventDeviceAccountFailure__incomplete0(long, long, unsigned int, std::string const&); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventDeviceAccountFailureEN18IMinecraftEventing11SignInStageENS0_25DeviceAccountFailurePhaseEjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventDeviceAccountSuccess(bool, std::string const&); // _ZN17MinecraftEventing29fireEventDeviceAccountSuccessEbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventStorage(int, std::string const&); // _ZN17MinecraftEventing16fireEventStorageEiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventIAPPurchaseAttempt__incomplete0(std::string const&, std::string const&, long &, long); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventIAPPurchaseAttemptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_R5Offer12PurchasePath
    virtual void fireEventIAPPurchaseResolved__incomplete0(std::string const&, std::string const&, long &, long, long); //TODO: incomplete function definition // _ZN17MinecraftEventing28fireEventIAPPurchaseResolvedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_R5OfferN18IMinecraftEventing14PurchaseResultE12PurchasePath
    virtual void fireEventIAPRedeemAttempt__incomplete0(std::string const&, std::string const&, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventIAPRedeemAttemptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_12PurchasePath
    virtual void fireEventIAPRedeemResolved__incomplete0(std::string const&, std::string const&, std::string const&, long, long); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventIAPRedeemResolvedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_N18IMinecraftEventing14PurchaseResultE12PurchasePath
    virtual void fireEventPurchaseAttempt__incomplete0(std::string const&, std::string const&, std::string const&, long, long); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireEventPurchaseAttemptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_N18IMinecraftEventing9StoreTypeE12PurchasePath
    virtual void fireEventPurchaseResolved__incomplete0(std::string const&, std::string const&, std::string const&, long, long, long); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventPurchaseResolvedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_N18IMinecraftEventing9StoreTypeENS8_14PurchaseResultE12PurchasePath
    virtual void fireEventIAPPurchaseFailure__incomplete0(std::string const&, unsigned short, std::string const&, long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventIAPPurchaseFailureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEtS7_RK12PurchaseInfo
    virtual void fireEventPurchaseFailureDetails(int, std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing31fireEventPurchaseFailureDetailsEiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventTreatmentsCleared(); // _ZN17MinecraftEventing26fireEventTreatmentsClearedEv
    virtual void fireEventTreatmentsSet(std::vector<std::string> const&); // _ZN17MinecraftEventing22fireEventTreatmentsSetERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    virtual void fireEventSetMultiplayerCorrelationId(Player *, std::string const&); // _ZN17MinecraftEventing36fireEventSetMultiplayerCorrelationIdEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventGameSessionStart__incomplete0(Player *, long &, Level &, std::string const&, int, std::string const&, std::string const&, bool); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventGameSessionStartEP6PlayerR15IClientInstanceR5LevelRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSD_SD_b
    virtual void prepEventSearchCatalogRequest__incomplete0(long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing29prepEventSearchCatalogRequestERK22SearchRequestTelemetry
    virtual void fireEventSearchCatalogRequest__incomplete0(long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventSearchCatalogRequestERK22SearchRequestTelemetry
    virtual void fireEventArmorStandItemEquipped(ArmorStand const&, ItemDescriptor const&); // _ZN17MinecraftEventing31fireEventArmorStandItemEquippedERK10ArmorStandRK14ItemDescriptor
    virtual void fireEventArmorStandPosed(ArmorStand const&); // _ZN17MinecraftEventing24fireEventArmorStandPosedERK10ArmorStand
    virtual void fireEventPlayerBounced(Player *, Block const&, int); // _ZN17MinecraftEventing22fireEventPlayerBouncedEP6PlayerRK5Blocki
    virtual void fireEventSetValidForAchievements(Player *, bool); // _ZN17MinecraftEventing32fireEventSetValidForAchievementsEP6Playerb
    virtual void fireEventAchievementReceived(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing28fireEventAchievementReceivedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventWorldLoaded(Player *, Level &, ResourcePackManager &, ResourcePacksInfoData &); // _ZN17MinecraftEventing20fireEventWorldLoadedEP6PlayerR5LevelR19ResourcePackManagerR21ResourcePacksInfoData
    virtual void fireMinecraftVersionLaunched(bool); // _ZN17MinecraftEventing28fireMinecraftVersionLaunchedEb
    virtual void fireMinecraftVersionInviteAccepted(bool, unsigned long); // _ZN17MinecraftEventing34fireMinecraftVersionInviteAcceptedEbm
    virtual void fireDayOneExperienceStateChanged__incomplete0(long, std::optional<unsigned int>, std::optional<unsigned long>); //TODO: incomplete function definition // _ZN17MinecraftEventing32fireDayOneExperienceStateChangedEN18IMinecraftEventing21DayOneExperienceStateESt8optionalIjES2_ImE
    virtual void fireWorldConversionAttemptEvent__incomplete0(long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing31fireWorldConversionAttemptEventERKN6Legacy21WorldConversionReportE
    virtual void fireWorldConversionInitiatedEvent(std::string const&); // _ZN17MinecraftEventing33fireWorldConversionInitiatedEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireLegacyWorldUploadEvent__incomplete0(long const&, bool, long); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireLegacyWorldUploadEventERKN6Legacy21WorldConversionReportEb20WorldConversionError
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
    virtual void fireLessonActionTaken__incomplete0(std::string const&, std::string const&, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireLessonActionTakenERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_N18IMinecraftEventing21EducationLessonActionE
    virtual void fireInAppCodeBuilderActivated__incomplete0(long); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireInAppCodeBuilderActivatedEN18IMinecraftEventing14OpenCodeMethodE
    virtual void fireCodeCommandButtonPressed(); // _ZN17MinecraftEventing28fireCodeCommandButtonPressedEv
    virtual void fireIDESelected(std::string const&)const; // _ZNK17MinecraftEventing15fireIDESelectedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventEduResources()const; // _ZNK17MinecraftEventing21fireEventEduResourcesEv
    virtual void fireEventEduiOSPurchaseTransaction__incomplete0(long const&)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing34fireEventEduiOSPurchaseTransactionERK17TransactionStatus
    virtual void fireEventEduOptionSet(Option const&)const; // _ZNK17MinecraftEventing21fireEventEduOptionSetERK6Option
    virtual void fireEventCodeBuilderClosed()const; // _ZNK17MinecraftEventing26fireEventCodeBuilderClosedEv
    virtual void fireEventEduServiceStatus__incomplete0(std::string const&, std::string const&, int, long)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing25fireEventEduServiceStatusERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_i11buffer_spanISt4pairIN3gsl17basic_string_spanIKcLln1EEESD_EE
    virtual void fireEventWebviewDownload__incomplete0(std::string const&, long const&)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing24fireEventWebviewDownloadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK19WebviewDownloadInfo
    virtual void fireEduServiceRequestFailed__incomplete0(std::string const&, std::string const&, std::string const&, long)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing27fireEduServiceRequestFailedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_11buffer_spanISt4pairIN3gsl17basic_string_spanIKcLln1EEESD_EE
    virtual void fireEventButtonPressed__incomplete0(long, long)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing22fireEventButtonPressedEN3gsl17basic_string_spanIKcLln1EEE11buffer_spanISt4pairIS3_S3_EE
    virtual void fireEventWorldExported(long, unsigned long); // _ZN17MinecraftEventing22fireEventWorldExportedElm
    virtual void fireEventControlRemappedByPlayer__incomplete0(std::string const&, long, int)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing32fireEventControlRemappedByPlayerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE12RawInputTypei
    virtual void fireEventDifficultySet__incomplete0(long, long); //TODO: incomplete function definition // _ZN17MinecraftEventing22fireEventDifficultySetE10DifficultyS0_
    virtual void fireEventGameRulesUpdated(bool, bool, std::string const&); // _ZN17MinecraftEventing25fireEventGameRulesUpdatedEbbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventGameRulesUpdated(int, int, std::string const&); // _ZN17MinecraftEventing25fireEventGameRulesUpdatedEiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventGameRulesUpdated(float, float, std::string const&); // _ZN17MinecraftEventing25fireEventGameRulesUpdatedEffRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventDefaultGameTypeChanged__incomplete0(long, long); //TODO: incomplete function definition // _ZN17MinecraftEventing31fireEventDefaultGameTypeChangedE8GameTypeS0_
    virtual void fireEventConnectionFailed__incomplete0(long); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventConnectionFailedEN18IMinecraftEventing23ConnectionFailureReasonE
    virtual void fireEventOfferRated(std::string const&, int, int, int, double); // _ZN17MinecraftEventing19fireEventOfferRatedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiid
    virtual void fireEventNewContentCheckCompleted(std::string const&, bool); // _ZN17MinecraftEventing33fireEventNewContentCheckCompletedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void fireEventHowToPlayTopicChanged__incomplete0(std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing30fireEventHowToPlayTopicChangedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE9InputMode
    virtual void fireEventApiInit(float, unsigned long); // _ZN17MinecraftEventing16fireEventApiInitEfm
    virtual void fireEventWorldFilesListed(unsigned long, unsigned long, unsigned long, unsigned long); // _ZN17MinecraftEventing25fireEventWorldFilesListedEmmmm
    virtual void fireEventLabTableCreated(int, int, int); // _ZN17MinecraftEventing24fireEventLabTableCreatedEiii
    virtual void fireEventPlayerMessageSay(std::string const&, std::string const&); // _ZN17MinecraftEventing25fireEventPlayerMessageSayERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventPlayerMessageTell(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing26fireEventPlayerMessageTellERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventPlayerMessageChat(std::string const&, std::string const&); // _ZN17MinecraftEventing26fireEventPlayerMessageChatERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventPlayerMessageMe(std::string const&, std::string const&); // _ZN17MinecraftEventing24fireEventPlayerMessageMeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventPlayerMessageTitle(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing27fireEventPlayerMessageTitleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventRealmShared__incomplete0(std::string const&, long const&, long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing20fireEventRealmSharedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN18IMinecraftEventing9ShareModeERKN6Realms7RealmIdE
    virtual void fireEventRealmMemberlistCleared__incomplete0(long const&, int const&); //TODO: incomplete function definition // _ZN17MinecraftEventing31fireEventRealmMemberlistClearedERKN6Realms7RealmIdERKi
    virtual void fireEventRealmUrlGenerated__incomplete0(std::string const&, long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventRealmUrlGeneratedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN6Realms7RealmIdE
    virtual void fireEventStructureExport__incomplete0(long const&, long, long)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing24fireEventStructureExportERK14glTFExportDataN18IMinecraftEventing13ExportOutcomeENS3_11ExportStageE
    virtual void fireEventContentShared__incomplete0(std::string const&, std::string const&, long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing22fireEventContentSharedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RKN18IMinecraftEventing9ShareModeE
    virtual void fireEventStorageReport(std::string const&); // _ZN17MinecraftEventing22fireEventStorageReportERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventStackLoaded(StackStats const&); // _ZN17MinecraftEventing20fireEventStackLoadedERK10StackStats
    virtual void fireEventUnknownBlockReceived(NewBlockID const&, unsigned short); // _ZN17MinecraftEventing29fireEventUnknownBlockReceivedERK10NewBlockIDt
    virtual void fireEventSignInEdu__incomplete0(std::string const&, long, long, std::string const&, std::vector<std::pair<std::string, std::string>> const&); //TODO: incomplete function definition // _ZN17MinecraftEventing18fireEventSignInEduERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE6ADRoleN18IMinecraftEventing14EduSignInStageES7_RKSt6vectorISt4pairIS5_S5_ESaISD_EE
    virtual void fireEventPopupFiredEdu__incomplete0(std::string const&, std::string const&, std::string const&, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing22fireEventPopupFiredEduERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_21ActiveDirectoryAction
    virtual void fireEventAppConfigurationChanged(); // _ZN17MinecraftEventing32fireEventAppConfigurationChangedEv
    virtual void fireEventPurchaseGameAttempt(std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing28fireEventPurchaseGameAttemptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void fireEventTrialDeviceIdCorrelation(long, std::string const&, long, std::string const&); // _ZN17MinecraftEventing33fireEventTrialDeviceIdCorrelationElRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEElS7_
    virtual void fireEventPushNotificationPermission(bool, std::string const&); // _ZN17MinecraftEventing35fireEventPushNotificationPermissionEbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventPushNotificationReceived(PushNotificationMessage const&); // _ZN17MinecraftEventing33fireEventPushNotificationReceivedERK23PushNotificationMessage
    virtual void fireEventPushNotificationOpened(std::string const&, std::string const&); // _ZN17MinecraftEventing31fireEventPushNotificationOpenedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventUploadSkin(std::string const&, std::string const&); // _ZN17MinecraftEventing19fireEventUploadSkinERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void fireEventLicenseCheck__incomplete0(bool, long &); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireEventLicenseCheckEbR16ExtraLicenseData
    virtual void fireEventStorePromotionNotification(std::string const&); // _ZN17MinecraftEventing35fireEventStorePromotionNotificationERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventWorldGenerated(std::string const&, LevelSettings const&, bool); // _ZN17MinecraftEventing23fireEventWorldGeneratedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK13LevelSettingsb
    virtual void fireEventExperimentalGameplay(bool, bool); // _ZN17MinecraftEventing29fireEventExperimentalGameplayEbb
    virtual void fireEventCopyWorldEducationEnabled(); // _ZN17MinecraftEventing34fireEventCopyWorldEducationEnabledEv
    virtual void fireEventStoreOfferClicked(int, int, std::string const&, std::string const&, bool, std::string const&); // _ZN17MinecraftEventing26fireEventStoreOfferClickedEiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_bS7_
    virtual void fireEventStoreSearch__incomplete0(long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing20fireEventStoreSearchERK24StoreSearchTelemetryData
    virtual void fireEventSearchItemSelected(int, int, std::string const&, int, int); // _ZN17MinecraftEventing27fireEventSearchItemSelectedEiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEii
    virtual void fireEventUgcDownloadStarted(std::string const&); // _ZN17MinecraftEventing27fireEventUgcDownloadStartedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fireEventUgcDownloadCompleted(std::string const&, bool); // _ZN17MinecraftEventing29fireEventUgcDownloadCompletedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void fireRealmConnectionEventRealmAPIRequest__incomplete0(long); //TODO: incomplete function definition // _ZN17MinecraftEventing39fireRealmConnectionEventRealmAPIRequestEN18IMinecraftEventing19RealmConnectionFlowE
    virtual void fireRealmConnectionEventRealmAPIResponse__incomplete0(long, int); //TODO: incomplete function definition // _ZN17MinecraftEventing40fireRealmConnectionEventRealmAPIResponseEN18IMinecraftEventing19RealmConnectionFlowEi
    virtual void onUserSignIn__incomplete0(long &); //TODO: incomplete function definition // _ZN17MinecraftEventing12onUserSignInERN6Social12XboxLiveUserE
    virtual void onUserSignOut__incomplete0(long &); //TODO: incomplete function definition // _ZN17MinecraftEventing13onUserSignOutERN6Social12XboxLiveUserE
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
    virtual void fireEventPersonaItemPreviewed__incomplete0(std::string const&, std::string const&, unsigned int, unsigned int, long, bool, long); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventPersonaItemPreviewedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_jjN18IMinecraftEventing13PromotionTypeEbNS8_9StoreTypeE
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
    virtual void fireEventAccountTransferStateChanged__incomplete0(std::string const&, long, std::string const&); //TODO: incomplete function definition // _ZN17MinecraftEventing36fireEventAccountTransferStateChangedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13TransferStateS7_
    virtual void fireStructureBlockAction__incomplete0(long, StructureEditorData const&, StructureTelemetryClientData const*); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireStructureBlockActionEN18IMinecraftEventing24StructureBlockActionTypeERK19StructureEditorDataPK28StructureTelemetryClientData
    virtual void fireStructureBlockRedstoneActivated__incomplete0(long, StructureEditorData const&, StructureTelemetryClientData const*); //TODO: incomplete function definition // _ZN17MinecraftEventing35fireStructureBlockRedstoneActivatedEN18IMinecraftEventing24StructureBlockActionTypeERK19StructureEditorDataPK28StructureTelemetryClientData
    virtual void fireStructureBlockLoadedInUnloadedChunks(unsigned int, BlockPos const&, BlockPos const&); // _ZN17MinecraftEventing40fireStructureBlockLoadedInUnloadedChunksEjRK8BlockPosS2_
    MinecraftEventing(Core::Path const&); // _ZN17MinecraftEventingC2ERKN4Core4PathE
    void init(); // _ZN17MinecraftEventing4initEv
    void unregisterOptionsObserver(); // _ZN17MinecraftEventing25unregisterOptionsObserverEv
//    void fireEventGameTypeChanged(Player *, long, long); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireEventGameTypeChangedEP6Player8GameTypeS2_
    void fireEventHeartbeat(); // _ZN17MinecraftEventing18fireEventHeartbeatEv
    void fireEventBehaviorErrored(Player *, std::string); // _ZN17MinecraftEventing24fireEventBehaviorErroredEP6PlayerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void fireEventBehaviorFailed(Player *, std::string); // _ZN17MinecraftEventing23fireEventBehaviorFailedEP6PlayerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void fireEventPlayerMovementSettings(Player *); // _ZN17MinecraftEventing31fireEventPlayerMovementSettingsEP6Player
//    void fireEventPlayerMovementAnomalyDetected(Player *, long, float, float, float, float, float); //TODO: incomplete function definition // _ZN17MinecraftEventing38fireEventPlayerMovementAnomalyDetectedEP6Player17MovementEventTypefffff
    void fireEventPlayerMovementCorrected(Player *, float, float, bool, float, float, int); // _ZN17MinecraftEventing32fireEventPlayerMovementCorrectedEP6Playerffbffi
//    void fireEventPOIBlockUsageAttempt(Player *, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventPOIBlockUsageAttemptEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_17PoiEventBlockTypeE
//    void fireEventPOIBlockUsed(Player *, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireEventPOIBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_17PoiEventBlockTypeE
//    void fireEventBarrelBlockUsed(Player *, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing24fireEventBarrelBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
    void fireEventBellBlockUsed(Player *, std::string const&); // _ZN17MinecraftEventing22fireEventBellBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//    void fireEventCampfireBlockUsed(Player *, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventCampfireBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//    void fireEventCartographyBlockUsed(Player *, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing29fireEventCartographyBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13MapOutputType
//    void fireEventCauldronBlockUsed(Player *, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing26fireEventCauldronBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//    void fireEventComposterBlockUsed(Player *, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventComposterBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//    void fireEventGrindstoneBlockUsed(Player *, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing28fireEventGrindstoneBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//    void fireEventLecternBlockUsed(Player *, std::string const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventLecternBlockUsedEP6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_23POIBlockInteractionTypeE
//    void fireEventBlockBroken(Player *, Block const&, long, int); //TODO: incomplete function definition // _ZN17MinecraftEventing20fireEventBlockBrokenEP6PlayerRK5BlockNS_20BlockPlacementMethodEi
    void fireEventBlockPlaced(Player *, Block const&, bool); // _ZN17MinecraftEventing20fireEventBlockPlacedEP6PlayerRK5Blockb
    void fireEventBlockFound(Player *, BlockPos const&); // _ZN17MinecraftEventing19fireEventBlockFoundEP6PlayerRK8BlockPos
    void fireEventCraftingSessionEnd(Player *); // _ZN17MinecraftEventing27fireEventCraftingSessionEndEP6Player
    void fireEventCraftingSessionStart(Player *, unsigned int); // _ZN17MinecraftEventing29fireEventCraftingSessionStartEP6Playerj
    void fireEventEndOfDay(Player *, Level &); // _ZN17MinecraftEventing17fireEventEndOfDayEP6PlayerR5Level
//    void fireEventItemAcquired(Player *, ItemDescriptor const&, unsigned int, long); //TODO: incomplete function definition // _ZN17MinecraftEventing21fireEventItemAcquiredEP6PlayerRK14ItemDescriptorj21ItemAcquisitionMethod
    void fireEventItemEquipped(Player *, ItemInstance const&, int); // _ZN17MinecraftEventing21fireEventItemEquippedEP6PlayerRK12ItemInstancei
    void fireEventItemCrafted(Player *, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool); // _ZN17MinecraftEventing20fireEventItemCraftedEP6PlayerRK12ItemInstancebbbiiibb
    void fireEventItemDestroyed(Player *, ItemDescriptor const&, unsigned int); // _ZN17MinecraftEventing22fireEventItemDestroyedEP6PlayerRK14ItemDescriptorj
    void fireEventItemDropped(Player *, ItemDescriptor const&); // _ZN17MinecraftEventing20fireEventItemDroppedEP6PlayerRK14ItemDescriptor
    void fireEventItemSmelted(Player *, ItemDescriptor const&, ItemDescriptor const&); // _ZN17MinecraftEventing20fireEventItemSmeltedEP6PlayerRK14ItemDescriptorS4_
//    void fireEventItemUsed(Player *, ItemDescriptor const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing17fireEventItemUsedEP6PlayerRK14ItemDescriptor13ItemUseMethod
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, ItemEnchants const&); // _ZN17MinecraftEventing22fireEventItemEnchantedEP6PlayerRK14ItemDescriptorRK12ItemEnchants
    void fireEventItemEnchanted(Player *, ItemDescriptor const&, unsigned int, int); // _ZN17MinecraftEventing22fireEventItemEnchantedEP6PlayerRK14ItemDescriptorji
    void fireEventItemNamed(Player *, ItemDescriptor const&); // _ZN17MinecraftEventing18fireEventItemNamedEP6PlayerRK14ItemDescriptor
    void fireEventTradeCompleted(Player *, Actor *, ItemDescriptor const&, ItemDescriptor const&, ItemInstance const&, int); // _ZN17MinecraftEventing23fireEventTradeCompletedEP6PlayerP5ActorRK14ItemDescriptorS6_RK12ItemInstancei
    void fireEventJukeboxUsed(Player *, ItemDescriptor const&); // _ZN17MinecraftEventing20fireEventJukeboxUsedEP6PlayerRK14ItemDescriptor
    void fireEventMenuShown(Player *, unsigned int, unsigned int); // _ZN17MinecraftEventing18fireEventMenuShownEP6Playerjj
    void fireEventMobKilled(Player *, Actor *, Mob &, unsigned int, std::string const&, int); // _ZN17MinecraftEventing18fireEventMobKilledEP6PlayerP5ActorR3MobjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void fireEventBossKilled(Player *, int, long, int); // _ZN17MinecraftEventing19fireEventBossKilledEP6Playerili
//    void fireEventEntityInteracted(Player *, int, long, int, unsigned char); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventEntityInteractedEP6PlayeriNS_15InteractionTypeEih
    void fireEventMobBorn(Player *, int, int, unsigned char); // _ZN17MinecraftEventing16fireEventMobBornEP6Playeriih
    void fireEventAgentCommand(Player &, int, int, std::string const&, std::string const&, std::string const&); // _ZN17MinecraftEventing21fireEventAgentCommandER6PlayeriiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_S9_
    void fireEventAgentCreated(Player &); // _ZN17MinecraftEventing21fireEventAgentCreatedER6Player
//    void fireEventPlayerTeleported(Player *, float, long, int); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventPlayerTeleportedEP6PlayerfNS_18TeleportationCauseEi
    void fireEventPlayerDied(Player *, int, int, int, bool); // _ZN17MinecraftEventing19fireEventPlayerDiedEP6Playeriiib
    void fireEventPlayerSaved(Player *); // _ZN17MinecraftEventing20fireEventPlayerSavedEP6Player
//    void fireEventPortalBuilt(Player *, long); //TODO: incomplete function definition // _ZN17MinecraftEventing20fireEventPortalBuiltEP6Player11AutomaticIDI9DimensioniE
//    void fireEventPortalUsed(Player *, long, long); //TODO: incomplete function definition // _ZN17MinecraftEventing19fireEventPortalUsedEP6Player11AutomaticIDI9DimensioniES4_
    void fireEventPotionBrewed(Player *, ItemDescriptor const&, unsigned int); // _ZN17MinecraftEventing21fireEventPotionBrewedEP6PlayerRK14ItemDescriptorj
    void fireEventCauldronUsed(Player *, short, unsigned int, short); // _ZN17MinecraftEventing21fireEventCauldronUsedEP6Playersjs
    void fireEventFishBucketed(Player *, int, int, int, bool); // _ZN17MinecraftEventing21fireEventFishBucketedEP6Playeriiib
    void fireEventSpecialMobBuilt(Player *, Mob &); // _ZN17MinecraftEventing24fireEventSpecialMobBuiltEP6PlayerR3Mob
    void fireEventVehicleExited(Player *, unsigned int, unsigned long); // _ZN17MinecraftEventing22fireEventVehicleExitedEP6Playerjm
    void fireEventCaravanChanged(Mob &, int); // _ZN17MinecraftEventing23fireEventCaravanChangedER3Mobi
//    void fireEventMobEffectChanged(Mob &, MobEffectInstance const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventMobEffectChangedER3MobRK17MobEffectInstanceNS_10ChangeTypeE
    void fireRaidEvent(Player *, int, int, bool); // _ZN17MinecraftEventing13fireRaidEventEP6Playeriib
//    void fireEventCommandBlockEdited(Player *, BaseCommandBlock const&, bool, long, bool, bool); //TODO: incomplete function definition // _ZN17MinecraftEventing27fireEventCommandBlockEditedEP6PlayerRK16BaseCommandBlockb16CommandBlockModebb
//    void _fireStructureBlockAction(long, StructureEditorData const&, bool, StructureTelemetryClientData const*); //TODO: incomplete function definition // _ZN17MinecraftEventing25_fireStructureBlockActionEN18IMinecraftEventing24StructureBlockActionTypeERK19StructureEditorDatabPK28StructureTelemetryClientData
    void fireEventBookEdited(Player *, ItemDescriptor const&, unsigned int); // _ZN17MinecraftEventing19fireEventBookEditedEP6PlayerRK14ItemDescriptorj
    void fireEventBookImageImported(Player *); // _ZN17MinecraftEventing26fireEventBookImageImportedEP6Player
    void fireEventBookCopied(Player *, ItemInstance const&); // _ZN17MinecraftEventing19fireEventBookCopiedEP6PlayerRK12ItemInstance
    void fireEventBookExported(Player *, int, int); // _ZN17MinecraftEventing21fireEventBookExportedEP6Playerii
    void fireEventSignedBookOpened(Player *, bool); // _ZN17MinecraftEventing25fireEventSignedBookOpenedEP6Playerb
    void fireEventPatternAdded(Player *, ItemInstance const&); // _ZN17MinecraftEventing21fireEventPatternAddedEP6PlayerRK12ItemInstance
    void fireEventPatternRemoved(Player *, int, int, int, int, int); // _ZN17MinecraftEventing23fireEventPatternRemovedEP6Playeriiiii
    void _generateWorldSessionId(); // _ZN17MinecraftEventing23_generateWorldSessionIdEv
    void fireEventWorldUnloaded(Player *, LevelData const&, unsigned int); // _ZN17MinecraftEventing22fireEventWorldUnloadedEP6PlayerRK9LevelDataj
//    void fireEventAwardAchievement(Player *, long); //TODO: incomplete function definition // _ZN17MinecraftEventing25fireEventAwardAchievementEP6PlayerNS_14AchievementIdsE
    void fireEventAwardTrophy(Player const*, unsigned int); // _ZN17MinecraftEventing20fireEventAwardTrophyEPK6Playerj
//    void fireEventMultiplayerRoundStart(Player *, Level &, std::string const&, int, std::string const&, int, long const&); //TODO: incomplete function definition // _ZN17MinecraftEventing30fireEventMultiplayerRoundStartEP6PlayerR5LevelRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSB_iRKN6Realms5WorldE
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
//    void fireEventItemInteracted(Player *, ItemInstance const&, long); //TODO: incomplete function definition // _ZN17MinecraftEventing23fireEventItemInteractedEP6PlayerRK12ItemInstanceNS_18ItemInteractMethodE
    void _fireEventPackImportStage(ResourcePack const*, PackManifest const&, std::string const&, std::string const&, bool, bool); // _ZN17MinecraftEventing25_fireEventPackImportStageEPK12ResourcePackRK12PackManifestRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESD_bb
    void addBehaviorPackData(Social::Events::Event &, BehaviorPackContents const&); // _ZN17MinecraftEventing19addBehaviorPackDataERN6Social6Events5EventERK20BehaviorPackContents
    void addResourcePackData(Social::Events::Event &, ResourcePackContents const&); // _ZN17MinecraftEventing19addResourcePackDataERN6Social6Events5EventERK20ResourcePackContents
//    void _addConversionReportData(Social::Events::Event &, long const*); //TODO: incomplete function definition // _ZN17MinecraftEventing24_addConversionReportDataERN6Social6Events5EventEPKN4mclc16ConversionReportE
    void _getAccountType(std::shared_ptr<long>); // _ZN17MinecraftEventing15_getAccountTypeESt10shared_ptrIN6Social4UserEE
//    std::string _convertStoreTypeToString(long)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing25_convertStoreTypeToStringB5cxx11EN18IMinecraftEventing9StoreTypeE
//    std::string _convertPurchasePathToString(long)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing28_convertPurchasePathToStringB5cxx11E12PurchasePath
//    std::string _convertPromotionTypeToString(long)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing29_convertPromotionTypeToStringB5cxx11EN18IMinecraftEventing13PromotionTypeE
//    void fireEventPetDied(Player *, bool, Actor *, long, unsigned int); //TODO: incomplete function definition // _ZN17MinecraftEventing16fireEventPetDiedEP6PlayerbP5Actor9ActorTypej
//    void _addCommonPurchaseEventProperties(Social::Events::Event &, std::string const&, std::string const&, std::string const&, long)const; //TODO: incomplete function definition // _ZNK17MinecraftEventing33_addCommonPurchaseEventPropertiesERN6Social6Events5EventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_SB_12PurchasePath
};
