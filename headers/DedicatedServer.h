#pragma once

class DedicatedServer : IMinecraftApp, BedrockEngine::AppIsland {

    virtual void DedicatedServer::~DedicatedServer();
    virtual void DedicatedServer::~DedicatedServer();
    virtual void getPrimaryMinecraft(void);
    virtual void getAutomationClient(void)const;
    virtual void isEduMode(void)const;
    virtual void isDedicatedServer(void)const;
    virtual void onNetworkMaxPlayersChanged(unsigned int);
    virtual void getGameModule(void);
    virtual void stop(void);
    virtual void ;
    virtual void `non-virtual thunk to'DedicatedServer::~DedicatedServer();
    virtual void `non-virtual thunk to'DedicatedServer::~DedicatedServer();
    virtual void getId(void);
    virtual void start(void);
    virtual void suspend(void);
    virtual void resume(void);
    virtual void `non-virtual thunk to'DedicatedServer::stop(void);
    virtual void mainUpdate(void);
    virtual void processActivationArguments(ActivationArguments const&);
}
