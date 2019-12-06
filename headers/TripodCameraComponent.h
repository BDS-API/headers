#pragma once

class TripodCameraComponent {

public:

    void TripodCameraComponent(TripodCameraComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
