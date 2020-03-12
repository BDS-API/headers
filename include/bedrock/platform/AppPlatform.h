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

    ~AppPlatform();
    virtual void updateLocalization(std::string const&);
    virtual void getDefaultInputMode()const;
    virtual void createUserInput();
    virtual void setNetworkAllowed(bool);
    virtual void sendBrazeToastClick();
    virtual bool supportsTextToSpeech()const;
    virtual void hideSplashScreen();
    virtual void listAssetFilesIn(Core::Path const&, std::string const&)const;
    virtual bool isNetworkThrottled();
    virtual std::string getBroadcastAddresses();
    virtual bool isNetworkEnabled(bool);
    virtual bool supportsLegacySinglePremiumCacheDirectory()const;
//  virtual void createLoggingStorageArea(Core::FileAccessType, Core::Path const&); //TODO: incomplete function definition
    virtual void getScreenHeight();
    virtual void compareAppReceiptToLocalReceipt(std::string const&);
    virtual void getUserInputStatus();
//  virtual void setARVRPlatform(ARVRPlatform); //TODO: incomplete function definition
    virtual std::string getPlatformStringVar(int);
    virtual bool doesLANRequireMultiplayerRestrictions()const;
    virtual bool isWin10Arm()const;
    virtual void getStoreNetworkFailureTimeout()const;
    virtual void vibrate(int);
    virtual void getNumberOfParticleFramesToInterpolate()const;
    virtual bool requiresNetworkOutageMessaging()const;
//  virtual void navigateToStoreForApp(ExternalApp)const; //TODO: incomplete function definition
    virtual bool hasFastAlphaTest()const;
    virtual void getPlatformTTSExists()const;
    virtual void getMaximumUsedMemory();
//  virtual void createWebview(Webview::PlatformArguments &&)const; //TODO: incomplete function definition
    virtual void multiplayerRequiresUGCEnabled()const;
    virtual std::string getShaderCachePath();
    virtual void getPlatformDpi()const;
    virtual void getThirdPartyPackUUID()const;
    virtual bool isLowMemoryDevice()const;
    virtual void getPlatformUIScalingRules()const;
    virtual std::string getLevelInfoCachePath()const;
    virtual void setWindowSize(int, int);
    virtual void collectGraphicsHardwareDetails();
    virtual void usePlatformProfilePicturesOnly()const;
    virtual void trackPurchaseEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void getHighPerformanceThreadsCount()const;
    virtual bool isTrialWorldsTransferToFullGameAllowed()const;
    virtual bool isDownloadAndImportBlocking()const;
    virtual void multiplayerRequiresPremiumAccess()const;
    virtual void notifyControllerConnectionStateChange()const;
    virtual bool supportsDayOneExperience()const;
    virtual bool requiresXboxLiveSigninToPlay()const;
    virtual void getTotalHardwareThreadsCount()const;
    virtual void getScreenWidth();
    virtual void shouldRemoveGraphicsDeviceOnAppTermination()const;
    virtual bool isNetworkAllowed();
    virtual void setSecureStorageKey(std::string const&, SecureStorageKey const&);
    virtual std::string getAssetFileFullPath(Core::Path const&);
    virtual bool isCrossPlatformToggleVisible()const;
    virtual void getLevelSaveInterval()const;
    virtual void _onTeardown();
    virtual void allowContentLogWriteToDisk();
    virtual bool isRatingsPromptSupported()const;
//  virtual bool hasAppInstalled(ExternalApp)const; //TODO: incomplete function definition
    virtual bool isLANAllowed()const;
    virtual bool usesAsyncOptionSaving()const;
    virtual bool hasSeparatedStorageAreasForContentAcquisition()const;
    virtual bool canLaunchUri(std::string const&);
    virtual void restartRequested();
    virtual std::string getUserInput();
    virtual bool allowsResourcePackDevelopment()const;
    virtual bool isNetworkAvailable();
    virtual void maxFileDataRequestConcurrency()const;
    virtual void getVRControllerType()const;
    virtual void handlePlatformSpecificSPIErrors(std::string const&);
    virtual void onPrimaryUserNetworkReady();
    virtual void getRenderSurfaceParameters()const;
    virtual void getBuildPlatform()const;
    virtual void getSecureStorage();
    virtual void shouldRegisterForXboxLiveNotifications()const;
    virtual bool supportsWorldShare()const;
    virtual std::string getSettingsPath();
    virtual bool isDownloadBuffered()const;
    virtual std::string getClientUpdateUrl()const;
    virtual void goToExternalConsumablesStoreListing()const;
    virtual void sendBrazeEvent(std::string const&);
    virtual void setScreenSize(int, int);
    virtual void _fireAppTerminated();
    virtual bool supportsVibration();
    virtual void getPlatformType()const;
    virtual void getOperationMode()const;
    virtual void getDefaultScreenPositionX()const;
    virtual void getDefaultScreenPositionY()const;
    virtual bool isJoinableViaExternalServers()const;
    virtual void updateTextBoxText(std::string const&);
    virtual void getExtraLevelSaveDataIconParams(std::string const&)const;
    virtual void launchLegacyVersion();
    virtual bool isWebviewSupported()const;
    virtual void getDefaultSafeZoneScaleX()const;
    virtual bool supportsAutoSaveOnDBCompaction()const;
    virtual void sendBrazeEventWithProperty(std::string const&, std::string const&, int);
    virtual void getDefaultSafeZoneScaleY()const;
    virtual void requireControllerAtStartup()const;
    virtual bool hasPlatformSpecificInvites()const;
    virtual void getMaxSimultaneousServiceRequests()const;
    virtual void shouldPauseDownloadsWhenEnterGame()const;
    virtual void sendBrazeEventWithStringProperty(std::string const&, std::string const&, std::string const&);
    virtual bool usesHDRBrightness()const;
    virtual void setThreadsFrozen(bool);
    virtual void checkLicense();
    virtual bool isFireTV()const;
    virtual bool isQuitCapable()const;
    virtual void getMultiplayerServiceListToRegister()const;
    virtual void getSecureStorageKey(std::string const&);
    virtual bool supportsClientUpdate()const;
    virtual std::string getPackagedShaderCachePath();
    virtual std::string getUserdataPathForLevels()const;
    virtual bool supportsScripting()const;
    virtual void showDialog(int);
    virtual std::string getPackageFamilyName()const;
    virtual bool isCentennial()const;
    virtual bool requiresAutoSaveIconExplanationPopup()const;
    virtual void useXboxControlHelpers()const;
    virtual void buyGame();
