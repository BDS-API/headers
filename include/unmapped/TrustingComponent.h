#pragma once



class TrustingComponent {

public:
    ~TrustingComponent();
    void _becomeTrusting(Actor &);
    void initFromDefinition(Actor &);
    TrustingComponent(TrustingComponent &&);
    TrustingComponent();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _canTrust(ItemStack const&)const;
    void _sendTrustEvents(Actor &, Player &)const;
};
