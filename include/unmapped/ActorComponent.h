#pragma once

class ActorComponent {

public:

    ActorComponent(ActorComponent&&);
    void initialize(Actor &);
    void getActor(void);
};
