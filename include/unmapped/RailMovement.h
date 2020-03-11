#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"


class RailMovement {

public:
    static long EXITS;


    void getPosOffs(Actor &, Vec3 &, Vec3, float);
    void getPos(Actor &, Vec3 &, Vec3);
};
