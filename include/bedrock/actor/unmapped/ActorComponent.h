#pragma once

#include "../Actor.h"
#include "./ActorComponent.h"


class ActorComponent {

public:

    ActorComponent(ActorComponent &&);
    ~ActorComponent();
    void initialize(Actor &);
    void getActor();
};
