#pragma once

class VanillaGameModuleDedicatedServer : IGameModuleShared {

public:
    virtual ~VanillaGameModuleDedicatedServer();
    virtual void createGameModuleServer(void);
    virtual void createInPackagePacks(void);

    void VanillaGameModuleDedicatedServer(void);
};
