#pragma once

class StructureStart {

public:
    virtual ~StructureStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid(void)const;

    void getPieces(void)const;
    void StructureStart(int, int);
    void getChunkX(void)const;
    void getChunkZ(void)const;
    void getBoundingBox(void)const;
    void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    void calculateBoundingBox(void);
    void moveToLevel(Random &, int);
    void moveInsideHeights(Random *, int, int);
};
