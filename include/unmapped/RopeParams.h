#pragma once

#include "../bedrock/util/Vec3.h"


class RopeParams {

public:

    RopeParams();
    RopeParams(Vec3 const&, Vec3 const&, float);
    void leadInit();
};
