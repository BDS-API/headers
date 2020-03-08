#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../LevelChunk"
#include "../../../../unmapped/BoundingBox"


class SwamplandHut : ScatteredFeaturePiece {

public:
    virtual SwamplandHut::~SwamplandHut()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;

    SwamplandHut(int, int);
    void placeCauldron(BlockSource *, Random &, int, int, int, BoundingBox const&);
};
