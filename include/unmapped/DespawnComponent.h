#pragma once



class DespawnComponent {

public:
    void onDespawn(Actor &);
    void initFromDefinition(Actor &);
    void _removeChildActors(Actor &);
    void getDescription(Actor &)const;
    void tick(Actor &);
    void _canDespawn(Actor &)const;
    DespawnComponent(DespawnComponent &&);
};