//  virtual void setVRControllerType(VRControllerType); //TODO: incomplete function definition
    virtual bool hasBuyButtonWhenInvalidLicense();
    virtual void registerFileForCollectionWithCrashDump(Core::Path const&);
    virtual bool requiresLiveGoldForMultiplayer()const;
    virtual std::string getModalErrorMessageProc();
    virtual void setWindowText(std::string const&);
    virtual void startBroadcast();
    virtual std::string getCacheStoragePath();
    virtual std::string getModelName();
    virtual void restartApp(bool);
    virtual std::string getEdition()const;
//  virtual void setFullscreenMode(FullscreenMode); //TODO: incomplete function definition
    virtual void reloadRenderResourcesOnResume()const;
//  virtual void getFileAccess(ResourceFileSystem); //TODO: incomplete function definition
    virtual void minimizeBackgroundDownloads()const;
    virtual void getOptionsSaveInterval()const;
    virtual std::string getOnDiskPackScratchPath();
    virtual void launchRatingsPrompt();
    virtual bool hasJournalingFilesystem()const;
    virtual void getOptimalLDBSize();
    virtual std::string getFeedbackHelpLink()const;
    virtual bool hasIDEProfiler();
    virtual void importAsFlatFile()const;
//  virtual void launchApp(ExternalApp)const; //TODO: incomplete function definition
    virtual void finish();
    virtual void launchUri(std::string const&);
    virtual void getMaxSimRadiusInChunks()const;
    virtual void showPlatformStoreIcon(bool);
    virtual bool isKeyboardVisible();
    virtual void createXboxLiveSignInHandler()const;
    virtual void getBroadcastingMultiplayerServiceIds(bool, bool)const;
    virtual bool hasBroadcastPermission();
    virtual void sendBrazeDialogButtonClick(int);
    virtual std::string getLoggingPath()const;
    virtual void getMaxSimultaneousDownloads()const;
    virtual void setSleepEnabled(bool);
    virtual bool requiresPatchNoticePopup()const;
    virtual void _onInitialize();
    virtual bool isContentAutoUpdateAllowed()const;
    virtual std::string readAssetFile(Core::Path const&);
    virtual std::string getCatalogSearchScratchPath();
    virtual bool supportsInPackageRecursion()const;
    virtual std::string copyImportFileToTempFolder(Core::Path const&);
    virtual bool isBrazeEnabled()const;
//  virtual bool canSupportApp(ExternalApp)const; //TODO: incomplete function definition
    virtual void initializeScreenDependentResources();
    virtual bool supportsXboxLiveAchievements()const;
    virtual bool isTelemetryAllowed();
    virtual bool supportsLaunchingLegacyVersion()const;
    virtual void areThreadsFrozen()const;
    virtual void getOSVersion()const;
    virtual void useAppPlatformForTelemetryIPAddress();
    virtual std::string getIPAddresses();
    virtual void useNativeStoreForRealmsPurchase();
    virtual void getPixelsPerMillimeter();
    virtual bool canManageLegacyData()const;
    virtual std::string getOnDiskScratchPath();
    virtual bool isRealmsEnabled()const;
    virtual bool isAutoCompactionEnabled()const;
    virtual void getARVRPlatform()const;
    virtual void launchSettings();
    virtual void getPlatformTTSEnabled()const;
    virtual void platformRequiresControllerApplet()const;
    virtual std::string getInternalPackStoragePath()const;
    virtual bool alwaysUseZippedPacksForDlc()const;
    void getPlatformBuildInformation()const;
    void addListener(AppPlatformListener *, float);
    bool isEduMode()const;
    void getUIScalingRules()const;
//  void setUIScalingRules(UIScalingRules); //TODO: incomplete function definition
    void getDpi()const;
    void accessPlatformBuildInformation_Shim();
    void getPlatformRuntimeInformation()const;
    void notifyTerminate();
    void _initializeLoadProfiler();
    std::string getScratchPath();
    void removeListener(AppPlatformListener *);
    void accessPlatformRuntimeInformation_Shim();
    void createUserInput(int);
    bool isInitialized();
    void teardown();
    void getFocusState();
//  void addNetworkChangeObserver(NetworkChangeObserver &); //TODO: incomplete function definition
    void getAppLifecycleContext();
    void setDpi(int);
    void getDefaultUIProfile()const;
    void initialize();
    bool isTerminating()const;
    void _initLastDeviceSessionId();
    AppPlatform();
    void calculateIfLowMemoryDevice();
//  void StringizeUIScalingRules(UIScalingRules); //TODO: incomplete function definition
    void setMockMultiplayerActive(bool);
    void setCommonPlatformShim(BedrockEngine::CommonPlatform *);
};
