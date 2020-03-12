#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/definition/HealableDefinition.h"
#include <vector>
#include "FeedItem.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class HealableComponent {

public:
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void initFromDefinition(Actor &, HealableDefinition const&);
    void _applyEffects(Actor &, std::vector<FeedItem::Effect> const&);
    HealableComponent(HealableComponent &&);
};
