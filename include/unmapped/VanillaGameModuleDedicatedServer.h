#pragma once

class VanillaGameModuleDedicatedServer : IGameModuleShared {

public:
    virtual VanillaGameModuleDedicatedServer::~VanillaGameModuleDedicatedServer();
    virtual void createGameModuleServer(void);
    virtual void createInPackagePacks(void);

    VanillaGameModuleDedicatedServer(void);
};
