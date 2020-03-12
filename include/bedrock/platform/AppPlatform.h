#pragma once

#include "../../core/Path.h"
#include "../../unmapped/CommonPlatform.h"
#include "IAppPlatform.h"
#include <string>
#include "../../unmapped/SecureStorageKey.h"
#include "../../unmapped/AppPlatformListener.h"


class AppPlatform : IAppPlatform {

public:
    static long HOME_PATH;
    static long SETTINGS_PATH;
    static long LOG_PATH;
    static long SHADERCACHE_PATH;
    static long mIsInitialized;

    virtual bool requiresPatchNoticePopup()const;
    virtual bool usesHDRBrightness()const;
    virtual void getPlatformUIScalingRules()const;
    virtual bool isDownloadBuffered()const;
    virtual bool supportsAutoSaveOnDBCompaction()const;
    virtual void useAppPlatformForTelemetryIPAddress();
    virtual bool hasJournalingFilesystem()const;
    virtual std::string getAssetFileFullPath(Core::Path const&);
//  virtual void navigateToStoreForApp(ExternalApp)const; //TODO: incomplete function definition
    virtual void setScreenSize(int, int);
    virtual bool isContentAutoUpdateAllowed()const;
    virtual bool isNetworkEnabled(bool);
    virtual bool isCentennial()const;
    virtual bool supportsInPackageRecursion()const;
    virtual bool usesAsyncOptionSaving()const;
    virtual void getSecureStorageKey(std::string const&);
    virtual void reloadRenderResourcesOnResume()const;
    virtual bool hasBroadcastPermission();
    virtual void sendBrazeEvent(std::string const&);
    virtual std::string getUserdataPathForLevels()const;
    virtual std::string getPlatformStringVar(int);
    virtual void handlePlatformSpecificSPIErrors(std::string const&);
    virtual std::string getCacheStoragePath();
    virtual bool isWebviewSupported()const;
    virtual bool isLANAllowed()const;
    virtual void updateTextBoxText(std::string const&);
    virtual bool hasBuyButtonWhenInvalidLicense();
    virtual void launchRatingsPrompt();
    virtual void allowContentLogWriteToDisk();
    virtual void getDefaultScreenPositionX()const;
    virtual void getHighPerformanceThreadsCount()const;
    virtual void multiplayerRequiresUGCEnabled()const;
    virtual void setSecureStorageKey(std::string const&, SecureStorageKey const&);
    virtual void shouldPauseDownloadsWhenEnterGame()const;
    virtual void getOptionsSaveInterval()const;
    virtual std::string getShaderCachePath();
    virtual std::string getPackageFamilyName()const;
    virtual void shouldRemoveGraphicsDeviceOnAppTermination()const;
    virtual void getNumberOfParticleFramesToInterpolate()const;
//  virtual void launchApp(ExternalApp)const; //TODO: incomplete function definition
    virtual void getScreenWidth();
    virtual void launchUri(std::string const&);
    virtual bool requiresLiveGoldForMultiplayer()const;
    virtual void collectGraphicsHardwareDetails();
//  virtual void setVRControllerType(VRControllerType); //TODO: incomplete function definition
    virtual void getBroadcastingMultiplayerServiceIds(bool, bool)const;
    virtual void getMaxSimRadiusInChunks()const;
    virtual void useNativeStoreForRealmsPurchase();
    virtual void getPlatformType()const;
    virtual bool supportsTextToSpeech()const;
    virtual void _onInitialize();
    virtual void _onTeardown();
    virtual void restartApp(bool);
    virtual void getPlatformTTSEnabled()const;
    virtual bool isCrossPlatformToggleVisible()const;
    virtual bool supportsScripting()const;
    virtual bool supportsVibration();
    virtual std::string getSettingsPath();
    virtual void createXboxLiveSignInHandler()const;
    virtual bool canLaunchUri(std::string const&);
    virtual void requireControllerAtStartup()const;
    virtual void getPlatformDpi()const;
    virtual bool isTelemetryAllowed();
    virtual void maxFileDataRequestConcurrency()const;
    virtual void createUserInput();
    virtual bool supportsXboxLiveAchievements()const;
    virtual void startBroadcast();
    virtual void usePlatformProfilePicturesOnly()const;
    virtual void restartRequested();
    virtual void goToExternalConsumablesStoreListing()const;
    virtual bool isFireTV()const;
    virtual void getRenderSurfaceParameters()const;
    virtual void getStoreNetworkFailureTimeout()const;
    virtual std::string getModalErrorMessageProc();
    virtual void updateLocalization(std::string const&);
//  virtual void getFileAccess(ResourceFileSystem); //TODO: incomplete function definition
    virtual std::string getClientUpdateUrl()const;
    virtual bool hasPlatformSpecificInvites()const;
    virtual void _fireAppTerminated();
    virtual void getUserInputStatus();
    virtual void getExtraLevelSaveDataIconParams(std::string const&)const;
    virtual bool isTrialWorldsTransferToFullGameAllowed()const;
    virtual bool supportsClientUpdate()const;
    virtual void getTotalHardwareThreadsCount()const;
    virtual void getSecureStorage();
    virtual void showDialog(int);
    virtual std::string getIPAddresses();
    virtual bool supportsDayOneExperience()const;
    virtual void importAsFlatFile()const;
    virtual void getThirdPartyPackUUID()const;
    virtual bool requiresNetworkOutageMessaging()const;
    virtual void registerFileForCollectionWithCrashDump(Core::Path const&);
    virtual void notifyControllerConnectionStateChange()const;
    virtual bool requiresAutoSaveIconExplanationPopup()const;
    virtual void buyGame();
    virtual void getMaxSimultaneousServiceRequests()const;
    virtual void getPixelsPerMillimeter();
    virtual void setThreadsFrozen(bool);
    virtual void vibrate(int);
    virtual void launchSettings();
    virtual void getPlatformTTSExists()const;
    virtual bool isLowMemoryDevice()const;
    virtual void useXboxControlHelpers()const;
    virtual bool canManageLegacyData()const;
    virtual void getMaximumUsedMemory();
//  virtual void createLoggingStorageArea(Core::FileAccessType, Core::Path const&); //TODO: incomplete function definition
    virtual void areThreadsFrozen()const;
    virtual void getOptimalLDBSize();
    virtual bool requiresXboxLiveSigninToPlay()const;
    virtual void compareAppReceiptToLocalReceipt(std::string const&);
    virtual void onPrimaryUserNetworkReady();
    virtual std::string getPackagedShaderCachePath();
    virtual bool alwaysUseZippedPacksForDlc()const;
//  virtual void setARVRPlatform(ARVRPlatform); //TODO: incomplete function definition
    virtual bool isJoinableViaExternalServers()const;
    virtual bool hasIDEProfiler();
    virtual bool isQuitCapable()const;
    virtual bool supportsWorldShare()const;
    virtual void getDefaultInputMode()const;
    virtual bool isKeyboardVisible();
    virtual bool isWin10Arm()const;
    virtual bool hasFastAlphaTest()const;
//  virtual bool canSupportApp(ExternalApp)const; //TODO: incomplete function definition
    virtual std::string getInternalPackStoragePath()const;
    virtual bool supportsLegacySinglePremiumCacheDirectory()const;
    virtual void shouldRegisterForXboxLiveNotifications()const;
    virtual void showPlatformStoreIcon(bool);
    virtual void sendBrazeDialogButtonClick(int);
    virtual void finish();
    virtual void sendBrazeToastClick();
    virtual void trackPurchaseEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    virtual bool supportsLaunchingLegacyVersion()const;
    virtual void getDefaultScreenPositionY()const;
    virtual std::string readAssetFile(Core::Path const&);
    virtual std::string getCatalogSearchScratchPath();
    virtual void minimizeBackgroundDownloads()const;
    virtual bool isBrazeEnabled()const;
    virtual void launchLegacyVersion();
    ~AppPlatform();
    virtual void getBuildPlatform()const;
    virtual void getVRControllerType()const;
    virtual void checkLicense();
    virtual std::string getLevelInfoCachePath()const;
    virtual void platformRequiresControllerApplet()const;
//  virtual void setFullscreenMode(FullscreenMode); //TODO: incomplete function definition
    virtual void getARVRPlatform()const;
    virtual void multiplayerRequiresPremiumAccess()const;
    virtual bool isDownloadAndImportBlocking()const;
    virtual bool isNetworkThrottled();
    virtual void getDefaultSafeZoneScaleX()const;
    virtual bool isNetworkAllowed();
    virtual void getDefaultSafeZoneScaleY()const;
    virtual bool isRealmsEnabled()const;
    virtual void setWindowSize(int, int);
    virtual void initializeScreenDependentResources();
    virtual std::string getEdition()const;
    virtual bool allowsResourcePackDevelopment()const;
    virtual void setSleepEnabled(bool);
    virtual bool isAutoCompactionEnabled()const;
    virtual std::string getModelName();
    virtual void getLevelSaveInterval()const;
    virtual bool isNetworkAvailable();
    virtual void hideSplashScreen();
    virtual void getOSVersion()const;
    virtual void sendBrazeEventWithStringProperty(std::string const&, std::string const&, std::string const&);
    virtual bool isRatingsPromptSupported()const;
    virtual std::string getFeedbackHelpLink()const;
    virtual void getMultiplayerServiceListToRegister()const;
    virtual void setWindowText(std::string const&);
//  virtual bool hasAppInstalled(ExternalApp)const; //TODO: incomplete function definition
    virtual std::string getBroadcastAddresses();
    virtual void getOperationMode()const;
    virtual bool doesLANRequireMultiplayerRestrictions()const;
    virtual bool hasSeparatedStorageAreasForContentAcquisition()const;
    virtual void getMaxSimultaneousDownloads()const;
//  virtual void createWebview(Webview::PlatformArguments &&)const; //TODO: incomplete function definition
    virtual void sendBrazeEventWithProperty(std::string const&, std::string const&, int);
    virtual void setNetworkAllowed(bool);
    virtual std::string copyImportFileToTempFolder(Core::Path const&);
    virtual std::string getUserInput();
    virtual std::string getOnDiskScratchPath();
    virtual std::string getLoggingPath()const;
    virtual void listAssetFilesIn(Core::Path const&, std::string const&)const;
    virtual std::string getOnDiskPackScratchPath();
    virtual void getScreenHeight();
    void getPlatformRuntimeInformation()const;
//  void setUIScalingRules(UIScalingRules); //TODO: incomplete function definition
    void getDefaultUIProfile()const;
    void calculateIfLowMemoryDevice();
    std::string getScratchPath();
    bool isTerminating()const;
    void _initLastDeviceSessionId();
    void getDpi()const;
    void getUIScalingRules()const;
    void addListener(AppPlatformListener *, float);
    bool isEduMode()const;
    void initialize();
    AppPlatform();
    void getPlatformBuildInformation()const;
    void teardown();
    bool isInitialized();
    void notifyTerminate();
    void setDpi(int);
    void getFocusState();
    void setCommonPlatformShim(BedrockEngine::CommonPlatform *);
    void createUserInput(int);
    void getAppLifecycleContext();
//  void addNetworkChangeObserver(NetworkChangeObserver &); //TODO: incomplete function definition
    void setMockMultiplayerActive(bool);
    void _initializeLoadProfiler();
    void accessPlatformRuntimeInformation_Shim();
    void accessPlatformBuildInformation_Shim();
//  void StringizeUIScalingRules(UIScalingRules); //TODO: incomplete function definition
    void removeListener(AppPlatformListener *);
};
