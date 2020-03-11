#pragma once

#include "../bedrock/util/Vec3.h"
#include "./PushableComponent.h"
#include "../bedrock/description/component/PushableDescription.h"
#include "../bedrock/actor/Actor.h"


class PushableComponent {

public:

    PushableComponent(PushableComponent &&);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, PushableDescription &);
    void push(Actor &, Actor &, bool);
    void _calculatePushVectorBoat(Actor &, Actor &, bool);
    void _calculatePushVectorMinecart(Actor &, Actor &, bool);
    void _calculatePushVectorBase(Actor &, Actor &, bool);
    void push(Actor &, Vec3 const&);
    bool isPushable();
    bool isPushableByPiston();
};
