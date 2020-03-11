#pragma once

#include "../../LevelChunk.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "./ScatteredFeaturePiece.h"
#include "../../../../unmapped/BoundingBox.h"


class SwamplandHut : ScatteredFeaturePiece {

public:
    virtual ~SwamplandHut();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;

    SwamplandHut(int, int);
    void placeCauldron(BlockSource *, Random &, int, int, int, BoundingBox const&);
};
