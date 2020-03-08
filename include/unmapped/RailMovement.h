#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/Actor"


class RailMovement {

public:
    static long EXITS;


    void getPosOffs(Actor &, Vec3 &, Vec3, float);
    void getPos(Actor &, Vec3 &, Vec3);
};
