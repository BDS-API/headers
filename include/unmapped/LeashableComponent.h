#pragma once



class LeashableComponent {

public:
    void _canStealLeash(Actor &)const;
    void leash(Actor &, Actor *);
    LeashableComponent(LeashableComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _unleash(Actor &);
};
