#pragma once

#include "ITickingSystem.h"


class InsomniaSystem : ITickingSystem {

public:
    ~InsomniaSystem();
    virtual void tick(EntityRegistry &);
    InsomniaSystem();
};
