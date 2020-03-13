#pragma once

#include <string>
#include "IAppPlatform.h"


class AppPlatform : IAppPlatform {

public:
    static long HOME_PATH;
    static long SETTINGS_PATH;
    static long LOG_PATH;
    static long SHADERCACHE_PATH;
    static long mIsInitialized;

    ~AppPlatform(); // _ZN11AppPlatformD2Ev
    virtual void restartRequested(); // _ZN11AppPlatform16restartRequestedEv
    virtual std::string getLoggingPath()const; // _ZNK11AppPlatform14getLoggingPathB5cxx11Ev
    virtual bool isLowMemoryDevice()const; // _ZNK11AppPlatform17isLowMemoryDeviceEv
    virtual void initializeScreenDependentResources(); // _ZN11AppPlatform34initializeScreenDependentResourcesEv
    virtual void getHighPerformanceThreadsCount()const; // _ZNK11AppPlatform30getHighPerformanceThreadsCountEv
    virtual void getTotalHardwareThreadsCount()const; // _ZNK11AppPlatform28getTotalHardwareThreadsCountEv
    virtual void restartApp(bool); // _ZN11AppPlatform10restartAppEb
    virtual void _fireAppTerminated(); // _ZN11AppPlatform18_fireAppTerminatedEv
    virtual bool hasFastAlphaTest()const; // _ZNK11AppPlatform16hasFastAlphaTestEv
    virtual bool supportsScripting()const; // _ZNK11AppPlatform17supportsScriptingEv
    virtual bool supportsInPackageRecursion()const; // _ZNK11AppPlatform26supportsInPackageRecursionEv
    virtual bool supportsXboxLiveAchievements()const; // _ZNK11AppPlatform28supportsXboxLiveAchievementsEv
    virtual void hideSplashScreen(); // _ZN11AppPlatform16hideSplashScreenEv
    virtual std::string getFeedbackHelpLink()const; // _ZNK11AppPlatform19getFeedbackHelpLinkB5cxx11Ev
    virtual std::string getModalErrorMessageProc(); // _ZN11AppPlatform24getModalErrorMessageProcB5cxx11Ev
    virtual void updateLocalization(std::string const&); // _ZN11AppPlatform18updateLocalizationERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void setSleepEnabled(bool); // _ZN11AppPlatform15setSleepEnabledEb
    virtual std::string getInternalPackStoragePath()const; // _ZNK11AppPlatform26getInternalPackStoragePathB5cxx11Ev
    virtual std::string getSettingsPath(); // _ZN11AppPlatform15getSettingsPathB5cxx11Ev
    virtual std::string getPackagedShaderCachePath(); // _ZN11AppPlatform26getPackagedShaderCachePathB5cxx11Ev
    virtual std::string getShaderCachePath(); // _ZN11AppPlatform18getShaderCachePathB5cxx11Ev
    virtual std::string getUserdataPathForLevels()const; // _ZNK11AppPlatform24getUserdataPathForLevelsB5cxx11Ev
    virtual std::string getCacheStoragePath(); // _ZN11AppPlatform19getCacheStoragePathB5cxx11Ev
    virtual std::string getOnDiskScratchPath(); // _ZN11AppPlatform20getOnDiskScratchPathB5cxx11Ev
    virtual std::string getOnDiskPackScratchPath(); // _ZN11AppPlatform24getOnDiskPackScratchPathB5cxx11Ev
    virtual std::string getLevelInfoCachePath()const; // _ZNK11AppPlatform21getLevelInfoCachePathB5cxx11Ev
    virtual std::string getCatalogSearchScratchPath(); // _ZN11AppPlatform27getCatalogSearchScratchPathB5cxx11Ev
    virtual bool hasSeparatedStorageAreasForContentAcquisition()const; // _ZNK11AppPlatform45hasSeparatedStorageAreasForContentAcquisitionEv
    virtual void getOptimalLDBSize(); // _ZN11AppPlatform17getOptimalLDBSizeEv
    virtual void showDialog(int); // _ZN11AppPlatform10showDialogEi
    virtual void createUserInput(); // _ZN11AppPlatform15createUserInputEv
    virtual void getUserInputStatus(); // _ZN11AppPlatform18getUserInputStatusEv
    virtual std::string getUserInput(); // _ZN11AppPlatform12getUserInputB5cxx11Ev
//  virtual void getFileAccess(ResourceFileSystem); //TODO: incomplete function definition // _ZN11AppPlatform13getFileAccessE18ResourceFileSystem
    virtual std::string copyImportFileToTempFolder(Core::Path const&); // _ZN11AppPlatform26copyImportFileToTempFolderB5cxx11ERKN4Core4PathE
    virtual void registerFileForCollectionWithCrashDump(Core::Path const&); // _ZN11AppPlatform38registerFileForCollectionWithCrashDumpERKN4Core4PathE
    virtual void getScreenWidth(); // _ZN11AppPlatform14getScreenWidthEv
    virtual void getScreenHeight(); // _ZN11AppPlatform15getScreenHeightEv
    virtual void setScreenSize(int, int); // _ZN11AppPlatform13setScreenSizeEii
    virtual void setWindowSize(int, int); // _ZN11AppPlatform13setWindowSizeEii
    virtual void setWindowText(std::string const&); // _ZN11AppPlatform13setWindowTextERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getPixelsPerMillimeter(); // _ZN11AppPlatform22getPixelsPerMillimeterEv
    virtual void getOperationMode()const; // _ZNK11AppPlatform16getOperationModeEv
    virtual void allowContentLogWriteToDisk(); // _ZN11AppPlatform26allowContentLogWriteToDiskEv
    virtual bool supportsLaunchingLegacyVersion()const; // _ZNK11AppPlatform30supportsLaunchingLegacyVersionEv
    virtual void launchLegacyVersion(); // _ZN11AppPlatform19launchLegacyVersionEv
    virtual bool canManageLegacyData()const; // _ZNK11AppPlatform19canManageLegacyDataEv
    virtual bool supportsDayOneExperience()const; // _ZNK11AppPlatform24supportsDayOneExperienceEv
    virtual bool hasBroadcastPermission(); // _ZN11AppPlatform22hasBroadcastPermissionEv
//  virtual bool hasAppInstalled(ExternalApp)const; //TODO: incomplete function definition // _ZNK11AppPlatform15hasAppInstalledE11ExternalApp
//  virtual void navigateToStoreForApp(ExternalApp)const; //TODO: incomplete function definition // _ZNK11AppPlatform21navigateToStoreForAppE11ExternalApp
//  virtual void launchApp(ExternalApp)const; //TODO: incomplete function definition // _ZNK11AppPlatform9launchAppE11ExternalApp
//  virtual bool canSupportApp(ExternalApp)const; //TODO: incomplete function definition // _ZNK11AppPlatform13canSupportAppE11ExternalApp
    virtual void startBroadcast(); // _ZN11AppPlatform14startBroadcastEv
    virtual bool isContentAutoUpdateAllowed()const; // _ZNK11AppPlatform26isContentAutoUpdateAllowedEv
    virtual void getMaxSimultaneousDownloads()const; // _ZNK11AppPlatform27getMaxSimultaneousDownloadsEv
    virtual void getMaxSimultaneousServiceRequests()const; // _ZNK11AppPlatform33getMaxSimultaneousServiceRequestsEv
    virtual bool isDownloadAndImportBlocking()const; // _ZNK11AppPlatform27isDownloadAndImportBlockingEv
    virtual bool isDownloadBuffered()const; // _ZNK11AppPlatform18isDownloadBufferedEv
    virtual bool supportsAutoSaveOnDBCompaction()const; // _ZNK11AppPlatform30supportsAutoSaveOnDBCompactionEv
    virtual void updateTextBoxText(std::string const&); // _ZN11AppPlatform17updateTextBoxTextERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isKeyboardVisible(); // _ZN11AppPlatform17isKeyboardVisibleEv
    virtual bool supportsVibration(); // _ZN11AppPlatform17supportsVibrationEv
    virtual void vibrate(int); // _ZN11AppPlatform7vibrateEi
    virtual std::string getAssetFileFullPath(Core::Path const&); // _ZN11AppPlatform20getAssetFileFullPathB5cxx11ERKN4Core4PathE
    virtual std::string readAssetFile(Core::Path const&); // _ZN11AppPlatform13readAssetFileB5cxx11ERKN4Core4PathE
    virtual void listAssetFilesIn(Core::Path const&, std::string const&)const; // _ZNK11AppPlatform16listAssetFilesInERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool supportsClientUpdate()const; // _ZNK11AppPlatform20supportsClientUpdateEv
    virtual std::string getClientUpdateUrl()const; // _ZNK11AppPlatform18getClientUpdateUrlB5cxx11Ev
    virtual void checkLicense(); // _ZN11AppPlatform12checkLicenseEv
    virtual bool hasBuyButtonWhenInvalidLicense(); // _ZN11AppPlatform30hasBuyButtonWhenInvalidLicenseEv
    virtual bool isNetworkAvailable(); // _ZN11AppPlatform18isNetworkAvailableEv
    virtual bool isNetworkEnabled(bool); // _ZN11AppPlatform16isNetworkEnabledEb
    virtual void setNetworkAllowed(bool); // _ZN11AppPlatform17setNetworkAllowedEb
    virtual bool isNetworkAllowed(); // _ZN11AppPlatform16isNetworkAllowedEv
    virtual void multiplayerRequiresPremiumAccess()const; // _ZNK11AppPlatform32multiplayerRequiresPremiumAccessEv
    virtual void multiplayerRequiresUGCEnabled()const; // _ZNK11AppPlatform29multiplayerRequiresUGCEnabledEv
    virtual bool isCrossPlatformToggleVisible()const; // _ZNK11AppPlatform28isCrossPlatformToggleVisibleEv
    virtual bool isTelemetryAllowed(); // _ZN11AppPlatform18isTelemetryAllowedEv
    virtual bool isTrialWorldsTransferToFullGameAllowed()const; // _ZNK11AppPlatform38isTrialWorldsTransferToFullGameAllowedEv
    virtual void buyGame(); // _ZN11AppPlatform7buyGameEv
    virtual void finish(); // _ZN11AppPlatform6finishEv
    virtual bool canLaunchUri(std::string const&); // _ZN11AppPlatform12canLaunchUriERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void launchUri(std::string const&); // _ZN11AppPlatform9launchUriERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void launchSettings(); // _ZN11AppPlatform14launchSettingsEv
    virtual bool isRatingsPromptSupported()const; // _ZNK11AppPlatform24isRatingsPromptSupportedEv
    virtual void launchRatingsPrompt(); // _ZN11AppPlatform19launchRatingsPromptEv
    virtual void useXboxControlHelpers()const; // _ZNK11AppPlatform21useXboxControlHelpersEv
    virtual void getPlatformType()const; // _ZNK11AppPlatform15getPlatformTypeEv
    virtual bool isCentennial()const; // _ZNK11AppPlatform12isCentennialEv
    virtual std::string getPackageFamilyName()const; // _ZNK11AppPlatform20getPackageFamilyNameB5cxx11Ev
    virtual void getBuildPlatform()const; // _ZNK11AppPlatform16getBuildPlatformEv
//  virtual void setARVRPlatform(ARVRPlatform); //TODO: incomplete function definition // _ZN11AppPlatform15setARVRPlatformE12ARVRPlatform
    virtual void getARVRPlatform()const; // _ZNK11AppPlatform15getARVRPlatformEv
    virtual void getNumberOfParticleFramesToInterpolate()const; // _ZNK11AppPlatform38getNumberOfParticleFramesToInterpolateEv
//  virtual void setVRControllerType(VRControllerType); //TODO: incomplete function definition // _ZN11AppPlatform19setVRControllerTypeE16VRControllerType
    virtual void getVRControllerType()const; // _ZNK11AppPlatform19getVRControllerTypeEv
    virtual bool hasIDEProfiler(); // _ZN11AppPlatform14hasIDEProfilerEv
    virtual std::string getPlatformStringVar(int); // _ZN11AppPlatform20getPlatformStringVarB5cxx11Ei
    virtual void getMaximumUsedMemory(); // _ZN11AppPlatform20getMaximumUsedMemoryEv
    virtual void getMaxSimRadiusInChunks()const; // _ZNK11AppPlatform23getMaxSimRadiusInChunksEv
    virtual std::string getBroadcastAddresses(); // _ZN11AppPlatform21getBroadcastAddressesB5cxx11Ev
    virtual std::string getIPAddresses(); // _ZN11AppPlatform14getIPAddressesB5cxx11Ev
    virtual void useAppPlatformForTelemetryIPAddress(); // _ZN11AppPlatform35useAppPlatformForTelemetryIPAddressEv
    virtual std::string getModelName(); // _ZN11AppPlatform12getModelNameB5cxx11Ev
    virtual bool usesHDRBrightness()const; // _ZNK11AppPlatform17usesHDRBrightnessEv
//  virtual void setFullscreenMode(FullscreenMode); //TODO: incomplete function definition // _ZN11AppPlatform17setFullscreenModeE14FullscreenMode
    virtual bool isNetworkThrottled(); // _ZN11AppPlatform18isNetworkThrottledEv
    virtual bool isLANAllowed()const; // _ZNK11AppPlatform12isLANAllowedEv
    virtual bool doesLANRequireMultiplayerRestrictions()const; // _ZNK11AppPlatform37doesLANRequireMultiplayerRestrictionsEv
    virtual void trackPurchaseEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&); // _ZN11AppPlatform18trackPurchaseEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_S7_S7_S7_S7_
    virtual void sendBrazeEvent(std::string const&); // _ZN11AppPlatform14sendBrazeEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void sendBrazeEventWithProperty(std::string const&, std::string const&, int); // _ZN11AppPlatform26sendBrazeEventWithPropertyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_i
    virtual void sendBrazeEventWithStringProperty(std::string const&, std::string const&, std::string const&); // _ZN11AppPlatform32sendBrazeEventWithStringPropertyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    virtual void sendBrazeToastClick(); // _ZN11AppPlatform19sendBrazeToastClickEv
    virtual void sendBrazeDialogButtonClick(int); // _ZN11AppPlatform26sendBrazeDialogButtonClickEi
    virtual void collectGraphicsHardwareDetails(); // _ZN11AppPlatform30collectGraphicsHardwareDetailsEv
    virtual std::string getEdition()const; // _ZNK11AppPlatform10getEditionB5cxx11Ev
    virtual void getOSVersion()const; // _ZNK11AppPlatform12getOSVersionEv
    virtual bool isBrazeEnabled()const; // _ZNK11AppPlatform14isBrazeEnabledEv
    virtual bool isFireTV()const; // _ZNK11AppPlatform8isFireTVEv
    virtual bool isWin10Arm()const; // _ZNK11AppPlatform10isWin10ArmEv
    virtual void setThreadsFrozen(bool); // _ZN11AppPlatform16setThreadsFrozenEb
    virtual void areThreadsFrozen()const; // _ZNK11AppPlatform16areThreadsFrozenEv
    virtual void getDefaultSafeZoneScaleX()const; // _ZNK11AppPlatform24getDefaultSafeZoneScaleXEv
    virtual void getDefaultSafeZoneScaleY()const; // _ZNK11AppPlatform24getDefaultSafeZoneScaleYEv
    virtual void getDefaultScreenPositionX()const; // _ZNK11AppPlatform25getDefaultScreenPositionXEv
    virtual void getDefaultScreenPositionY()const; // _ZNK11AppPlatform25getDefaultScreenPositionYEv
    virtual bool isQuitCapable()const; // _ZNK11AppPlatform13isQuitCapableEv
    virtual void requireControllerAtStartup()const; // _ZNK11AppPlatform26requireControllerAtStartupEv
    virtual void notifyControllerConnectionStateChange()const; // _ZNK11AppPlatform37notifyControllerConnectionStateChangeEv
    virtual void platformRequiresControllerApplet()const; // _ZNK11AppPlatform32platformRequiresControllerAppletEv
    virtual void getDefaultInputMode()const; // _ZNK11AppPlatform19getDefaultInputModeEv
    virtual bool supportsTextToSpeech()const; // _ZNK11AppPlatform20supportsTextToSpeechEv
    virtual void getSecureStorage(); // _ZN11AppPlatform16getSecureStorageEv
    virtual void getSecureStorageKey(std::string const&); // _ZN11AppPlatform19getSecureStorageKeyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void setSecureStorageKey(std::string const&, SecureStorageKey const&); // _ZN11AppPlatform19setSecureStorageKeyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK16SecureStorageKey
    virtual void reloadRenderResourcesOnResume()const; // _ZNK11AppPlatform29reloadRenderResourcesOnResumeEv
    virtual void shouldPauseDownloadsWhenEnterGame()const; // _ZNK11AppPlatform33shouldPauseDownloadsWhenEnterGameEv
    virtual void compareAppReceiptToLocalReceipt(std::string const&); // _ZN11AppPlatform31compareAppReceiptToLocalReceiptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getThirdPartyPackUUID()const; // _ZNK11AppPlatform21getThirdPartyPackUUIDEv
    virtual bool alwaysUseZippedPacksForDlc()const; // _ZNK11AppPlatform26alwaysUseZippedPacksForDlcEv
    virtual bool allowsResourcePackDevelopment()const; // _ZNK11AppPlatform29allowsResourcePackDevelopmentEv
    virtual bool supportsLegacySinglePremiumCacheDirectory()const; // _ZNK11AppPlatform41supportsLegacySinglePremiumCacheDirectoryEv
    virtual bool supportsWorldShare()const; // _ZNK11AppPlatform18supportsWorldShareEv
    virtual bool hasJournalingFilesystem()const; // _ZNK11AppPlatform23hasJournalingFilesystemEv
    virtual bool isAutoCompactionEnabled()const; // _ZNK11AppPlatform23isAutoCompactionEnabledEv
    virtual void getLevelSaveInterval()const; // _ZNK11AppPlatform20getLevelSaveIntervalEv
    virtual void getOptionsSaveInterval()const; // _ZNK11AppPlatform22getOptionsSaveIntervalEv
    virtual bool hasPlatformSpecificInvites()const; // _ZNK11AppPlatform26hasPlatformSpecificInvitesEv
    virtual void usePlatformProfilePicturesOnly()const; // _ZNK11AppPlatform30usePlatformProfilePicturesOnlyEv
    virtual bool requiresXboxLiveSigninToPlay()const; // _ZNK11AppPlatform28requiresXboxLiveSigninToPlayEv
    virtual bool requiresLiveGoldForMultiplayer()const; // _ZNK11AppPlatform30requiresLiveGoldForMultiplayerEv
    virtual void shouldRegisterForXboxLiveNotifications()const; // _ZNK11AppPlatform38shouldRegisterForXboxLiveNotificationsEv
    virtual bool isRealmsEnabled()const; // _ZNK11AppPlatform15isRealmsEnabledEv
    virtual void minimizeBackgroundDownloads()const; // _ZNK11AppPlatform27minimizeBackgroundDownloadsEv
    virtual bool requiresAutoSaveIconExplanationPopup()const; // _ZNK11AppPlatform36requiresAutoSaveIconExplanationPopupEv
    virtual void getExtraLevelSaveDataIconParams(std::string const&)const; // _ZNK11AppPlatform31getExtraLevelSaveDataIconParamsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool requiresPatchNoticePopup()const; // _ZNK11AppPlatform24requiresPatchNoticePopupEv
    virtual void getMultiplayerServiceListToRegister()const; // _ZNK11AppPlatform35getMultiplayerServiceListToRegisterEv
    virtual void getBroadcastingMultiplayerServiceIds(bool, bool)const; // _ZNK11AppPlatform36getBroadcastingMultiplayerServiceIdsEbb
    virtual void maxFileDataRequestConcurrency()const; // _ZNK11AppPlatform29maxFileDataRequestConcurrencyEv
    virtual void goToExternalConsumablesStoreListing()const; // _ZNK11AppPlatform35goToExternalConsumablesStoreListingEv
    virtual void getStoreNetworkFailureTimeout()const; // _ZNK11AppPlatform29getStoreNetworkFailureTimeoutEv
