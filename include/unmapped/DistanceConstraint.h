#pragma once



class DistanceConstraint {

public:
    void _shouldEnforce(float, float);
    void solve(Vec3 &, Vec3 &);
    void setup(Vec3 const&, Vec3 const&, float, float);
    DistanceConstraint();
    void init(float, float, float);
    void _accumulateLambda(float);
    void _computeConstraintMass();
    DistanceConstraint(float, float, float);
    void _clampBias(float);
};
