#pragma once

#include "ITickingSystem.h"


class AgentCommandSystem : public ITickingSystem {

public:
    virtual ~AgentCommandSystem(); // _ZN18AgentCommandSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN18AgentCommandSystem4tickER14EntityRegistry
    AgentCommandSystem(); // _ZN18AgentCommandSystemC2Ev
};
