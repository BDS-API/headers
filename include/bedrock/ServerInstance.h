#pragma once

#include <ratio>
#include "level/LevelSettings.h"
#include "metrics/ServerMetrics.h"
#include "eventing/IMinecraftEventing.h"
#include "../unmapped/AppPlatformListener.h"
#include "../unmapped/EducationOptions.h"
#include "./Scheduler.h"
#include <functional>
#include "./IMinecraftApp.h"
#include "../unmapped/GameCallbacks.h"
#include "../core/FileStorageArea.h"
#include "../unmapped/ServerInstanceEventCoordinator.h"
#include "../mce/UUID.h"
#include "../core/FilePathManager.h"
#include "level/storage/LevelStorage.h"
#include "../unmapped/ContentTierManager.h"
#include "resourcepack/ResourcePackRepository.h"
#include "definition/ConnectionDefinition.h"
#include <memory>
#include <vector>
#include "util/Whitelist.h"
#include "level/LevelData.h"
#include "../unmapped/PermissionsFile.h"
#include "pack/ResourcePackManager.h"
#include <string>


class ServerInstance : AppPlatformListener, GameCallbacks {

public:
    static long SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

    virtual ~ServerInstance();
    virtual void onLowMemory();
    virtual void onLevelCorrupt();
    virtual void onGameModeChanged();
    virtual void onTick(int, int);
    virtual void onInternetUpdate();
    virtual void onGameSessionReset();
    virtual void onLevelExit();
    virtual void updateScreens();

//  void setLevelCorruptionCallback(std::function<void (void)>); //TODO: incomplete function definition
    void getMinecraft();
    void getStorage();
    void getNetwork();
    void _assertThread();
    ServerInstance(IMinecraftApp &, ServerInstanceEventCoordinator &);
//  void initializeServer(IMinecraftApp &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, std::string, std::string, std::string, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<std::string, std::allocator<std::string>> const&, std::string, mce::UUID const&, IMinecraftEventing &, ResourcePackRepository &, ContentTierManager const&, ResourcePackManager &, std::function<std::unique_ptr<LevelStorage, std::default_delete<LevelStorage>> (Scheduler &)>, std::string const&, LevelData *, std::string, std::string, std::unique_ptr<EducationOptions, std::default_delete<EducationOptions>>, ResourcePackManager *, std::function<void (void)>, std::function<void (void)>, ServerMetrics *, DebugEndPoint *, bool, std::shared_ptr<Core::FileStorageArea>, unsigned short); //TODO: incomplete function definition
    void startLeaveGame();
//  void _threadSafeExecute(std::function<void (void)>); //TODO: incomplete function definition
    void leaveGameSync();
    bool isLeaveGameDone()const;
    void stop();
    void _update();
    void _running()const;
    void setWakeupFrequency(int);
    void startServerThread();
//  void queueForServerThread(std::function<void (void)>); //TODO: incomplete function definition
    void suspend();
    void resume();
    std::string getLevelId();
    void getEventCoordinator();
    void getScriptEngine();
    void disconnectRemoteClientsWithMessage(std::string);
    void disconnectAllClientsWithMessage(std::string);
    void getScheduler();
    bool isServerThreadRunning()const;
    void getPacketSender();
};
