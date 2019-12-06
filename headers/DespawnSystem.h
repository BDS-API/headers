#pragma once

class DespawnSystem : ITickingSystem {

public:
    virtual ~DespawnSystem();
    virtual void tick(EntityRegistry &);

    void DespawnSystem(void);
};
