#pragma once

#include <memory>


class RopeSystem {

public:
    static long sEpsilon;
    static long sBucketLength;
    static long sEnabled;

    void _startNewBucket(unsigned long, float);
    void updatePins(Vec3 const&, Vec3 const&);
    void _solveStartBlocks();
    void _solveCollision(RopeNode &, RopeAABB const&);
    void _prepareAABBBuckets();
    void _resizeRope();
    void _integrate();
    void _updateRenderPoints();
    void _initializePins();
    void _solveDistanceConstraints1();
    RopeSystem();
    void _solveDistanceConstraint(Vec3 &, Vec3 &, float);
    bool isCut()const;
    void _getBucket(unsigned char);
    void getCutNode()const;
    bool isDestroyed()const;
//  void addWave(RopeWave); //TODO: incomplete function definition
    void _solveFrictionConstraints();
    void storeEndPinEntity(ActorUniqueID const&);
    void getPins(Vec3 &, Vec3 &)const;
    void cutAtPercent(float);
    void _solveDistanceConstraintBlock(Vec3 &, Vec3 &, Vec3 &, Vec3 &, float);
    void _solveEndBlocks();
    void _finalizeBucket(AABBBucket &);
    void _initializePins(Vec3 const&, Vec3 const&);
    void _tickWaves();
    void queueTick(BlockSource &, std::shared_ptr<RopeSystem> &);
    void _solvePinConstraints();
    void _pruneBlacklist();
    void _pushRange(unsigned long, unsigned long);
    ~RopeSystem();
    void _applyFriction1D(RopeNode &, int);
    void initialize(RopeParams const&);
    void _propagateDistanceConstraint(Vec3 const&, Vec3 &, float);
    void _cacheColliders(BlockSource &);
    void _solveCollisions(bool);
    void getEndPinEntity()const;
    void _tick();
    void getPoints();
    void _stretchRope();
    void _solveDistanceConstraints3();
};
