#pragma once

class ExplodeSystem : ITickingSystem {

public:
    virtual ~ExplodeSystem();
    virtual void tick(EntityRegistry &);

    void ExplodeSystem(void);
};
