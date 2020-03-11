#pragma once

#include "../pack/ResourcePackManager.h"
#include "./LevelData.h"
#include "../block/unmapped/BlockComponentFactory.h"
#include "./Level.h"
#include "../Scheduler.h"
#include "storage/LevelStorage.h"
#include "../../unmapped/HashedString.h"
#include "../block/unmapped/BlockDefinitionGroup.h"
#include "../eventing/IMinecraftEventing.h"
#include "../../unmapped/StructureManager.h"
#include "../../unmapped/TagRegistry.h"
#include "../../unmapped/IEntityRegistryOwner.h"
#include "./LevelSettings.h"
#include "../../unmapped/MinecraftCommands.h"
#include "scoreboard/ServerScoreboard.h"
#include <memory>
#include "../../unmapped/SoundPlayer.h"
#include "../command/orgin/CommandOrigin.h"
#include <string>


class ServerLevel : Level {

public:
    virtual ~ServerLevel();
    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*);
    virtual void tick();
    virtual void updateSleepingPlayerList();
//  virtual void setDifficulty(Difficulty); //TODO: incomplete function definition
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
//  virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion); //TODO: incomplete function definition

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
