#pragma once

#include "../../../unmapped/EntityRegistry"


class LeashableSystem : ITickingSystem {

public:
    virtual LeashableSystem::~LeashableSystem()
    virtual void tick(EntityRegistry &);

    LeashableSystem(void);
};
