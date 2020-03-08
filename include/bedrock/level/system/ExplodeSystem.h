#pragma once

#include "../../../unmapped/EntityRegistry"


class ExplodeSystem : ITickingSystem {

public:
    ExplodeSystem::~ExplodeSystem()
    virtual void tick(EntityRegistry &);

    ExplodeSystem(void);
};
