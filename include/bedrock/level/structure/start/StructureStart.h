#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BoundingBox.h"


class StructureStart {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid()const;
    ~StructureStart();
    void getPieces()const;
    void moveToLevel(Random &, int);
    StructureStart(int, int);
    void getChunkX()const;
    void moveInsideHeights(Random *, int, int);
    void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    void getChunkZ()const;
    void getBoundingBox()const;
    void calculateBoundingBox();
};
