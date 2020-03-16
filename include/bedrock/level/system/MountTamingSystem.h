#pragma once

#include "ITickingSystem.h"


class MountTamingSystem : public ITickingSystem {

public:
    virtual ~MountTamingSystem(); // _ZN17MountTamingSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN17MountTamingSystem4tickER14EntityRegistry
    MountTamingSystem(); // _ZN17MountTamingSystemC2Ev
};
