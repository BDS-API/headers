#pragma once



class ActorComponent {

public:
    ActorComponent(ActorComponent &&);
    void initialize(Actor &);
    ~ActorComponent();
    void getActor();
};
