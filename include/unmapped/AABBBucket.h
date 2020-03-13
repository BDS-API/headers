#pragma once



class AABBBucket {

public:
    ~AABBBucket(); // _ZN10AABBBucketD2Ev
    void size()const; // _ZNK10AABBBucket4sizeEv
    void get(unsigned long); // _ZN10AABBBucket3getEm
    void clear(); // _ZN10AABBBucket5clearEv
    void add(RopeAABB const&); // _ZN10AABBBucket3addERK8RopeAABB
    AABBBucket(AABBBucket &&); // _ZN10AABBBucketC2EOS_
    AABBBucket(); // _ZN10AABBBucketC2Ev
    void clearDirty(); // _ZN10AABBBucket10clearDirtyEv
    void mergeAABBs(); // _ZN10AABBBucket10mergeAABBsEv
    void markDirty(); // _ZN10AABBBucket9markDirtyEv
    bool isDirty(); // _ZN10AABBBucket7isDirtyEv
    bool needsFinalize()const; // _ZNK10AABBBucket13needsFinalizeEv
    void clearNeedsFinalize(); // _ZN10AABBBucket18clearNeedsFinalizeEv
};
