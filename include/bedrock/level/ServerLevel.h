#pragma once

#include "../../unmapped/TagRegistry.h"
#include "../block/unmapped/BlockDefinitionGroup.h"
#include "storage/LevelStorage.h"
#include <memory>
#include "../command/origin/CommandOrigin.h"
#include <string>
#include "scoreboard/ServerScoreboard.h"
#include "../pack/ResourcePackManager.h"
#include "../../unmapped/MinecraftCommands.h"
#include "../../unmapped/IEntityRegistryOwner.h"
#include "../../unmapped/StructureManager.h"
#include "../Scheduler.h"
#include "../../unmapped/SoundPlayer.h"
#include "../eventing/IMinecraftEventing.h"
#include "LevelSettings.h"
#include "../../unmapped/HashedString.h"
#include "LevelData.h"
#include "Level.h"
#include "../block/unmapped/BlockComponentFactory.h"


class ServerLevel : Level {

public:
    virtual void loadFunctionManager();
    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*);
    virtual void dropEntryFromTagCache(std::string const&);
    virtual void decrementTagCache(std::string const&, TagRegistry &);
    virtual void saveAdditionalData();
    virtual void getServerResourcePackManager()const;
    virtual void incrementTagCache(std::string const&, TagRegistry &);
    virtual void clearTagCache();
//  virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion); //TODO: incomplete function definition
//  virtual void setDifficulty(Difficulty); //TODO: incomplete function definition
    virtual void getClientResourcePackManager()const;
    virtual void tick();
    virtual void addEntryToTagCache(std::string const&);
    virtual void setWorldTemplateOptionsUnlocked();
    virtual void updateSleepingPlayerList();
    ~ServerLevel();
    virtual void getTradeTables();
    virtual void getLevelEventCoordinator();
    virtual void setCommandsEnabled(bool);
    void getMobEvents()const;
    void getCommands();
    void getMobEvents();
    ServerLevel(SoundPlayer &, std::unique_ptr<LevelStorage>, IMinecraftEventing &, ResourcePackManager &, ResourcePackManager &, StructureManager &, MinecraftCommands &, Scheduler &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory>, std::unique_ptr<BlockDefinitionGroup>);
    void setShouldSendSleepMessage(bool);
    void shouldSendSleepMessage()const;
    void getFunctionManager();
    void allPlayersSleeping()const;
    void awakenAllPlayers();
    void _registerScoreboardCallbacks(ServerScoreboard &);
    void stopWeather();
};
