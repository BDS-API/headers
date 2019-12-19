#pragma once

class IllagerBeastBlockedComponent {

public:

    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent&&);
    void initFromDefinition(Actor &);
    void onBlocked(Actor &, ActorDamageSource const&, Actor &);
};
