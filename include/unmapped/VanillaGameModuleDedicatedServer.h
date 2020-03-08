#pragma once



class VanillaGameModuleDedicatedServer : IGameModuleShared {

public:
    virtual VanillaGameModuleDedicatedServer::~VanillaGameModuleDedicatedServer()
    virtual void createGameModuleServer();
    virtual void createInPackagePacks();

    VanillaGameModuleDedicatedServer(void);
};
