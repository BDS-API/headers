#pragma once

#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "./TrustingComponent.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class TrustingComponent {

public:

    ~TrustingComponent();
    TrustingComponent(TrustingComponent &&);
    TrustingComponent();
    void initFromDefinition(Actor &);
    void _canTrust(ItemStack const&)const;
    void _sendTrustEvents(Actor &, Player &)const;
    void _becomeTrusting(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
