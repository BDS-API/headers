#pragma once

#include "../unmapped/GameCallbacks.h"
#include "definition/ConnectionDefinition.h"
#include <vector>
#include <memory>
#include <string>
#include "../unmapped/AppPlatformListener.h"
#include "level/LevelSettings.h"
#include <functional>


class ServerInstance : AppPlatformListener, GameCallbacks {

public:
    static long SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

    ~ServerInstance(); // _ZN14ServerInstanceD2Ev
    virtual void onLowMemory(); // _ZN14ServerInstance11onLowMemoryEv
    virtual void onLevelCorrupt(); // _ZN14ServerInstance14onLevelCorruptEv
    virtual void onGameModeChanged(); // _ZN14ServerInstance17onGameModeChangedEv
    virtual void onTick(int, int); // _ZN14ServerInstance6onTickEii
    virtual void onInternetUpdate(); // _ZN14ServerInstance16onInternetUpdateEv
    virtual void onGameSessionReset(); // _ZN14ServerInstance18onGameSessionResetEv
    virtual void onLevelExit(); // _ZN14ServerInstance11onLevelExitEv
    virtual void updateScreens(); // _ZN14ServerInstance13updateScreensEv
    void setLevelCorruptionCallback(std::function<void (void)>); // _ZN14ServerInstance26setLevelCorruptionCallbackESt8functionIFvvEE
    Minecraft * getMinecraft(); // _ZN14ServerInstance12getMinecraftEv
    void getStorage(); // _ZN14ServerInstance10getStorageEv
    void getNetwork(); // _ZN14ServerInstance10getNetworkEv
    void _assertThread(); // _ZN14ServerInstance13_assertThreadEv
    ServerInstance(IMinecraftApp &, ServerInstanceEventCoordinator &); // _ZN14ServerInstanceC2ER13IMinecraftAppR30ServerInstanceEventCoordinator
//  void initializeServer(IMinecraftApp &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, std::string, std::string, std::string, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<std::string> const&, std::string, mce::UUID const&, IMinecraftEventing &, ResourcePackRepository &, ContentTierManager const&, ResourcePackManager &, std::function<std::unique_ptr<LevelStorage> (Scheduler &)>, std::string const&, LevelData *, std::string, std::string, std::unique_ptr<EducationOptions>, ResourcePackManager *, std::function<void (void)>, std::function<void (void)>, ServerMetrics *, DebugEndPoint *, bool, std::shared_ptr<Core::FileStorageArea>, unsigned short); //TODO: incomplete function definition // _ZN14ServerInstance16initializeServerER13IMinecraftAppR9WhitelistP15PermissionsFilePN4Core15FilePathManagerENSt6chrono8durationIlSt5ratioILl1ELl1EEEENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESJ_SJ_13LevelSettingsib20ConnectionDefinitionbRKSt6vectorISJ_SaISJ_EESJ_RKN3mce4UUIDER18IMinecraftEventingR22ResourcePackRepositoryRK18ContentTierManagerR19ResourcePackManagerSt8functionIFSt10unique_ptrI12LevelStorageSt14default_deleteIS16_EER9SchedulerEERKSJ_P9LevelDataSJ_SJ_S15_I16EducationOptionsS17_IS1I_EEPS12_S14_IFvvEES1N_P13ServerMetricsP13DebugEndPointbSt10shared_ptrINS6_15FileStorageAreaEEt
    void startLeaveGame(); // _ZN14ServerInstance14startLeaveGameEv
    void _threadSafeExecute(std::function<void (void)>); // _ZN14ServerInstance18_threadSafeExecuteESt8functionIFvvEE
    void leaveGameSync(); // _ZN14ServerInstance13leaveGameSyncEv
    bool isLeaveGameDone()const; // _ZNK14ServerInstance15isLeaveGameDoneEv
    void stop(); // _ZN14ServerInstance4stopEv
    void _update(); // _ZN14ServerInstance7_updateEv
    void _running()const; // _ZNK14ServerInstance8_runningEv
    void setWakeupFrequency(int); // _ZN14ServerInstance18setWakeupFrequencyEi
    void startServerThread(); // _ZN14ServerInstance17startServerThreadEv
    void queueForServerThread(std::function<void (void)>); // _ZN14ServerInstance20queueForServerThreadESt8functionIFvvEE
    void suspend(); // _ZN14ServerInstance7suspendEv
    void resume(); // _ZN14ServerInstance6resumeEv
    std::string getLevelId(); // _ZN14ServerInstance10getLevelIdB5cxx11Ev
    void getEventCoordinator(); // _ZN14ServerInstance19getEventCoordinatorEv
    void getScriptEngine(); // _ZN14ServerInstance15getScriptEngineEv
    void disconnectRemoteClientsWithMessage(std::string); // _ZN14ServerInstance34disconnectRemoteClientsWithMessageENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void disconnectAllClientsWithMessage(std::string); // _ZN14ServerInstance31disconnectAllClientsWithMessageENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getScheduler(); // _ZN14ServerInstance12getSchedulerEv
    bool isServerThreadRunning()const; // _ZNK14ServerInstance21isServerThreadRunningEv
    void getPacketSender(); // _ZN14ServerInstance15getPacketSenderEv
};
