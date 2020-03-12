#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "ScatteredFeaturePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "../../LevelChunk.h"


class SwamplandHut : ScatteredFeaturePiece {

public:
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    ~SwamplandHut();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void getType()const;
    SwamplandHut(int, int);
    void placeCauldron(BlockSource *, Random &, int, int, int, BoundingBox const&);
};
