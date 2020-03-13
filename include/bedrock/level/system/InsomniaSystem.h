#pragma once

#include "ITickingSystem.h"


class InsomniaSystem : ITickingSystem {

public:
    ~InsomniaSystem(); // _ZN14InsomniaSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN14InsomniaSystem4tickER14EntityRegistry
    InsomniaSystem(); // _ZN14InsomniaSystemC2Ev
};
