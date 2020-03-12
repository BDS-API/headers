#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/util/Vec3.h"


class RideableComponent {

public:
    void _setCanPlayerRide(Player &, bool);
    void getValidSeat(Actor const&, int)const;
    RideableComponent(RideableComponent &&);
    void getRiderIndex(Actor &, Actor &)const;
    void pullInEntity(Actor &, Actor &);
    void positionRider(Actor &, Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getFirstAvailableSeatPosition(Actor const&, Actor &, Vec3 &)const;
    RideableComponent();
    void initFromDefinition(Actor &);
    bool canAddRider(Actor const&, Actor &)const;
};
