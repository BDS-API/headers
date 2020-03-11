#pragma once

#include "../bedrock/actor/Actor.h"


class RailActivatorComponent {

public:

    void initFromDefinition(Actor &);
    void ejectAllRiders(Actor &);
};
