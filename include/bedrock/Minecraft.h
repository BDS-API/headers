#pragma once

#include <unordered_map>
#include <ratio>
#include "metrics/ServerMetrics.h"
#include "level/Level.h"
#include "actor/Player.h"
#include "eventing/IMinecraftEventing.h"
#include "./Scheduler.h"
#include <functional>
#include "./IMinecraftApp.h"
#include "../unmapped/GameCallbacks.h"
#include "../unmapped/NetworkHandler.h"
#include "../mce/UUID.h"
#include "../unmapped/PackIdVersion.h"
#include "../core/FilePathManager.h"
#include "../unmapped/NetworkIdentifier.h"
#include "../unmapped/ContentTierManager.h"
#include "../unmapped/Timer.h"
#include <utility>
#include "definition/ConnectionDefinition.h"
#include "../unmapped/IEntityRegistryOwner.h"
#include <memory>
#include "network/NetEventCallback.h"
#include <vector>
#include "network/packet/sender/PacketSender.h"
#include "util/Whitelist.h"
#include "../unmapped/PermissionsFile.h"
#include <string>


class Minecraft : IEntityRegistryOwner {

public:
    virtual void getEntityRegistry();
    virtual ~Minecraft();

//  Minecraft(IMinecraftApp &, GameCallbacks &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, IMinecraftEventing &, NetworkHandler &, PacketSender &, unsigned char, Timer &, Timer &, ContentTierManager const&, ServerMetrics *); //TODO: incomplete function definition
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
//  void setGameModeReal(GameType); //TODO: incomplete function definition
    void update();
    void getServerNetworkHandler();
    void disconnectClient(NetworkIdentifier const&, std::string const&);
    void tickSimtime(int, int);
    void tickRealtime(int, int);
    void getLevel()const;
    void setSimTimePause(bool);
    void setSimTimeScale(float);
    void getSimPaused()const;
    bool isModded();
    bool isOnlineClient();
    void getNetworkStatistics()const;
//  void hostMultiplayer(std::string const&, std::unique_ptr<Level, std::default_delete<Level>>, Player *, mce::UUID const&, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>, int, bool, bool, std::vector<std::string, std::allocator<std::string>> const&, std::string, ConnectionDefinition const&, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *); //TODO: incomplete function definition
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
