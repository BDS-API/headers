#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"


class BehaviorNodeUtils {

public:

    void lookAt(Actor &, Vec3 const&, float, float);
};
