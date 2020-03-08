#pragma once



class AABBBucket {

public:

    void size()const;
    void get(unsigned long);
    void clear();
    void add(RopeAABB const&);
    AABBBucket(AABBBucket&&);
    AABBBucket(void);
    void clearDirty();
    void mergeAABBs();
    void markDirty();
    bool isDirty();
    bool needsFinalize()const;
    void clearNeedsFinalize();
};
