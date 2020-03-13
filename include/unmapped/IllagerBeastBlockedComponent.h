#pragma once



class IllagerBeastBlockedComponent {

public:
    IllagerBeastBlockedComponent(IllagerBeastBlockedComponent &&); // _ZN28IllagerBeastBlockedComponentC2EOS_
    void initFromDefinition(Actor &); // _ZN28IllagerBeastBlockedComponent18initFromDefinitionER5Actor
    void onBlocked(Actor &, ActorDamageSource const&, Actor &); // _ZN28IllagerBeastBlockedComponent9onBlockedER5ActorRK17ActorDamageSourceS1_
};
