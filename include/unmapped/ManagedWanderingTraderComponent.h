#pragma once

#include "../bedrock/actor/Actor.h"


class ManagedWanderingTraderComponent {

public:

    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
};
