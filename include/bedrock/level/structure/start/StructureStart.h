#pragma once



class StructureStart {

public:
    ~StructureStart(); // _ZN14StructureStartD2Ev
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN14StructureStart11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual bool isValid()const; // _ZNK14StructureStart7isValidEv
    void getPieces()const; // _ZNK14StructureStart9getPiecesEv
    StructureStart(int, int); // _ZN14StructureStartC2Eii
    void getChunkX()const; // _ZNK14StructureStart9getChunkXEv
    void getChunkZ()const; // _ZNK14StructureStart9getChunkZEv
    void getBoundingBox()const; // _ZNK14StructureStart14getBoundingBoxEv
    void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN14StructureStart17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    void calculateBoundingBox(); // _ZN14StructureStart20calculateBoundingBoxEv
    void moveToLevel(Random &, int); // _ZN14StructureStart11moveToLevelER6Randomi
    void moveInsideHeights(Random *, int, int); // _ZN14StructureStart17moveInsideHeightsEP6Randomii
};
