#pragma once

#include "../unmapped/AppPlatformListener"
#include "../unmapped/ServerInstanceEventCoordinator"
#include "eventing/IMinecraftEventing"
#include "util/Whitelist"
#include "../core/FilePathManager"
#include "../unmapped/EducationOptions"
#include "../unmapped/GameCallbacks"
#include "level/LevelSettings"
#include "../mce/UUID"
#include "../unmapped/ContentTierManager"
#include "metrics/ServerMetrics"
#include "definition/ConnectionDefinition"
#include "../core/FileStorageArea"
#include "../unmapped/PermissionsFile"
#include "level/LevelData"
#include "pack/ResourcePackManager"
#include "resourcepack/ResourcePackRepository"


class ServerInstance : AppPlatformListener, GameCallbacks {

public:
    static long SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

    virtual ServerInstance::~ServerInstance()
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