//  virtual void createLoggingStorageArea(Core::FileAccessType, Core::Path const&); //TODO: incomplete function definition // _ZN11AppPlatform24createLoggingStorageAreaEN4Core14FileAccessTypeERKNS0_4PathE
    virtual void handlePlatformSpecificSPIErrors(std::string const&); // _ZN11AppPlatform31handlePlatformSpecificSPIErrorsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void useNativeStoreForRealmsPurchase(); // _ZN11AppPlatform31useNativeStoreForRealmsPurchaseEv
    virtual void importAsFlatFile()const; // _ZNK11AppPlatform16importAsFlatFileEv
    virtual bool isWebviewSupported()const; // _ZNK11AppPlatform18isWebviewSupportedEv
//  virtual void createWebview(Webview::PlatformArguments &&)const; //TODO: incomplete function definition // _ZNK11AppPlatform13createWebviewEON7Webview17PlatformArgumentsE
    virtual void createXboxLiveSignInHandler()const; // _ZNK11AppPlatform27createXboxLiveSignInHandlerEv
    virtual void getPlatformTTSExists()const; // _ZNK11AppPlatform20getPlatformTTSExistsEv
    virtual void getPlatformTTSEnabled()const; // _ZNK11AppPlatform21getPlatformTTSEnabledEv
    virtual void getRenderSurfaceParameters()const; // _ZNK11AppPlatform26getRenderSurfaceParametersEv
    virtual void shouldRemoveGraphicsDeviceOnAppTermination()const; // _ZNK11AppPlatform42shouldRemoveGraphicsDeviceOnAppTerminationEv
    virtual bool isJoinableViaExternalServers()const; // _ZNK11AppPlatform28isJoinableViaExternalServersEv
    virtual void onPrimaryUserNetworkReady(); // _ZN11AppPlatform25onPrimaryUserNetworkReadyEv
    virtual bool requiresNetworkOutageMessaging()const; // _ZNK11AppPlatform30requiresNetworkOutageMessagingEv
    virtual bool usesAsyncOptionSaving()const; // _ZNK11AppPlatform21usesAsyncOptionSavingEv
    virtual void showPlatformStoreIcon(bool); // _ZN11AppPlatform21showPlatformStoreIconEb
    virtual void getPlatformDpi()const; // _ZNK11AppPlatform14getPlatformDpiEv
    virtual void getPlatformUIScalingRules()const; // _ZNK11AppPlatform25getPlatformUIScalingRulesEv
    virtual void _onInitialize(); // _ZN11AppPlatform13_onInitializeEv
    virtual void _onTeardown(); // _ZN11AppPlatform11_onTeardownEv
    AppPlatform(); // _ZN11AppPlatformC2Ev
    void initialize(); // _ZN11AppPlatform10initializeEv
    void _initializeLoadProfiler(); // _ZN11AppPlatform23_initializeLoadProfilerEv
    void calculateIfLowMemoryDevice(); // _ZN11AppPlatform26calculateIfLowMemoryDeviceEv
    void _initLastDeviceSessionId(); // _ZN11AppPlatform24_initLastDeviceSessionIdEv
    void teardown(); // _ZN11AppPlatform8teardownEv
    void setCommonPlatformShim(BedrockEngine::CommonPlatform *); // _ZN11AppPlatform21setCommonPlatformShimEPN13BedrockEngine14CommonPlatformE
    void getDpi()const; // _ZNK11AppPlatform6getDpiEv
    void setDpi(int); // _ZN11AppPlatform6setDpiEi
    void getUIScalingRules()const; // _ZNK11AppPlatform17getUIScalingRulesEv
