#pragma once

class TrustingComponent {

public:

    void TrustingComponent(TrustingComponent&&);
    void TrustingComponent(void);
    void initFromDefinition(Actor &);
    void _canTrust(ItemStack const&)const;
    void _sendTrustEvents(Actor &, Player &)const;
    void _becomeTrusting(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
