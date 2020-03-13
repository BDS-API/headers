#pragma once

#include "ITickingSystem.h"


class MountTamingSystem : ITickingSystem {

public:
    ~MountTamingSystem(); // _ZN17MountTamingSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN17MountTamingSystem4tickER14EntityRegistry
    MountTamingSystem(); // _ZN17MountTamingSystemC2Ev
};
