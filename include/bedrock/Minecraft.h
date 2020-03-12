#pragma once

#include "../unmapped/IEntityRegistryOwner.h"
#include <unordered_map>
#include "network/packet/sender/PacketSender.h"
#include "network/NetEventCallback.h"
#include <memory>
#include "../unmapped/GameCallbacks.h"
#include <string>
#include "../unmapped/NetworkHandler.h"
#include <functional>
#include "level/Level.h"
#include "../mce/UUID.h"
#include "../unmapped/Timer.h"
#include <vector>
#include "definition/ConnectionDefinition.h"
#include "../unmapped/PermissionsFile.h"
#include "actor/Player.h"
#include <utility>
#include "IMinecraftApp.h"
#include "../unmapped/PackIdVersion.h"
#include "../unmapped/ContentTierManager.h"
#include "metrics/ServerMetrics.h"
#include "Scheduler.h"
#include <ratio>
#include "../unmapped/NetworkIdentifier.h"
#include "../core/FilePathManager.h"
#include "eventing/IMinecraftEventing.h"
#include "util/Whitelist.h"


class Minecraft : IEntityRegistryOwner {

public:
    ~Minecraft();
    virtual void getEntityRegistry();
    void getServerLocator();
    void startClientGame(std::unique_ptr<NetEventCallback>);
    void clearThreadCallbacks();
    void initAsDedicatedServer();
    void tickRealtime(int, int);
    void getGameModuleServer();
    bool isLeaveGameDone()const;
    void getNetworkStatistics()const;
    void joinWorldInProgress(std::unique_ptr<NetEventCallback>);
//  void setGameModeReal(GameType); //TODO: incomplete function definition
    void getTimer();
    void initCommands();
    bool usesNonLocalConnection(NetworkIdentifier const&);
    void resetGameSession();
    void getServerNetworkHandler();
    void init();
    bool isInitialized()const;
    void getNetworkHandler();
    void clientReset();
    void tickSimtime(int, int);
    void getResourceLoader();
    void startLeaveGame(bool);
    void disconnectClient(NetworkIdentifier const&, std::string const&);
    void activateWhitelist();
    void getStructureManager();
    bool isOnlineClient();
    void setupServerCommands(std::string const&, std::string const&);
    bool hasCommands();
//  void hostMultiplayer(std::string const&, std::unique_ptr<Level>, Player *, mce::UUID const&, std::unique_ptr<NetEventCallback>, int, bool, bool, std::vector<std::string> const&, std::string, ConnectionDefinition const&, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *); //TODO: incomplete function definition
    GameSession * getLevel()const;
    void getSimPaused()const;
    void updateScreens();
    void getNetworkHandler()const;
    void getNetEventCallback();
    void setSimTimeScale(float);
    void update();
    void getLastTimestep();
    bool isModded();
    void getClientSubId()const;
    void getCommands();
    void onClientCreatedLevel(std::unique_ptr<Level>);
//  Minecraft(IMinecraftApp &, GameCallbacks &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, IMinecraftEventing &, NetworkHandler &, PacketSender &, unsigned char, Timer &, Timer &, ContentTierManager const&, ServerMetrics *); //TODO: incomplete function definition
    void getEventing()const;
    void getServerLocator()const;
    void setSimTimePause(bool);
};
