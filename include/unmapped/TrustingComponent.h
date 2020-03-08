#pragma once

#include "../bedrock/item/ItemStack"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Player"


class TrustingComponent {

public:

    TrustingComponent(TrustingComponent&&);
    TrustingComponent(void);
    void initFromDefinition(Actor &);
    void _canTrust(ItemStack const&)const;
    void _sendTrustEvents(Actor &, Player &)const;
    void _becomeTrusting(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
