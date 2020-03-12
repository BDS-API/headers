#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class InsomniaSystem : ITickingSystem {

public:
    ~InsomniaSystem();
    virtual void tick(EntityRegistry &);
    InsomniaSystem();
};
