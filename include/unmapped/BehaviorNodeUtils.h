#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/Vec3.h"


namespace BehaviorNodeUtils {

    void lookAt(Actor &, Vec3 const&, float, float);
};
