#pragma once

class ServerLevel : Level {

public:
    virtual ~ServerLevel();
    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*);
    virtual void tick(void);
    virtual void updateSleepingPlayerList(void);
    virtual void setDifficulty(Difficulty);
    virtual void setCommandsEnabled(bool);
    virtual void setWorldTemplateOptionsUnlocked(void);
    virtual void saveAdditionalData(void);
    virtual void getLevelEventCoordinator(void);
    virtual void loadFunctionManager(void);
    virtual void getClientResourcePackManager(void)const;
    virtual void getServerResourcePackManager(void)const;
    virtual void getTradeTables(void);
    virtual void addEntryToTagCache(std::string const&);
    virtual void dropEntryFromTagCache(std::string const&);
    virtual void clearTagCache(void);
    virtual void decrementTagCache(std::string const&, TagRegistry &);
    virtual void incrementTagCache(std::string const&, TagRegistry &);
    virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion);

    void ServerLevel(SoundPlayer &, std::unique_ptr<LevelStorage, std::default_delete<LevelStorage>>, IMinecraftEventing &, ResourcePackManager &, ResourcePackManager &, StructureManager &, MinecraftCommands &, Scheduler &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory, std::default_delete<BlockComponentFactory>>, std::unique_ptr<BlockDefinitionGroup, std::default_delete<BlockDefinitionGroup>>);
    void _registerScoreboardCallbacks(ServerScoreboard &);
    void awakenAllPlayers(void);
    void stopWeather(void);
    void allPlayersSleeping(void)const;
    void setShouldSendSleepMessage(bool);
    void shouldSendSleepMessage(void)const;
    void getCommands(void);
    void getFunctionManager(void);
    void getMobEvents(void);
    void getMobEvents(void)const;
};
