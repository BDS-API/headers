#pragma once



class RideableComponent {

public:
    void getFirstAvailableSeatPosition(Actor const&, Actor &, Vec3 &)const;
    void initFromDefinition(Actor &);
    void getValidSeat(Actor const&, int)const;
    void getRiderIndex(Actor &, Actor &)const;
    RideableComponent();
    RideableComponent(RideableComponent &&);
    bool canAddRider(Actor const&, Actor &)const;
    void pullInEntity(Actor &, Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _setCanPlayerRide(Player &, bool);
    void positionRider(Actor &, Actor &);
};
