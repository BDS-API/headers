#pragma once

class LeashableComponent {

public:

    void LeashableComponent(LeashableComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _canStealLeash(Actor &)const;
    void leash(Actor &, Actor*);
    void _unleash(Actor &);
};
