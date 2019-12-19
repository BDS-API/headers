#pragma once

class HealableComponent {

public:

    void initFromDefinition(Actor &, HealableDefinition const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _applyEffects(Actor &, std::vector<FeedItem::Effect, std::allocator<FeedItem::Effect>> const&);
    HealableComponent(HealableComponent&&);
};
