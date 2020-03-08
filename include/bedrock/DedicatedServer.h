#pragma once

#include "../unmapped/AppIsland"


class DedicatedServer : IMinecraftApp, BedrockEngine::AppIsland {

public:
    virtual DedicatedServer::~DedicatedServer();
    virtual void getPrimaryMinecraft(void);
    virtual void getAutomationClient(void)const;
    virtual bool isEduMode(void)const;
    virtual bool isDedicatedServer(void)const;
    virtual void onNetworkMaxPlayersChanged(unsigned int);
    virtual void getGameModule(void);
    virtual void stop(void);

    DedicatedServer(void);
    void initalizeAppConfigs(void);
    void initializeLogging(void);
    void start(std::string const&);
    void _forceContentLogEnabled(void);
};
