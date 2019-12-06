#pragma once

class IllagerBeastBlockedComponent {

public:

    void IllagerBeastBlockedComponent(IllagerBeastBlockedComponent&&);
    void initFromDefinition(Actor &);
    void onBlocked(Actor &, ActorDamageSource const&, Actor &);
};
