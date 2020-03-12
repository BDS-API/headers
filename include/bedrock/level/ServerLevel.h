#pragma once

#include <memory>
#include <string>
#include "Level.h"


class ServerLevel : Level {

public:
    virtual void getLevelEventCoordinator();
    virtual void getClientResourcePackManager()const;
    virtual void clearTagCache();
    virtual void addEntryToTagCache(std::string const&);
    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*);
    virtual void setWorldTemplateOptionsUnlocked();
//  virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion); //TODO: incomplete function definition
    virtual void getTradeTables();
    virtual void dropEntryFromTagCache(std::string const&);
    virtual void loadFunctionManager();
//  virtual void setDifficulty(Difficulty); //TODO: incomplete function definition
    virtual void decrementTagCache(std::string const&, TagRegistry &);
    virtual void getServerResourcePackManager()const;
    virtual void updateSleepingPlayerList();
    virtual void saveAdditionalData();
    virtual void incrementTagCache(std::string const&, TagRegistry &);
    virtual void tick();
    ~ServerLevel();
    virtual void setCommandsEnabled(bool);
    void stopWeather();
    void awakenAllPlayers();
    void getFunctionManager();
    void _registerScoreboardCallbacks(ServerScoreboard &);
    void getMobEvents()const;
    void getMobEvents();
    void shouldSendSleepMessage()const;
    void allPlayersSleeping()const;
    void setShouldSendSleepMessage(bool);
    void getCommands();
    ServerLevel(SoundPlayer &, std::unique_ptr<LevelStorage>, IMinecraftEventing &, ResourcePackManager &, ResourcePackManager &, StructureManager &, MinecraftCommands &, Scheduler &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory>, std::unique_ptr<BlockDefinitionGroup>);
};
