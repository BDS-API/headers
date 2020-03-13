#pragma once



class TrustingComponent {

public:
    ~TrustingComponent(); // _ZN17TrustingComponentD2Ev
    TrustingComponent(TrustingComponent &&); // _ZN17TrustingComponentC2EOS_
    TrustingComponent(); // _ZN17TrustingComponentC2Ev
    void initFromDefinition(Actor &); // _ZN17TrustingComponent18initFromDefinitionER5Actor
    void _canTrust(ItemStack const&)const; // _ZNK17TrustingComponent9_canTrustERK9ItemStack
    void _sendTrustEvents(Actor &, Player &)const; // _ZNK17TrustingComponent16_sendTrustEventsER5ActorR6Player
    void _becomeTrusting(Actor &); // _ZN17TrustingComponent15_becomeTrustingER5Actor
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN17TrustingComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
};
