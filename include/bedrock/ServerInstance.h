#pragma once

#include "level/LevelData.h"
#include "level/storage/LevelStorage.h"
#include "../unmapped/EducationOptions.h"
#include <memory>
#include "../unmapped/ServerInstanceEventCoordinator.h"
#include "../unmapped/GameCallbacks.h"
#include <string>
#include <functional>
#include "../core/FileStorageArea.h"
#include "../mce/UUID.h"
#include "../unmapped/AppPlatformListener.h"
#include <vector>
#include "definition/ConnectionDefinition.h"
#include "../unmapped/PermissionsFile.h"
#include "pack/ResourcePackManager.h"
#include "resourcepack/ResourcePackRepository.h"
#include "IMinecraftApp.h"
#include "../unmapped/ContentTierManager.h"
#include "metrics/ServerMetrics.h"
#include "Scheduler.h"
#include <ratio>
#include "level/LevelSettings.h"
#include "../core/FilePathManager.h"
#include "eventing/IMinecraftEventing.h"
#include "util/Whitelist.h"


class ServerInstance : AppPlatformListener, GameCallbacks {

public:
    static long SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

    virtual void onGameModeChanged();
    virtual void onLowMemory();
    virtual void onLevelExit();
    virtual void onInternetUpdate();
    ~ServerInstance();
    virtual void onGameSessionReset();
    virtual void onLevelCorrupt();
    virtual void onTick(int, int);
    virtual void updateScreens();
    void stop();
    void _update();
    void setLevelCorruptionCallback(std::function<void (void)>);
    ServerInstance(IMinecraftApp &, ServerInstanceEventCoordinator &);
    void queueForServerThread(std::function<void (void)>);
    void getEventCoordinator();
    void _assertThread();
    void startLeaveGame();
    void disconnectAllClientsWithMessage(std::string);
//  void initializeServer(IMinecraftApp &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, std::string, std::string, std::string, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<std::string> const&, std::string, mce::UUID const&, IMinecraftEventing &, ResourcePackRepository &, ContentTierManager const&, ResourcePackManager &, std::function<std::unique_ptr<LevelStorage> (Scheduler &)>, std::string const&, LevelData *, std::string, std::string, std::unique_ptr<EducationOptions>, ResourcePackManager *, std::function<void (void)>, std::function<void (void)>, ServerMetrics *, DebugEndPoint *, bool, std::shared_ptr<Core::FileStorageArea>, unsigned short); //TODO: incomplete function definition
    void leaveGameSync();
    void getPacketSender();
    void getStorage();
    void suspend();
    Minecraft * getMinecraft();
    void _threadSafeExecute(std::function<void (void)>);
    std::string getLevelId();
    bool isServerThreadRunning()const;
    void disconnectRemoteClientsWithMessage(std::string);
    void getScriptEngine();
    void startServerThread();
    void resume();
    bool isLeaveGameDone()const;
    void getNetwork();
    void _running()const;
    void getScheduler();
    void setWakeupFrequency(int);
};
