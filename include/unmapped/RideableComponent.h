#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "./RideableComponent.h"


class RideableComponent {

public:

    RideableComponent(RideableComponent &&);
    RideableComponent();
    void initFromDefinition(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    bool canAddRider(Actor const&, Actor &)const;
    void _setCanPlayerRide(Player &, bool);
    void pullInEntity(Actor &, Actor &);
    void positionRider(Actor &, Actor &);
    void getRiderIndex(Actor &, Actor &)const;
    void getValidSeat(Actor const&, int)const;
    void getFirstAvailableSeatPosition(Actor const&, Actor &, Vec3 &)const;
};
