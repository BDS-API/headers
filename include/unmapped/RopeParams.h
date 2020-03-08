#pragma once

#include "../bedrock/util/Vec3"


class RopeParams {

public:

    RopeParams(void);
    RopeParams(Vec3 const&, Vec3 const&, float);
    void leadInit();
};
