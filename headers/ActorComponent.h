#pragma once

class ActorComponent {

public:

    void ActorComponent(ActorComponent&&);
    void initialize(Actor &);
    void getActor(void);
};
