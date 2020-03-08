#pragma once

#include "../bedrock/actor/Actor"


class DespawnComponent {

public:

    DespawnComponent(DespawnComponent&&);
    void initFromDefinition(Actor &);
    void getDescription(Actor &)const;
    void tick(Actor &);
    void _canDespawn(Actor &)const;
    void onDespawn(Actor &);
    void _removeChildActors(Actor &);
};
