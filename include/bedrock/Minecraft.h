#pragma once

#include <unordered_map>
#include <vector>
#include <memory>
#include "../unmapped/IEntityRegistryOwner.h"
#include <string>


class Minecraft : IEntityRegistryOwner {

public:
    virtual void getEntityRegistry(); // _ZN9Minecraft17getEntityRegistryEv
    ~Minecraft(); // _ZN9MinecraftD2Ev
//  Minecraft(IMinecraftApp &, GameCallbacks &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, IMinecraftEventing &, NetworkHandler &, PacketSender &, unsigned char, Timer &, Timer &, ContentTierManager const&, ServerMetrics *); //TODO: incomplete function definition // _ZN9MinecraftC2ER13IMinecraftAppR13GameCallbacksR9WhitelistP15PermissionsFilePN4Core15FilePathManagerENSt6chrono8durationIlSt5ratioILl1ELl1EEEER18IMinecraftEventingR14NetworkHandlerR12PacketSenderhR5TimerSN_RK18ContentTierManagerP13ServerMetrics
    void resetGameSession(); // _ZN9Minecraft16resetGameSessionEv
    void clearThreadCallbacks(); // _ZN9Minecraft20clearThreadCallbacksEv
    void updateScreens(); // _ZN9Minecraft13updateScreensEv
    void initAsDedicatedServer(); // _ZN9Minecraft21initAsDedicatedServerEv
    void init(); // _ZN9Minecraft4initEv
    void getGameModuleServer(); // _ZN9Minecraft19getGameModuleServerEv
    void initCommands(); // _ZN9Minecraft12initCommandsEv
    bool isInitialized()const; // _ZNK9Minecraft13isInitializedEv
    void startLeaveGame(bool); // _ZN9Minecraft14startLeaveGameEb
    bool isLeaveGameDone()const; // _ZNK9Minecraft15isLeaveGameDoneEv
    void clientReset(); // _ZN9Minecraft11clientResetEv
//  void setGameModeReal(GameType); //TODO: incomplete function definition // _ZN9Minecraft15setGameModeRealE8GameType
    void update(); // _ZN9Minecraft6updateEv
    void getServerNetworkHandler(); // _ZN9Minecraft23getServerNetworkHandlerEv
    void disconnectClient(NetworkIdentifier const&, std::string const&); // _ZN9Minecraft16disconnectClientERK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void tickSimtime(int, int); // _ZN9Minecraft11tickSimtimeEii
    void tickRealtime(int, int); // _ZN9Minecraft12tickRealtimeEii
    GameSession * getLevel()const; // _ZNK9Minecraft8getLevelEv
    void setSimTimePause(bool); // _ZN9Minecraft15setSimTimePauseEb
    void setSimTimeScale(float); // _ZN9Minecraft15setSimTimeScaleEf
    void getSimPaused()const; // _ZNK9Minecraft12getSimPausedEv
    bool isModded(); // _ZN9Minecraft8isModdedEv
    bool isOnlineClient(); // _ZN9Minecraft14isOnlineClientEv
    void getNetworkStatistics()const; // _ZNK9Minecraft20getNetworkStatisticsEv
//  void hostMultiplayer(std::string const&, std::unique_ptr<Level>, Player *, mce::UUID const&, std::unique_ptr<NetEventCallback>, int, bool, bool, std::vector<std::string> const&, std::string, ConnectionDefinition const&, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *); //TODO: incomplete function definition // _ZN9Minecraft15hostMultiplayerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI5LevelSt14default_deleteIS9_EEP6PlayerRKN3mce4UUIDES8_I16NetEventCallbackSA_ISJ_EEibbRKSt6vectorIS5_SaIS5_EES5_RK20ConnectionDefinitionRKSt13unordered_mapI13PackIdVersionS5_St4hashISV_ESt8equal_toISV_ESaISt4pairIKSV_S5_EEER9SchedulerP22TextFilteringProcessor
    void getClientSubId()const; // _ZNK9Minecraft14getClientSubIdEv
    void setupServerCommands(std::string const&, std::string const&); // _ZN9Minecraft19setupServerCommandsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    bool usesNonLocalConnection(NetworkIdentifier const&); // _ZN9Minecraft22usesNonLocalConnectionERK17NetworkIdentifier
    void getNetworkHandler(); // _ZN9Minecraft17getNetworkHandlerEv
    void startClientGame(std::unique_ptr<NetEventCallback>); // _ZN9Minecraft15startClientGameESt10unique_ptrI16NetEventCallbackSt14default_deleteIS1_EE
    void joinWorldInProgress(std::unique_ptr<NetEventCallback>); // _ZN9Minecraft19joinWorldInProgressESt10unique_ptrI16NetEventCallbackSt14default_deleteIS1_EE
    void activateWhitelist(); // _ZN9Minecraft17activateWhitelistEv
    void getCommands(); // _ZN9Minecraft11getCommandsEv
    bool hasCommands(); // _ZN9Minecraft11hasCommandsEv
    void getNetEventCallback(); // _ZN9Minecraft19getNetEventCallbackEv
    void getServerLocator(); // _ZN9Minecraft16getServerLocatorEv
    void getServerLocator()const; // _ZNK9Minecraft16getServerLocatorEv
    void getNetworkHandler()const; // _ZNK9Minecraft17getNetworkHandlerEv
    void getEventing()const; // _ZNK9Minecraft11getEventingEv
    void onClientCreatedLevel(std::unique_ptr<Level>); // _ZN9Minecraft20onClientCreatedLevelESt10unique_ptrI5LevelSt14default_deleteIS1_EE
    void getTimer(); // _ZN9Minecraft8getTimerEv
    void getLastTimestep(); // _ZN9Minecraft15getLastTimestepEv
    void getResourceLoader(); // _ZN9Minecraft17getResourceLoaderEv
    void getStructureManager(); // _ZN9Minecraft19getStructureManagerEv
};
