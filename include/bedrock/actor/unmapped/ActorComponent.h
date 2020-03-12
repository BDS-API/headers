#pragma once

#include "../Actor.h"


class ActorComponent {

public:
    void initialize(Actor &);
    void getActor();
    ~ActorComponent();
    ActorComponent(ActorComponent &&);
};
