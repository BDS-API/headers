#pragma once



class VanillaGameModuleDedicatedServer : IGameModuleShared {

public:
    VanillaGameModuleDedicatedServer::~VanillaGameModuleDedicatedServer()
    virtual void createGameModuleServer();
    virtual void createInPackagePacks();

    VanillaGameModuleDedicatedServer(void);
};
