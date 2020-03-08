#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"


class TripodCameraComponent {

public:

    TripodCameraComponent(TripodCameraComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
