#pragma once



class DespawnComponent {

public:
    DespawnComponent(DespawnComponent &&); // _ZN16DespawnComponentC2EOS_
    void initFromDefinition(Actor &); // _ZN16DespawnComponent18initFromDefinitionER5Actor
    void getDescription(Actor &)const; // _ZNK16DespawnComponent14getDescriptionER5Actor
    void tick(Actor &); // _ZN16DespawnComponent4tickER5Actor
    void _canDespawn(Actor &)const; // _ZNK16DespawnComponent11_canDespawnER5Actor
    void onDespawn(Actor &); // _ZN16DespawnComponent9onDespawnER5Actor
    void _removeChildActors(Actor &); // _ZN16DespawnComponent18_removeChildActorsER5Actor
};
