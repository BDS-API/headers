#pragma once

class InsomniaSystem : ITickingSystem {

public:
    virtual InsomniaSystem::~InsomniaSystem();
    virtual void tick(EntityRegistry &);

    InsomniaSystem(void);
};
