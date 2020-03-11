#pragma once

#include "./AABBBucket.h"
#include "./RopeAABB.h"


class AABBBucket {

public:

    ~AABBBucket();
    void size()const;
    void get(unsigned long);
    void clear();
    void add(RopeAABB const&);
    AABBBucket(AABBBucket &&);
    AABBBucket();
    void clearDirty();
    void mergeAABBs();
    void markDirty();
    bool isDirty();
    bool needsFinalize()const;
    void clearNeedsFinalize();
};
