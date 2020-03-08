#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/item/ItemStack"


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
