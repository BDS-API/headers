#pragma once



class TripodCameraComponent {

public:
    TripodCameraComponent(TripodCameraComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