//  void setUIScalingRules(UIScalingRules); //TODO: incomplete function definition // _ZN11AppPlatform17setUIScalingRulesE14UIScalingRules
    void getPlatformRuntimeInformation()const; // _ZNK11AppPlatform29getPlatformRuntimeInformationEv
    void accessPlatformRuntimeInformation_Shim(); // _ZN11AppPlatform37accessPlatformRuntimeInformation_ShimEv
    void getPlatformBuildInformation()const; // _ZNK11AppPlatform27getPlatformBuildInformationEv
    void accessPlatformBuildInformation_Shim(); // _ZN11AppPlatform35accessPlatformBuildInformation_ShimEv
    void getAppLifecycleContext(); // _ZN11AppPlatform22getAppLifecycleContextEv
    void getFocusState(); // _ZN11AppPlatform13getFocusStateEv
    std::string getScratchPath(); // _ZN11AppPlatform14getScratchPathB5cxx11Ev
    void createUserInput(int); // _ZN11AppPlatform15createUserInputEi
//  void StringizeUIScalingRules(UIScalingRules); //TODO: incomplete function definition // _ZN11AppPlatform23StringizeUIScalingRulesE14UIScalingRules
    void addListener(AppPlatformListener *, float); // _ZN11AppPlatform11addListenerEP19AppPlatformListenerf
    void notifyTerminate(); // _ZN11AppPlatform15notifyTerminateEv
    bool isTerminating()const; // _ZNK11AppPlatform13isTerminatingEv
    void removeListener(AppPlatformListener *); // _ZN11AppPlatform14removeListenerEP19AppPlatformListener
//  void addNetworkChangeObserver(NetworkChangeObserver &); //TODO: incomplete function definition // _ZN11AppPlatform24addNetworkChangeObserverER21NetworkChangeObserver
    void getDefaultUIProfile()const; // _ZNK11AppPlatform19getDefaultUIProfileEv
    void setMockMultiplayerActive(bool); // _ZN11AppPlatform24setMockMultiplayerActiveEb
    bool isInitialized(); // _ZN11AppPlatform13isInitializedEv
    bool isEduMode()const; // _ZNK11AppPlatform9isEduModeEv
};
