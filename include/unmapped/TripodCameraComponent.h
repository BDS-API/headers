#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"


class TripodCameraComponent {

public:

    TripodCameraComponent(TripodCameraComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
