#pragma once



class BalloonableComponent {

public:
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN20BalloonableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void attach(Actor &, Actor &, ItemStack &); // _ZN20BalloonableComponent6attachER5ActorS1_R9ItemStack
    void detach(Actor &, Actor &); // _ZN20BalloonableComponent6detachER5ActorS1_
    BalloonableComponent(BalloonableComponent &&); // _ZN20BalloonableComponentC2EOS_
};
