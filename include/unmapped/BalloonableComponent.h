#pragma once



class BalloonableComponent {

public:
    void attach(Actor &, Actor &, ItemStack &);
    BalloonableComponent(BalloonableComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void detach(Actor &, Actor &);
};
