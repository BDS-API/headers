#pragma once

#include <vector>


class HealableComponent {

public:
    void initFromDefinition(Actor &, HealableDefinition const&);
    HealableComponent(HealableComponent &&);
    void _applyEffects(Actor &, std::vector<FeedItem::Effect> const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
