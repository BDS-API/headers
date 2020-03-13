#pragma once

#include "../bedrock/util/Vec3.h"


namespace RailMovement {

    static long EXITS;

    void getPosOffs(Actor &, Vec3 &, Vec3, float); // _ZN12RailMovement10getPosOffsER5ActorR4Vec3S2_f
    void getPos(Actor &, Vec3 &, Vec3); // _ZN12RailMovement6getPosER5ActorR4Vec3S2_
};
