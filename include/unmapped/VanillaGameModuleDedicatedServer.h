#pragma once

#include "IGameModuleShared.h"


class VanillaGameModuleDedicatedServer : IGameModuleShared {

public:
    virtual void createGameModuleServer();
    virtual void createInPackagePacks();
    ~VanillaGameModuleDedicatedServer();
    VanillaGameModuleDedicatedServer();
};
