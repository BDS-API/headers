#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorInteraction"


class RideableComponent {

public:

    RideableComponent(RideableComponent&&);
    RideableComponent(void);
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
