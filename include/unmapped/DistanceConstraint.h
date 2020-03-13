#pragma once



class DistanceConstraint {

public:
    DistanceConstraint(); // _ZN18DistanceConstraintC2Ev
    DistanceConstraint(float, float, float); // _ZN18DistanceConstraintC2Efff
    void init(float, float, float); // _ZN18DistanceConstraint4initEfff
    void _computeConstraintMass(); // _ZN18DistanceConstraint22_computeConstraintMassEv
    void setup(Vec3 const&, Vec3 const&, float, float); // _ZN18DistanceConstraint5setupERK4Vec3S2_ff
    void _shouldEnforce(float, float); // _ZN18DistanceConstraint14_shouldEnforceEff
    void _clampBias(float); // _ZN18DistanceConstraint10_clampBiasEf
    void solve(Vec3 &, Vec3 &); // _ZN18DistanceConstraint5solveER4Vec3S1_
    void _accumulateLambda(float); // _ZN18DistanceConstraint17_accumulateLambdaEf
};
