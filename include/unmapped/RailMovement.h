#pragma once

#include "../bedrock/util/Vec3.h"


namespace RailMovement {

    static long EXITS;

    void getPosOffs(Actor &, Vec3 &, Vec3, float);
    void getPos(Actor &, Vec3 &, Vec3);
};
