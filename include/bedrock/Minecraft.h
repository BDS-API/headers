#pragma once

#include <memory>
#include "../unmapped/IEntityRegistryOwner.h"
#include <vector>
#include <string>
#include <unordered_map>


class Minecraft : IEntityRegistryOwner {

public:
    virtual void getEntityRegistry();
    ~Minecraft();
//  void hostMultiplayer(std::string const&, std::unique_ptr<Level>, Player *, mce::UUID const&, std::unique_ptr<NetEventCallback>, int, bool, bool, std::vector<std::string> const&, std::string, ConnectionDefinition const&, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *); //TODO: incomplete function definition
    void getServerNetworkHandler();
    void setSimTimePause(bool);
    void joinWorldInProgress(std::unique_ptr<NetEventCallback>);
    void initAsDedicatedServer();
    GameSession * getLevel()const;
    bool usesNonLocalConnection(NetworkIdentifier const&);
    void disconnectClient(NetworkIdentifier const&, std::string const&);
    void resetGameSession();
    void startLeaveGame(bool);
    bool hasCommands();
    void tickSimtime(int, int);
    void update();
    void tickRealtime(int, int);
    void getStructureManager();
    void activateWhitelist();
    void init();
    void getResourceLoader();
    void clientReset();
    bool isModded();
    void getSimPaused()const;
    void startClientGame(std::unique_ptr<NetEventCallback>);
    void getCommands();
    void getLastTimestep();
    void setupServerCommands(std::string const&, std::string const&);
    void getNetworkHandler();
    void getNetworkStatistics()const;
    void getGameModuleServer();
    void initCommands();
    bool isInitialized()const;
    void onClientCreatedLevel(std::unique_ptr<Level>);
    void getEventing()const;
//  Minecraft(IMinecraftApp &, GameCallbacks &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, IMinecraftEventing &, NetworkHandler &, PacketSender &, unsigned char, Timer &, Timer &, ContentTierManager const&, ServerMetrics *); //TODO: incomplete function definition
    void getNetworkHandler()const;
    void updateScreens();
    void getServerLocator()const;
    void setSimTimeScale(float);
    void getServerLocator();
    void clearThreadCallbacks();
    void getNetEventCallback();
    void getTimer();
    bool isLeaveGameDone()const;
    bool isOnlineClient();
//  void setGameModeReal(GameType); //TODO: incomplete function definition
    void getClientSubId()const;
};
