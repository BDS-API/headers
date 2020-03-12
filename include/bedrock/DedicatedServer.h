#pragma once

#include <string>
#include "../unmapped/AppIsland.h"
#include "IMinecraftApp.h"


class DedicatedServer : IMinecraftApp, BedrockEngine::AppIsland {

public:
    virtual void onNetworkMaxPlayersChanged(unsigned int);
    virtual void getGameModule();
    virtual void stop();
    ~DedicatedServer();
    virtual void getAutomationClient()const;
    virtual bool isDedicatedServer()const;
    virtual void getPrimaryMinecraft();
    virtual bool isEduMode()const;
    DedicatedServer();
    void start(std::string const&);
    void initalizeAppConfigs();
    void initializeLogging();
    void _forceContentLogEnabled();
};
