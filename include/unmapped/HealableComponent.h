#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/definition/HealableDefinition"
#include "../bedrock/actor/unmapped/ActorInteraction"


class HealableComponent {

public:

    void initFromDefinition(Actor &, HealableDefinition const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _applyEffects(Actor &, std::vector<FeedItem::Effect, std::allocator<FeedItem::Effect>> const&);
    HealableComponent(HealableComponent&&);
};
