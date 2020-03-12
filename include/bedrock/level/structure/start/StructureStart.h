#pragma once



class StructureStart {

public:
    ~StructureStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid()const;
    void getBoundingBox()const;
    void getChunkX()const;
    void getChunkZ()const;
    void moveToLevel(Random &, int);
    void calculateBoundingBox();
    void moveInsideHeights(Random *, int, int);
    StructureStart(int, int);
    void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    void getPieces()const;
};
