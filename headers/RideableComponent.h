#pragma once

class RideableComponent {

public:

    void RideableComponent(RideableComponent&&);
    void RideableComponent(void);
    void initFromDefinition(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    bool canAddRider(Actor const&, Actor&)const;
    void _setCanPlayerRide(Player &, bool);
    void pullInEntity(Actor &, Actor &);
    void positionRider(Actor &, Actor &);
    void getRiderIndex(Actor &, Actor &)const;
    void getValidSeat(Actor const&, int)const;
    void getFirstAvailableSeatPosition(Actor const&, Actor&, Vec3 &)const;
};
