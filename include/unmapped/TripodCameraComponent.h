#pragma once

#include "../bedrock/actor/Actor"


class TripodCameraComponent {

public:

    TripodCameraComponent(TripodCameraComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
