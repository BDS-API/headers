#pragma once

#include "../../../../unmapped/BlockSource"
#include "../../LevelChunk"


class SwamplandHut : ScatteredFeaturePiece {

public:
    virtual SwamplandHut::~SwamplandHut();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;

    SwamplandHut(int, int);
    void placeCauldron(BlockSource *, Random &, int, int, int, BoundingBox const&);
};
