#pragma once

class InsomniaSystem : ITickingSystem {

public:
    virtual ~InsomniaSystem();
    virtual void tick(EntityRegistry &);

    void InsomniaSystem(void);
};
