#pragma once

#include "../bedrock/actor/Actor.h"


class DespawnComponent {

public:
    void _canDespawn(Actor &)const;
    DespawnComponent(DespawnComponent &&);
    void initFromDefinition(Actor &);
    void onDespawn(Actor &);
    void _removeChildActors(Actor &);
    void getDescription(Actor &)const;
    void tick(Actor &);
};
