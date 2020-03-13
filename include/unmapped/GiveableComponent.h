#pragma once



class GiveableComponent {

public:
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN17GiveableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    ~GiveableComponent(); // _ZN17GiveableComponentD2Ev
    GiveableComponent(GiveableComponent &&); // _ZN17GiveableComponentC2EOS_
    GiveableComponent(); // _ZN17GiveableComponentC2Ev
};
