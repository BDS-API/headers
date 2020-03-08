#pragma once

#include "../unmapped/AppIsland"


class DedicatedServer : IMinecraftApp, BedrockEngine::AppIsland {

public:
    virtual DedicatedServer::~DedicatedServer()
    virtual void getPrimaryMinecraft();
    virtual void getAutomationClient()const;
    virtual bool isEduMode()const;
    virtual bool isDedicatedServer()const;
    virtual void onNetworkMaxPlayersChanged(unsigned int);
    virtual void getGameModule();
    virtual void stop();

    DedicatedServer(void);
    void initalizeAppConfigs();
    void initializeLogging();
    void start(std::string const&);
    void _forceContentLogEnabled();
};
