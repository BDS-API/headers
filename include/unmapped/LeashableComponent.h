#pragma once



class LeashableComponent {

public:
    LeashableComponent(LeashableComponent &&); // _ZN18LeashableComponentC2EOS_
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN18LeashableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void _canStealLeash(Actor &)const; // _ZNK18LeashableComponent14_canStealLeashER5Actor
    void leash(Actor &, Actor *); // _ZN18LeashableComponent5leashER5ActorPS0_
    void _unleash(Actor &); // _ZN18LeashableComponent8_unleashER5Actor
};
