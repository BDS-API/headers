#pragma once

#include <memory>


class RopeSystem {

public:
    static long sEpsilon;
    static long sBucketLength;
    static long sEnabled;

    RopeSystem(); // _ZN10RopeSystemC2Ev
    ~RopeSystem(); // _ZN10RopeSystemD2Ev
    void initialize(RopeParams const&); // _ZN10RopeSystem10initializeERK10RopeParams
    void _initializePins(); // _ZN10RopeSystem15_initializePinsEv
    void _initializePins(Vec3 const&, Vec3 const&); // _ZN10RopeSystem15_initializePinsERK4Vec3S2_
    void updatePins(Vec3 const&, Vec3 const&); // _ZN10RopeSystem10updatePinsERK4Vec3S2_
    void getPoints(); // _ZN10RopeSystem9getPointsEv
    void queueTick(BlockSource &, std::shared_ptr<RopeSystem> &); // _ZN10RopeSystem9queueTickER11BlockSourceRSt10shared_ptrIS_E
    void _cacheColliders(BlockSource &); // _ZN10RopeSystem15_cacheCollidersER11BlockSource
    void _tickWaves(); // _ZN10RopeSystem10_tickWavesEv
    void _tick(); // _ZN10RopeSystem5_tickEv
    bool isCut()const; // _ZNK10RopeSystem5isCutEv
    void _resizeRope(); // _ZN10RopeSystem11_resizeRopeEv
    void _stretchRope(); // _ZN10RopeSystem12_stretchRopeEv
    void _pruneBlacklist(); // _ZN10RopeSystem15_pruneBlacklistEv
    void _solveCollisions(bool); // _ZN10RopeSystem16_solveCollisionsEb
    void _integrate(); // _ZN10RopeSystem10_integrateEv
    void _solvePinConstraints(); // _ZN10RopeSystem20_solvePinConstraintsEv
    void _solveFrictionConstraints(); // _ZN10RopeSystem25_solveFrictionConstraintsEv
    void _solveDistanceConstraints3(); // _ZN10RopeSystem26_solveDistanceConstraints3Ev
    void _solveDistanceConstraints1(); // _ZN10RopeSystem26_solveDistanceConstraints1Ev
    void _updateRenderPoints(); // _ZN10RopeSystem19_updateRenderPointsEv
    void _prepareAABBBuckets(); // _ZN10RopeSystem19_prepareAABBBucketsEv
    void _getBucket(unsigned char); // _ZN10RopeSystem10_getBucketEh
    void _startNewBucket(unsigned long, float); // _ZN10RopeSystem15_startNewBucketEmf
    void _solveDistanceConstraintBlock(Vec3 &, Vec3 &, Vec3 &, Vec3 &, float); // _ZN10RopeSystem29_solveDistanceConstraintBlockER4Vec3S1_S1_S1_f
    void _solveDistanceConstraint(Vec3 &, Vec3 &, float); // _ZN10RopeSystem24_solveDistanceConstraintER4Vec3S1_f
    void _propagateDistanceConstraint(Vec3 const&, Vec3 &, float); // _ZN10RopeSystem28_propagateDistanceConstraintERK4Vec3RS0_f
    void _solveStartBlocks(); // _ZN10RopeSystem17_solveStartBlocksEv
    void _solveEndBlocks(); // _ZN10RopeSystem15_solveEndBlocksEv
    void _finalizeBucket(AABBBucket &); // _ZN10RopeSystem15_finalizeBucketER10AABBBucket
    void _applyFriction1D(RopeNode &, int); // _ZN10RopeSystem16_applyFriction1DER8RopeNodei
    void _solveCollision(RopeNode &, RopeAABB const&); // _ZN10RopeSystem15_solveCollisionER8RopeNodeRK8RopeAABB
    void _pushRange(unsigned long, unsigned long); // _ZN10RopeSystem10_pushRangeEmm
    void cutAtPercent(float); // _ZN10RopeSystem12cutAtPercentEf
    void getCutNode()const; // _ZNK10RopeSystem10getCutNodeEv
    bool isDestroyed()const; // _ZNK10RopeSystem11isDestroyedEv
    void getPins(Vec3 &, Vec3 &)const; // _ZNK10RopeSystem7getPinsER4Vec3S1_
    void storeEndPinEntity(ActorUniqueID const&); // _ZN10RopeSystem17storeEndPinEntityERK13ActorUniqueID
    void getEndPinEntity()const; // _ZNK10RopeSystem15getEndPinEntityEv
//  void addWave(RopeWave); //TODO: incomplete function definition // _ZN10RopeSystem7addWaveE8RopeWave
};
