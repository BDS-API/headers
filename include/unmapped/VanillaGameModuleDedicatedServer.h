#pragma once

#include "IGameModuleShared.h"


class VanillaGameModuleDedicatedServer : IGameModuleShared {

public:
    ~VanillaGameModuleDedicatedServer(); // _ZN32VanillaGameModuleDedicatedServerD2Ev
    virtual void createGameModuleServer(); // _ZN32VanillaGameModuleDedicatedServer22createGameModuleServerEv
    virtual void createInPackagePacks(); // _ZN32VanillaGameModuleDedicatedServer20createInPackagePacksEv
    VanillaGameModuleDedicatedServer(); // _ZN32VanillaGameModuleDedicatedServerC2Ev
};
