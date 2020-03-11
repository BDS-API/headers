#pragma once

#include "../../../../unmapped/BoundingBox.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../util/Random.h"


class StructureStart {

public:
    virtual ~StructureStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid()const;

    void getPieces()const;
    StructureStart(int, int);
    void getChunkX()const;
    void getChunkZ()const;
    void getBoundingBox()const;
    void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    void calculateBoundingBox();
    void moveToLevel(Random &, int);
    void moveInsideHeights(Random *, int, int);
};
