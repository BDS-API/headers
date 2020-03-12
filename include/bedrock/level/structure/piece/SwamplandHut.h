#pragma once

#include "ScatteredFeaturePiece.h"


class SwamplandHut : ScatteredFeaturePiece {

public:
    virtual void getType()const;
    ~SwamplandHut();
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    void placeCauldron(BlockSource *, Random &, int, int, int, BoundingBox const&);
    SwamplandHut(int, int);
};
