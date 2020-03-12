#pragma once



class GiveableComponent {

public:
    GiveableComponent(GiveableComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    ~GiveableComponent();
    GiveableComponent();
};
