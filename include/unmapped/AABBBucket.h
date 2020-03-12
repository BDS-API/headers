#pragma once

#include "RopeAABB.h"


class AABBBucket {

public:
    void markDirty();
    bool needsFinalize()const;
    void get(unsigned long);
    ~AABBBucket();
    void clear();
    void mergeAABBs();
    void add(RopeAABB const&);
    void clearNeedsFinalize();
    AABBBucket(AABBBucket &&);
    void size()const;
    void clearDirty();
    AABBBucket();
    bool isDirty();
};
