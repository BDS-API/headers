#pragma once

#include <vector>


class HealableComponent {

public:
    void initFromDefinition(Actor &, HealableDefinition const&); // _ZN17HealableComponent18initFromDefinitionER5ActorRK18HealableDefinition
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN17HealableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void _applyEffects(Actor &, std::vector<FeedItem::Effect> const&); // _ZN17HealableComponent13_applyEffectsER5ActorRKSt6vectorIN8FeedItem6EffectESaIS4_EE
    HealableComponent(HealableComponent &&); // _ZN17HealableComponentC2EOS_
};
