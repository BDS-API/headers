#pragma once



class RopeSystem {

public:
    static long sEpsilon;
    static long sBucketLength;
    static long sEnabled;


    RopeSystem(void);
    void initialize(RopeParams const&);
    void _initializePins(void);
    void _initializePins(Vec3 const&, Vec3 const&);
    void updatePins(Vec3 const&, Vec3 const&);
    void getPoints(void);
    void queueTick(BlockSource &, std::shared_ptr<RopeSystem> &);
    void _cacheColliders(BlockSource &);
    void _tickWaves(void);
    void _tick(void);
    bool isCut(void)const;
    void _resizeRope(void);
    void _stretchRope(void);
    void _pruneBlacklist(void);
    void _solveCollisions(bool);
    void _integrate(void);
    void _solvePinConstraints(void);
    void _solveFrictionConstraints(void);
    void _solveDistanceConstraints3(void);
    void _solveDistanceConstraints1(void);
    void _updateRenderPoints(void);
    void _prepareAABBBuckets(void);
    void _getBucket(unsigned char);
    void _startNewBucket(unsigned long, float);
    void _solveDistanceConstraintBlock(Vec3 &, Vec3 &, Vec3 &, Vec3 &, float);
    void _solveDistanceConstraint(Vec3 &, Vec3 &, float);
    void _propagateDistanceConstraint(Vec3 const&, Vec3&, float);
    void _solveStartBlocks(void);
    void _solveEndBlocks(void);
    void _finalizeBucket(AABBBucket &);
    void _applyFriction1D(RopeNode &, int);
    void _solveCollision(RopeNode &, RopeAABB const&);
    void _pushRange(unsigned long, unsigned long);
    void cutAtPercent(float);
    void getCutNode(void)const;
    bool isDestroyed(void)const;
    void getPins(Vec3 &, Vec3 &)const;
    void storeEndPinEntity(ActorUniqueID const&);
    void getEndPinEntity(void)const;
    void addWave(RopeWave);
};
