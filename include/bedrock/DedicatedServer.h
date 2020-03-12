#pragma once

#include "IMinecraftApp.h"
#include "../unmapped/AppIsland.h"
#include <string>


class DedicatedServer : IMinecraftApp, BedrockEngine::AppIsland {

public:
    virtual void getPrimaryMinecraft();
    ~DedicatedServer();
    virtual bool isDedicatedServer()const;
    virtual bool isEduMode()const;
    virtual void getGameModule();
    virtual void onNetworkMaxPlayersChanged(unsigned int);
    virtual void getAutomationClient()const;
    virtual void stop();
    DedicatedServer();
    void initalizeAppConfigs();
    void _forceContentLogEnabled();
    void start(std::string const&);
    void initializeLogging();
};
