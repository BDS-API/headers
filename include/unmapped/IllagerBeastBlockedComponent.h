#pragma once



class IllagerBeastBlockedComponent {

public:
    void onBlocked(Actor &, ActorDamageSource const&, Actor &);
    void initFromDefinition(Actor &);
    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent &&);
};
