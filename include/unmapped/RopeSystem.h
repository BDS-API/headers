#pragma once

#include "RopeAABB.h"
#include "RopeParams.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "RopeNode.h"
#include <memory>
#include "AABBBucket.h"


class RopeSystem {

public:
    static long sEpsilon;
    static long sBucketLength;
    static long sEnabled;

    void _startNewBucket(unsigned long, float);
    void _solveStartBlocks();
    void _updateRenderPoints();
    void _solveCollision(RopeNode &, RopeAABB const&);
    void getPins(Vec3 &, Vec3 &)const;
    void initialize(RopeParams const&);
    void _solveDistanceConstraintBlock(Vec3 &, Vec3 &, Vec3 &, Vec3 &, float);
    void _integrate();
//  void addWave(RopeWave); //TODO: incomplete function definition
    void updatePins(Vec3 const&, Vec3 const&);
    void _applyFriction1D(RopeNode &, int);
    void _solvePinConstraints();
    void _prepareAABBBuckets();
    bool isDestroyed()const;
    void _initializePins();
    void _solveCollisions(bool);
    void _tickWaves();
    void _initializePins(Vec3 const&, Vec3 const&);
    ~RopeSystem();
    void storeEndPinEntity(ActorUniqueID const&);
    RopeSystem();
    void _pruneBlacklist();
    void _stretchRope();
    void _resizeRope();
    void _solveEndBlocks();
    void _cacheColliders(BlockSource &);
    void _solveDistanceConstraint(Vec3 &, Vec3 &, float);
    void _solveFrictionConstraints();
    void _propagateDistanceConstraint(Vec3 const&, Vec3 &, float);
    void getEndPinEntity()const;
    void _finalizeBucket(AABBBucket &);
    void _solveDistanceConstraints3();
    void queueTick(BlockSource &, std::shared_ptr<RopeSystem> &);
    void _pushRange(unsigned long, unsigned long);
    void _tick();
    void _solveDistanceConstraints1();
    void getPoints();
    void getCutNode()const;
    void cutAtPercent(float);
    bool isCut()const;
    void _getBucket(unsigned char);
};
