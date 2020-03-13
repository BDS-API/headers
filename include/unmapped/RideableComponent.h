#pragma once



class RideableComponent {

public:
    RideableComponent(RideableComponent &&); // _ZN17RideableComponentC2EOS_
    RideableComponent(); // _ZN17RideableComponentC2Ev
    void initFromDefinition(Actor &); // _ZN17RideableComponent18initFromDefinitionER5Actor
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN17RideableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    bool canAddRider(Actor const&, Actor &)const; // _ZNK17RideableComponent11canAddRiderERK5ActorRS0_
    void _setCanPlayerRide(Player &, bool); // _ZN17RideableComponent17_setCanPlayerRideER6Playerb
    void pullInEntity(Actor &, Actor &); // _ZN17RideableComponent12pullInEntityER5ActorS1_
    void positionRider(Actor &, Actor &); // _ZN17RideableComponent13positionRiderER5ActorS1_
    void getRiderIndex(Actor &, Actor &)const; // _ZNK17RideableComponent13getRiderIndexER5ActorS1_
    void getValidSeat(Actor const&, int)const; // _ZNK17RideableComponent12getValidSeatERK5Actori
    void getFirstAvailableSeatPosition(Actor const&, Actor &, Vec3 &)const; // _ZNK17RideableComponent29getFirstAvailableSeatPositionERK5ActorRS0_R4Vec3
};
