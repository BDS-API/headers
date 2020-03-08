#pragma once

#include "../../../unmapped/EntityRegistry"


class InsomniaSystem : ITickingSystem {

public:
    InsomniaSystem::~InsomniaSystem()
    virtual void tick(EntityRegistry &);

    InsomniaSystem(void);
};
