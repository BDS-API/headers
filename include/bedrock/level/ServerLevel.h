#pragma once

#include <string>
#include <memory>
#include "Level.h"


class ServerLevel : Level {

public:
    ~ServerLevel(); // _ZN11ServerLevelD2Ev
    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*); // _ZN11ServerLevel10initializeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK13LevelSettingsP9LevelDataPS6_
    virtual void tick(); // _ZN11ServerLevel4tickEv
    virtual void updateSleepingPlayerList(); // _ZN11ServerLevel24updateSleepingPlayerListEv
//  virtual void setDifficulty(Difficulty); //TODO: incomplete function definition // _ZN11ServerLevel13setDifficultyE10Difficulty
    virtual void setCommandsEnabled(bool); // _ZN11ServerLevel18setCommandsEnabledEb
    virtual void setWorldTemplateOptionsUnlocked(); // _ZN11ServerLevel31setWorldTemplateOptionsUnlockedEv
    virtual void saveAdditionalData(); // _ZN11ServerLevel18saveAdditionalDataEv
    virtual void getLevelEventCoordinator(); // _ZN11ServerLevel24getLevelEventCoordinatorEv
    virtual void loadFunctionManager(); // _ZN11ServerLevel19loadFunctionManagerEv
    virtual void getClientResourcePackManager()const; // _ZNK11ServerLevel28getClientResourcePackManagerEv
    virtual void getServerResourcePackManager()const; // _ZNK11ServerLevel28getServerResourcePackManagerEv
    virtual void getTradeTables(); // _ZN11ServerLevel14getTradeTablesEv
    virtual void addEntryToTagCache(std::string const&); // _ZN11ServerLevel18addEntryToTagCacheERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void dropEntryFromTagCache(std::string const&); // _ZN11ServerLevel21dropEntryFromTagCacheERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void clearTagCache(); // _ZN11ServerLevel13clearTagCacheEv
    virtual void decrementTagCache(std::string const&, TagRegistry &); // _ZN11ServerLevel17decrementTagCacheERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11TagRegistry
    virtual void incrementTagCache(std::string const&, TagRegistry &); // _ZN11ServerLevel17incrementTagCacheERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11TagRegistry
//  virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion); //TODO: incomplete function definition // _ZN11ServerLevel10runCommandERK12HashedStringR13CommandOrigin19CommandOriginSystem17CurrentCmdVersion
    ServerLevel(SoundPlayer &, std::unique_ptr<LevelStorage>, IMinecraftEventing &, ResourcePackManager &, ResourcePackManager &, StructureManager &, MinecraftCommands &, Scheduler &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory>, std::unique_ptr<BlockDefinitionGroup>); // _ZN11ServerLevelC2ER11SoundPlayerSt10unique_ptrI12LevelStorageSt14default_deleteIS3_EER18IMinecraftEventingR19ResourcePackManagerSA_R16StructureManagerR17MinecraftCommandsR9SchedulerR20IEntityRegistryOwnerS2_I21BlockComponentFactoryS4_ISJ_EES2_I20BlockDefinitionGroupS4_ISM_EE
    void _registerScoreboardCallbacks(ServerScoreboard &); // _ZN11ServerLevel28_registerScoreboardCallbacksER16ServerScoreboard
    void awakenAllPlayers(); // _ZN11ServerLevel16awakenAllPlayersEv
    void stopWeather(); // _ZN11ServerLevel11stopWeatherEv
    void allPlayersSleeping()const; // _ZNK11ServerLevel18allPlayersSleepingEv
    void setShouldSendSleepMessage(bool); // _ZN11ServerLevel25setShouldSendSleepMessageEb
    void shouldSendSleepMessage()const; // _ZNK11ServerLevel22shouldSendSleepMessageEv
    void getCommands(); // _ZN11ServerLevel11getCommandsEv
    void getFunctionManager(); // _ZN11ServerLevel18getFunctionManagerEv
    void getMobEvents(); // _ZN11ServerLevel12getMobEventsEv
    void getMobEvents()const; // _ZNK11ServerLevel12getMobEventsEv
};
