#pragma once

#include "../../unmapped/TagRegistry"
#include "../eventing/IMinecraftEventing"
#include "../../unmapped/MinecraftCommands"
#include "scoreboard/ServerScoreboard"
#include "../../unmapped/IEntityRegistryOwner"
#include "../../unmapped/StructureManager"
#include "../../unmapped/HashedString"
#include "../block/unmapped/BlockComponentFactory"
#include "../pack/ResourcePackManager"
#include "../block/unmapped/BlockDefinitionGroup"
#include "../command/orgin/CommandOrigin"
#include "../Scheduler"
#include "storage/LevelStorage"


class ServerLevel : Level {

public:
    virtual ServerLevel::~ServerLevel()
    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*);
    virtual void tick();
    virtual void updateSleepingPlayerList();
    virtual void setDifficulty(Difficulty);
    virtual void setCommandsEnabled(bool);
    virtual void setWorldTemplateOptionsUnlocked();
    virtual void saveAdditionalData();
    virtual void getLevelEventCoordinator();
    virtual void loadFunctionManager();
    virtual void getClientResourcePackManager()const;
    virtual void getServerResourcePackManager()const;
    virtual void getTradeTables();
    virtual void addEntryToTagCache(std::string const&);
    virtual void dropEntryFromTagCache(std::string const&);
    virtual void clearTagCache();
    virtual void decrementTagCache(std::string const&, TagRegistry &);
    virtual void incrementTagCache(std::string const&, TagRegistry &);
    virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion);

    ServerLevel(SoundPlayer &, std::unique_ptr<LevelStorage, std::default_delete<LevelStorage>>, IMinecraftEventing &, ResourcePackManager &, ResourcePackManager &, StructureManager &, MinecraftCommands &, Scheduler &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory, std::default_delete<BlockComponentFactory>>, std::unique_ptr<BlockDefinitionGroup, std::default_delete<BlockDefinitionGroup>>);
    void _registerScoreboardCallbacks(ServerScoreboard &);
    void awakenAllPlayers();
    void stopWeather();
    void allPlayersSleeping()const;
    void setShouldSendSleepMessage(bool);
    void shouldSendSleepMessage()const;
    void getCommands();
    void getFunctionManager();
    void getMobEvents();
    void getMobEvents()const;
};
