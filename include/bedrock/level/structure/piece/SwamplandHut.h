#pragma once

#include "ScatteredFeaturePiece.h"


class SwamplandHut : public ScatteredFeaturePiece {

public:
    virtual ~SwamplandHut(); // _ZN12SwamplandHutD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK12SwamplandHut7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN12SwamplandHut11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN12SwamplandHut17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    virtual void addHardcodedSpawnAreas(LevelChunk &)const; // _ZNK12SwamplandHut22addHardcodedSpawnAreasER10LevelChunk
    SwamplandHut(int, int); // _ZN12SwamplandHutC2Eii
    void placeCauldron(BlockSource *, Random &, int, int, int, BoundingBox const&); // _ZN12SwamplandHut13placeCauldronEP11BlockSourceR6RandomiiiRK11BoundingBox
};
