#pragma once

class AABBBucket {

public:

    void size(void)const;
    void get(unsigned long);
    void clear(void);
    void add(RopeAABB const&);
    void AABBBucket(AABBBucket&&);
    void AABBBucket(void);
    void clearDirty(void);
    void mergeAABBs(void);
    void markDirty(void);
    bool isDirty(void);
    void needsFinalize(void)const;
    void clearNeedsFinalize(void);
};
