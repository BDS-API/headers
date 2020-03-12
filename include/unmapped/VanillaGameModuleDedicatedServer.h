#pragma once

#include "IGameModuleShared.h"


class VanillaGameModuleDedicatedServer : IGameModuleShared {

public:
    virtual void createInPackagePacks();
    ~VanillaGameModuleDedicatedServer();
    virtual void createGameModuleServer();
    VanillaGameModuleDedicatedServer();
};
