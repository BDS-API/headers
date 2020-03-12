#pragma once

#include "../bedrock/util/Vec3.h"


class DistanceConstraint {

public:
    void _clampBias(float);
    void init(float, float, float);
    void setup(Vec3 const&, Vec3 const&, float, float);
    DistanceConstraint(float, float, float);
    DistanceConstraint();
    void _shouldEnforce(float, float);
    void solve(Vec3 &, Vec3 &);
    void _accumulateLambda(float);
    void _computeConstraintMass();
};
