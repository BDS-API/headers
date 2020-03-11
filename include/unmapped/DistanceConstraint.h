#pragma once

#include "../bedrock/util/Vec3.h"


class DistanceConstraint {

public:

    DistanceConstraint();
    DistanceConstraint(float, float, float);
    void init(float, float, float);
    void _computeConstraintMass();
    void setup(Vec3 const&, Vec3 const&, float, float);
    void _shouldEnforce(float, float);
    void _clampBias(float);
    void solve(Vec3 &, Vec3 &);
    void _accumulateLambda(float);
};
