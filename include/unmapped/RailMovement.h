#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/Vec3.h"


namespace RailMovement {

    static long EXITS;

    void getPos(Actor &, Vec3 &, Vec3);
    void getPosOffs(Actor &, Vec3 &, Vec3, float);
};
