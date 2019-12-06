#pragma once

class MoveControlSystem : ITickingSystem {

public:
    virtual ~MoveControlSystem();
    virtual void tick(EntityRegistry &);

    void MoveControlSystem(void);
};
