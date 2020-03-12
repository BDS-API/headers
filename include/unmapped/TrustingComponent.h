#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class TrustingComponent {

public:
    void _canTrust(ItemStack const&)const;
    void initFromDefinition(Actor &);
    TrustingComponent(TrustingComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    TrustingComponent();
    ~TrustingComponent();
    void _sendTrustEvents(Actor &, Player &)const;
    void _becomeTrusting(Actor &);
};
