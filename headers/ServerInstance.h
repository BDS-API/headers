#pragma once

class ServerInstance : AppPlatformListener, GameCallbacks {

public:
    static long SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

    virtual ~ServerInstance();
    virtual void onLowMemory(void);
    virtual void onLevelCorrupt(void);
    virtual void onGameModeChanged(void);
    virtual void onTick(int, int);
    virtual void onInternetUpdate(void);
    virtual void onGameSessionReset(void);
    virtual void onLevelExit(void);
    virtual void updateScreens(void);

    void setLevelCorruptionCallback(std::function<void ()(void)>);
    void getMinecraft(void);
    void getStorage(void);
    void getNetwork(void);
    void _assertThread(void);
    void ServerInstance(IMinecraftApp &, ServerInstanceEventCoordinator &);
    void initializeServer(IMinecraftApp &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, std::string, std::string, std::string, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<std::string, std::allocator<std::string>> const&, std::string, mce::UUID const&, IMinecraftEventing &, ResourcePackRepository &, ContentTierManager const&, ResourcePackManager &, std::function<std::unique_ptr<LevelStorage, std::default_delete<LevelStorage>> ()(Scheduler &)>, std::string const&, LevelData *, std::string, std::string, std::unique_ptr<EducationOptions, std::default_delete<EducationOptions>>, ResourcePackManager*, std::function<void ()(void)>, std::function<void ()(void)>, ServerMetrics *, DebugEndPoint *, bool, std::shared_ptr<Core::FileStorageArea>, unsigned short);
    void startLeaveGame(void);
    void _threadSafeExecute(std::function<void ()(void)>);
    void leaveGameSync(void);
    bool isLeaveGameDone(void)const;
    void stop(void);
    void _update(void);
    void _running(void)const;
    void setWakeupFrequency(int);
    void startServerThread(void);
    void queueForServerThread(std::function<void ()(void)>);
    void suspend(void);
    void resume(void);
    void getEventCoordinator(void);
    void getScriptEngine(void);
    void disconnectRemoteClientsWithMessage(std::string);
    void disconnectAllClientsWithMessage(std::string);
    void getScheduler(void);
    bool isServerThreadRunning(void)const;
    void getPacketSender(void);
};
