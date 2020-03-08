#pragma once

#include "../bedrock/actor/Actor"


class ManagedWanderingTraderComponent {

public:

    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
};
