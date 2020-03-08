#pragma once

#include "../../../../unmapped/Random"
#include "../../../../unmapped/BlockSource"


class StructureStart {

public:
    virtual StructureStart::~StructureStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid(void)const;

    void getPieces(void)const;
    StructureStart(int, int);
    void getChunkX(void)const;
    void getChunkZ(void)const;
    void getBoundingBox(void)const;
    void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    void calculateBoundingBox(void);
    void moveToLevel(Random &, int);
    void moveInsideHeights(Random *, int, int);
};
