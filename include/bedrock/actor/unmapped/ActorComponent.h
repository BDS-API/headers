#pragma once



class ActorComponent {

public:
    ActorComponent(ActorComponent &&); // _ZN14ActorComponentC2EOS_
    ~ActorComponent(); // _ZN14ActorComponentD2Ev
    void initialize(Actor &); // _ZN14ActorComponent10initializeER5Actor
    void getActor(); // _ZN14ActorComponent8getActorEv
};
