#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"
#include "./TripodCameraComponent.h"
#include "../bedrock/actor/Player.h"


class TripodCameraComponent {

public:

    TripodCameraComponent(TripodCameraComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
