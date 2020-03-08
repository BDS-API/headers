#pragma once

#include "../../../unmapped/EntityRegistry"


class LeashableSystem : ITickingSystem {

public:
    LeashableSystem::~LeashableSystem()
    virtual void tick(EntityRegistry &);

    LeashableSystem(void);
};
