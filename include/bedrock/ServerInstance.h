#pragma once

#include "definition/ConnectionDefinition.h"
#include "../unmapped/GameCallbacks.h"
#include <memory>
#include <vector>
#include <string>
#include "level/LevelSettings.h"
#include "../unmapped/AppPlatformListener.h"
#include <functional>


class ServerInstance : AppPlatformListener, GameCallbacks {

public:
    static long SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

    virtual void onGameSessionReset();
    ~ServerInstance();
    virtual void onInternetUpdate();
    virtual void onTick(int, int);
    virtual void onGameModeChanged();
    virtual void updateScreens();
    virtual void onLevelCorrupt();
    virtual void onLevelExit();
    virtual void onLowMemory();
    void setWakeupFrequency(int);
    Minecraft * getMinecraft();
    void stop();
    void setLevelCorruptionCallback(std::function<void (void)>);
    void getScriptEngine();
    void getNetwork();
    void _update();
    void _assertThread();
    void getEventCoordinator();
    void _running()const;
    void getPacketSender();
    void getStorage();
    ServerInstance(IMinecraftApp &, ServerInstanceEventCoordinator &);
    std::string getLevelId();
    void suspend();
    void startLeaveGame();
    bool isServerThreadRunning()const;
    void _threadSafeExecute(std::function<void (void)>);
    void disconnectRemoteClientsWithMessage(std::string);
    void disconnectAllClientsWithMessage(std::string);
    void queueForServerThread(std::function<void (void)>);
//  void initializeServer(IMinecraftApp &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, std::string, std::string, std::string, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<std::string> const&, std::string, mce::UUID const&, IMinecraftEventing &, ResourcePackRepository &, ContentTierManager const&, ResourcePackManager &, std::function<std::unique_ptr<LevelStorage> (Scheduler &)>, std::string const&, LevelData *, std::string, std::string, std::unique_ptr<EducationOptions>, ResourcePackManager *, std::function<void (void)>, std::function<void (void)>, ServerMetrics *, DebugEndPoint *, bool, std::shared_ptr<Core::FileStorageArea>, unsigned short); //TODO: incomplete function definition
    void getScheduler();
    bool isLeaveGameDone()const;
    void resume();
    void startServerThread();
    void leaveGameSync();
};
