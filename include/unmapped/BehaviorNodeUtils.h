#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/Actor"


class BehaviorNodeUtils {

public:

    void lookAt(Actor &, Vec3 const&, float, float);
};
