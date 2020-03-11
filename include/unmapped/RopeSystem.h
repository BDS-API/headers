#pragma once

#include "../bedrock/util/Vec3.h"
#include "./AABBBucket.h"
#include "./RopeNode.h"
#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include "./RopeSystem.h"
#include "./RopeParams.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "./RopeAABB.h"


class RopeSystem {

public:
    static long sEpsilon;
    static long sBucketLength;
    static long sEnabled;


    RopeSystem();
    ~RopeSystem();
    void initialize(RopeParams const&);
    void _initializePins();
    void _initializePins(Vec3 const&, Vec3 const&);
    void updatePins(Vec3 const&, Vec3 const&);
    void getPoints();
    void queueTick(BlockSource &, std::shared_ptr<RopeSystem> &);
    void _cacheColliders(BlockSource &);
    void _tickWaves();
    void _tick();
    bool isCut()const;
    void _resizeRope();
    void _stretchRope();
    void _pruneBlacklist();
    void _solveCollisions(bool);
    void _integrate();
    void _solvePinConstraints();
    void _solveFrictionConstraints();
    void _solveDistanceConstraints3();
    void _solveDistanceConstraints1();
    void _updateRenderPoints();
    void _prepareAABBBuckets();
    void _getBucket(unsigned char);
    void _startNewBucket(unsigned long, float);
    void _solveDistanceConstraintBlock(Vec3 &, Vec3 &, Vec3 &, Vec3 &, float);
    void _solveDistanceConstraint(Vec3 &, Vec3 &, float);
    void _propagateDistanceConstraint(Vec3 const&, Vec3 &, float);
    void _solveStartBlocks();
    void _solveEndBlocks();
    void _finalizeBucket(AABBBucket &);
    void _applyFriction1D(RopeNode &, int);
    void _solveCollision(RopeNode &, RopeAABB const&);
    void _pushRange(unsigned long, unsigned long);
    void cutAtPercent(float);
    void getCutNode()const;
    bool isDestroyed()const;
    void getPins(Vec3 &, Vec3 &)const;
    void storeEndPinEntity(ActorUniqueID const&);
    void getEndPinEntity()const;
//  void addWave(RopeWave); //TODO: incomplete function definition
};
