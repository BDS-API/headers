#pragma once

#include "../Actor"


class ActorComponent {

public:

    ActorComponent(ActorComponent&&);
    void initialize(Actor &);
    void getActor();
};
