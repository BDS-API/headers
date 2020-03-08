#pragma once

#include "../core/FileStorageArea"
#include "definition/ConnectionDefinition"
#include "../unmapped/EducationOptions"
#include "pack/ResourcePackManager"
#include "metrics/ServerMetrics"
#include "../unmapped/GameCallbacks"
#include "../unmapped/AppPlatformListener"
#include "util/Whitelist"
#include "../unmapped/PermissionsFile"
#include "../unmapped/ServerInstanceEventCoordinator"
#include "../core/FilePathManager"
#include "../unmapped/ContentTierManager"
#include "resourcepack/ResourcePackRepository"
#include "../mce/UUID"
#include "level/LevelSettings"
#include "eventing/IMinecraftEventing"
#include "level/LevelData"


class ServerInstance : AppPlatformListener, GameCallbacks {

public:
    static long SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

    ServerInstance::~ServerInstance()
    virtual void onLowMemory();
    virtual void onLevelCorrupt();
    virtual void onGameModeChanged();
    virtual void onTick(int, int);
    virtual void onInternetUpdate();
    virtual void onGameSessionReset();
    virtual void onLevelExit();
    virtual void updateScreens();

    void setLevelCorruptionCallback(std::function<void ()(void)>);
    Minecraft* getMinecraft();
    void getStorage();
    void getNetwork();
    void _assertThread();
    ServerInstance(IMinecraftApp &, ServerInstanceEventCoordinator &);
    void initializeServer(IMinecraftApp &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, std::string, std::string, std::string, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<std::string, std::allocator<std::string>> const&, std::string, mce::UUID const&, IMinecraftEventing &, ResourcePackRepository &, ContentTierManager const&, ResourcePackManager &, std::function<std::unique_ptr ()(Scheduler &)>, std::string const&, LevelData *, std::string, std::string, std::unique_ptr<EducationOptions, std::default_delete<EducationOptions>>, ResourcePackManager*, std::function<void ()(void)>, std::function<void ()(void)>, ServerMetrics *, DebugEndPoint *, bool, std::shared_ptr<Core::FileStorageArea>, unsigned short);
    void startLeaveGame();
    void _threadSafeExecute(std::function<void ()(void)>);
    void leaveGameSync();
    bool isLeaveGameDone()const;
    void stop();
    void _update();
    void _running()const;
    void setWakeupFrequency(int);
    void startServerThread();
    void queueForServerThread(std::function<void ()(void)>);
    void suspend();
    void resume();
    void getEventCoordinator();
    void getScriptEngine();
    void disconnectRemoteClientsWithMessage(std::string);
    void disconnectAllClientsWithMessage(std::string);
    void getScheduler();
    bool isServerThreadRunning()const;
    void getPacketSender();
};
