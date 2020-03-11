#pragma once

#include "./IGameModuleShared.h"


class VanillaGameModuleDedicatedServer : IGameModuleShared {

public:
    virtual ~VanillaGameModuleDedicatedServer();
    virtual void createGameModuleServer();
    virtual void createInPackagePacks();

    VanillaGameModuleDedicatedServer();
};
