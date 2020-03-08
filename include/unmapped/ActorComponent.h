#pragma once

#include "../bedrock/actor/Actor"


class ActorComponent {

public:

    ActorComponent(ActorComponent&&);
    void initialize(Actor &);
    void getActor(void);
};
