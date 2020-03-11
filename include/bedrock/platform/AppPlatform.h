#pragma once

#include "../../unmapped/CommonPlatform.h"
#include "./IAppPlatform.h"
#include "../../core/Path.h"
#include "../../unmapped/AppPlatformListener.h"
#include "../../unmapped/SecureStorageKey.h"
#include <string>


class AppPlatform : IAppPlatform {

public:
    static long HOME_PATH;
    static long SETTINGS_PATH;
    static long LOG_PATH;
    static long SHADERCACHE_PATH;
    static long mIsInitialized;

    virtual ~AppPlatform();
    virtual void restartRequested();
    virtual std::string getLoggingPath()const;
    virtual bool isLowMemoryDevice()const;
    virtual void initializeScreenDependentResources();
    virtual void getHighPerformanceThreadsCount()const;
    virtual void getTotalHardwareThreadsCount()const;
    virtual void restartApp(bool);
    virtual void _fireAppTerminated();
    virtual bool hasFastAlphaTest()const;
    virtual bool supportsScripting()const;
    virtual bool supportsInPackageRecursion()const;
    virtual bool supportsXboxLiveAchievements()const;
    virtual void hideSplashScreen();
    virtual std::string getFeedbackHelpLink()const;
    virtual std::string getModalErrorMessageProc();
    virtual void updateLocalization(std::string const&);
    virtual void setSleepEnabled(bool);
    virtual std::string getInternalPackStoragePath()const;
    virtual std::string getSettingsPath();
    virtual std::string getPackagedShaderCachePath();
    virtual std::string getShaderCachePath();
    virtual std::string getUserdataPathForLevels()const;
    virtual std::string getCacheStoragePath();
    virtual std::string getOnDiskScratchPath();
    virtual std::string getOnDiskPackScratchPath();
    virtual std::string getLevelInfoCachePath()const;
    virtual std::string getCatalogSearchScratchPath();
    virtual bool hasSeparatedStorageAreasForContentAcquisition()const;
    virtual void getOptimalLDBSize();
    virtual void showDialog(int);
    virtual void createUserInput();
    virtual void getUserInputStatus();
    virtual std::string getUserInput();
//  virtual void getFileAccess(ResourceFileSystem); //TODO: incomplete function definition
    virtual std::string copyImportFileToTempFolder(Core::Path const&);
    virtual void registerFileForCollectionWithCrashDump(Core::Path const&);
    virtual void getScreenWidth();
    virtual void getScreenHeight();
    virtual void setScreenSize(int, int);
    virtual void setWindowSize(int, int);
    virtual void setWindowText(std::string const&);
    virtual void getPixelsPerMillimeter();
    virtual void getOperationMode()const;
    virtual void allowContentLogWriteToDisk();
    virtual bool supportsLaunchingLegacyVersion()const;
    virtual void launchLegacyVersion();
    virtual bool canManageLegacyData()const;
    virtual bool supportsDayOneExperience()const;
    virtual bool hasBroadcastPermission();
//  virtual bool hasAppInstalled(ExternalApp)const; //TODO: incomplete function definition
//  virtual void navigateToStoreForApp(ExternalApp)const; //TODO: incomplete function definition
//  virtual void launchApp(ExternalApp)const; //TODO: incomplete function definition
//  virtual bool canSupportApp(ExternalApp)const; //TODO: incomplete function definition
    virtual void startBroadcast();
    virtual bool isContentAutoUpdateAllowed()const;
    virtual void getMaxSimultaneousDownloads()const;
    virtual void getMaxSimultaneousServiceRequests()const;
    virtual bool isDownloadAndImportBlocking()const;
    virtual bool isDownloadBuffered()const;
    virtual bool supportsAutoSaveOnDBCompaction()const;
    virtual void updateTextBoxText(std::string const&);
    virtual bool isKeyboardVisible();
    virtual bool supportsVibration();
    virtual void vibrate(int);
    virtual std::string getAssetFileFullPath(Core::Path const&);
    virtual std::string readAssetFile(Core::Path const&);
    virtual void listAssetFilesIn(Core::Path const&, std::string const&)const;
    virtual bool supportsClientUpdate()const;
    virtual std::string getClientUpdateUrl()const;
    virtual void checkLicense();
    virtual bool hasBuyButtonWhenInvalidLicense();
    virtual bool isNetworkAvailable();
    virtual bool isNetworkEnabled(bool);
    virtual void setNetworkAllowed(bool);
    virtual bool isNetworkAllowed();
    virtual void multiplayerRequiresPremiumAccess()const;
    virtual void multiplayerRequiresUGCEnabled()const;
    virtual bool isCrossPlatformToggleVisible()const;
    virtual bool isTelemetryAllowed();
    virtual bool isTrialWorldsTransferToFullGameAllowed()const;
    virtual void buyGame();
    virtual void finish();
    virtual bool canLaunchUri(std::string const&);
    virtual void launchUri(std::string const&);
    virtual void launchSettings();
    virtual bool isRatingsPromptSupported()const;
    virtual void launchRatingsPrompt();
    virtual void useXboxControlHelpers()const;
    virtual void getPlatformType()const;
    virtual bool isCentennial()const;
    virtual std::string getPackageFamilyName()const;
    virtual void getBuildPlatform()const;
//  virtual void setARVRPlatform(ARVRPlatform); //TODO: incomplete function definition
    virtual void getARVRPlatform()const;
    virtual void getNumberOfParticleFramesToInterpolate()const;
//  virtual void setVRControllerType(VRControllerType); //TODO: incomplete function definition
    virtual void getVRControllerType()const;
    virtual bool hasIDEProfiler();
    virtual std::string getPlatformStringVar(int);
    virtual void getMaximumUsedMemory();
    virtual void getMaxSimRadiusInChunks()const;
    virtual std::string getBroadcastAddresses();
    virtual std::string getIPAddresses();
    virtual void useAppPlatformForTelemetryIPAddress();
    virtual std::string getModelName();
    virtual bool usesHDRBrightness()const;
//  virtual void setFullscreenMode(FullscreenMode); //TODO: incomplete function definition
    virtual bool isNetworkThrottled();
    virtual bool isLANAllowed()const;
    virtual bool doesLANRequireMultiplayerRestrictions()const;
    virtual void trackPurchaseEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void sendBrazeEvent(std::string const&);
    virtual void sendBrazeEventWithProperty(std::string const&, std::string const&, int);
    virtual void sendBrazeEventWithStringProperty(std::string const&, std::string const&, std::string const&);
    virtual void sendBrazeToastClick();
    virtual void sendBrazeDialogButtonClick(int);
    virtual void collectGraphicsHardwareDetails();
    virtual std::string getEdition()const;
    virtual void getOSVersion()const;
    virtual bool isBrazeEnabled()const;
    virtual bool isFireTV()const;
    virtual bool isWin10Arm()const;
    virtual void setThreadsFrozen(bool);
    virtual void areThreadsFrozen()const;
    virtual void getDefaultSafeZoneScaleX()const;
    virtual void getDefaultSafeZoneScaleY()const;
    virtual void getDefaultScreenPositionX()const;
    virtual void getDefaultScreenPositionY()const;
    virtual bool isQuitCapable()const;
    virtual void requireControllerAtStartup()const;
    virtual void notifyControllerConnectionStateChange()const;
    virtual void platformRequiresControllerApplet()const;
    virtual void getDefaultInputMode()const;
    virtual bool supportsTextToSpeech()const;
    virtual void getSecureStorage();
    virtual void getSecureStorageKey(std::string const&);
    virtual void setSecureStorageKey(std::string const&, SecureStorageKey const&);
    virtual void reloadRenderResourcesOnResume()const;
    virtual void shouldPauseDownloadsWhenEnterGame()const;
    virtual void compareAppReceiptToLocalReceipt(std::string const&);
    virtual void getThirdPartyPackUUID()const;
    virtual bool alwaysUseZippedPacksForDlc()const;
    virtual bool allowsResourcePackDevelopment()const;
    virtual bool supportsLegacySinglePremiumCacheDirectory()const;
    virtual bool supportsWorldShare()const;
    virtual bool hasJournalingFilesystem()const;
    virtual bool isAutoCompactionEnabled()const;
    virtual void getLevelSaveInterval()const;
    virtual void getOptionsSaveInterval()const;
    virtual bool hasPlatformSpecificInvites()const;
    virtual void usePlatformProfilePicturesOnly()const;
    virtual bool requiresXboxLiveSigninToPlay()const;
    virtual bool requiresLiveGoldForMultiplayer()const;
    virtual void shouldRegisterForXboxLiveNotifications()const;
    virtual bool isRealmsEnabled()const;
    virtual void minimizeBackgroundDownloads()const;
    virtual bool requiresAutoSaveIconExplanationPopup()const;
    virtual void getExtraLevelSaveDataIconParams(std::string const&)const;
    virtual bool requiresPatchNoticePopup()const;
    virtual void getMultiplayerServiceListToRegister()const;
    virtual void getBroadcastingMultiplayerServiceIds(bool, bool)const;
    virtual void maxFileDataRequestConcurrency()const;
    virtual void goToExternalConsumablesStoreListing()const;
    virtual void getStoreNetworkFailureTimeout()const;
//  virtual void createLoggingStorageArea(Core::FileAccessType, Core::Path const&); //TODO: incomplete function definition
    virtual void handlePlatformSpecificSPIErrors(std::string const&);
    virtual void useNativeStoreForRealmsPurchase();
    virtual void importAsFlatFile()const;
    virtual bool isWebviewSupported()const;
//  virtual void createWebview(Webview::PlatformArguments &&)const; //TODO: incomplete function definition
    virtual void createXboxLiveSignInHandler()const;
    virtual void getPlatformTTSExists()const;
    virtual void getPlatformTTSEnabled()const;
    virtual void getRenderSurfaceParameters()const;
    virtual void shouldRemoveGraphicsDeviceOnAppTermination()const;
    virtual bool isJoinableViaExternalServers()const;
    virtual void onPrimaryUserNetworkReady();
    virtual bool requiresNetworkOutageMessaging()const;
    virtual bool usesAsyncOptionSaving()const;
    virtual void showPlatformStoreIcon(bool);
    virtual void getPlatformDpi()const;
    virtual void getPlatformUIScalingRules()const;
    virtual void _onInitialize();
    virtual void _onTeardown();

    AppPlatform();
    void initialize();
    void _initializeLoadProfiler();
    void calculateIfLowMemoryDevice();
    void _initLastDeviceSessionId();
    void teardown();
    void setCommonPlatformShim(BedrockEngine::CommonPlatform *);
    void getDpi()const;
    void setDpi(int);
    void getUIScalingRules()const;
//  void setUIScalingRules(UIScalingRules); //TODO: incomplete function definition
    void getPlatformRuntimeInformation()const;
    void accessPlatformRuntimeInformation_Shim();
    void getPlatformBuildInformation()const;
    void accessPlatformBuildInformation_Shim();
    void getAppLifecycleContext();
    void getFocusState();
    std::string getScratchPath();
    void createUserInput(int);
//  void StringizeUIScalingRules(UIScalingRules); //TODO: incomplete function definition
    void addListener(AppPlatformListener *, float);
    void notifyTerminate();
    bool isTerminating()const;
    void removeListener(AppPlatformListener *);
//  void addNetworkChangeObserver(NetworkChangeObserver &); //TODO: incomplete function definition
    void getDefaultUIProfile()const;
    void setMockMultiplayerActive(bool);
    bool isInitialized();
    bool isEduMode()const;
};
