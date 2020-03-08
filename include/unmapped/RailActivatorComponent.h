#pragma once

#include "../bedrock/actor/Actor"


class RailActivatorComponent {

public:

    void initFromDefinition(Actor &);
    void ejectAllRiders(Actor &);
};
