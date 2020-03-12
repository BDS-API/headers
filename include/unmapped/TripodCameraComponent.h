#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"


class TripodCameraComponent {

public:
    void getInteraction(Actor &, Player &, ActorInteraction &);
    TripodCameraComponent(TripodCameraComponent &&);
};
