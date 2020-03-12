#pragma once



class AABBBucket {

public:
    void mergeAABBs();
    void add(RopeAABB const&);
    ~AABBBucket();
    void clearDirty();
    AABBBucket(AABBBucket &&);
    void markDirty();
    void get(unsigned long);
    void size()const;
    bool isDirty();
    void clearNeedsFinalize();
    void clear();
    AABBBucket();
    bool needsFinalize()const;
};
