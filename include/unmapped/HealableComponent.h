#pragma once

#include "./HealableComponent.h"
#include <memory>
#include "../bedrock/actor/Actor.h"
#include "./Effect.h"
#include <vector>
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/definition/HealableDefinition.h"


class HealableComponent {

public:

    void initFromDefinition(Actor &, HealableDefinition const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _applyEffects(Actor &, std::vector<FeedItem::Effect, std::allocator<FeedItem::Effect>> const&);
    HealableComponent(HealableComponent &&);
};
