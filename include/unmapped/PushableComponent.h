#pragma once

#include "../bedrock/description/component/PushableDescription.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"


class PushableComponent {

public:
    PushableComponent(PushableComponent &&);
    void initFromDefinition(Actor &);
    void push(Actor &, Actor &, bool);
    bool isPushable();
    void initFromDefinition(Actor &, PushableDescription &);
    void _calculatePushVectorBoat(Actor &, Actor &, bool);
    void _calculatePushVectorMinecart(Actor &, Actor &, bool);
    bool isPushableByPiston();
    void _calculatePushVectorBase(Actor &, Actor &, bool);
    void push(Actor &, Vec3 const&);
};
