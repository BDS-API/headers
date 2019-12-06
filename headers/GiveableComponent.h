#pragma once

class GiveableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    void GiveableComponent(GiveableComponent&&);
    void GiveableComponent(void);
};
