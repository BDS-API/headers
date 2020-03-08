#pragma once

#include "network/NetEventCallback"
#include "definition/ConnectionDefinition"
#include "metrics/ServerMetrics"
#include "../unmapped/GameCallbacks"
#include "../unmapped/Timer"
#include "util/Whitelist"
#include "../unmapped/PermissionsFile"
#include "../unmapped/IEntityRegistryOwner"
#include "../core/FilePathManager"
#include "actor/Player"
#include "../unmapped/ContentTierManager"
#include "../unmapped/NetworkIdentifier"
#include "../mce/UUID"
#include "../unmapped/PackIdVersion"
#include "network/packet/sender/PacketSender"
#include "eventing/IMinecraftEventing"
#include "../unmapped/NetworkHandler"
#include "level/Level"


class Minecraft : IEntityRegistryOwner {

public:
    virtual void getEntityRegistry();
    Minecraft::~Minecraft()

    Minecraft(IMinecraftApp &, GameCallbacks &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, IMinecraftEventing &, NetworkHandler &, PacketSender &, unsigned char, Timer &, Timer &, ContentTierManager const&, ServerMetrics *);
    void resetGameSession();
    void clearThreadCallbacks();
    void updateScreens();
    void initAsDedicatedServer();
    void init();
    void getGameModuleServer();
    void initCommands();
    bool isInitialized()const;
    void startLeaveGame(bool);
    bool isLeaveGameDone()const;
    void clientReset();
    void setGameModeReal(GameType);
    void update();
    void getServerNetworkHandler();
    void disconnectClient(NetworkIdentifier const&, std::string const&);
    void tickSimtime(int, int);
    void tickRealtime(int, int);
    GameSession* getLevel()const;
    void setSimTimePause(bool);
    void setSimTimeScale(float);
    void getSimPaused()const;
    bool isModded();
    bool isOnlineClient();
    void getNetworkStatistics()const;
    void hostMultiplayer(std::string const&, std::unique_ptr<Level, std::default_delete<Level>>, Player *, mce::UUID const&, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>, int, bool, bool, std::vector<std::string, std::allocator<std::string>> const&, std::string, ConnectionDefinition const&, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *);
    void getClientSubId()const;
    void setupServerCommands(std::string const&, std::string const&);
    bool usesNonLocalConnection(NetworkIdentifier const&);
    void getNetworkHandler();
    void startClientGame(std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>);
    void joinWorldInProgress(std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>);
    void activateWhitelist();
    void getCommands();
    bool hasCommands();
    void getNetEventCallback();
    void getServerLocator();
    void getServerLocator()const;
    void getNetworkHandler()const;
    void getEventing()const;
    void onClientCreatedLevel(std::unique_ptr<Level, std::default_delete<Level>>);
    void getTimer();
    void getLastTimestep();
    void getResourceLoader();
    void getStructureManager();
};
