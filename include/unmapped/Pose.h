#pragma once

#include "../bedrock/util/Vec3.h"


namespace ArmorStand {

class Pose {

public:

    Pose();
    Pose(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&);
};

}