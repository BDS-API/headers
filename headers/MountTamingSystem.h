#pragma once

class MountTamingSystem : ITickingSystem {

public:
    virtual ~MountTamingSystem();
    virtual void tick(EntityRegistry &);

    void MountTamingSystem(void);
};
