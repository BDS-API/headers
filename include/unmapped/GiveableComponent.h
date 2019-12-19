#pragma once

class GiveableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    GiveableComponent(GiveableComponent&&);
    GiveableComponent(void);
};
