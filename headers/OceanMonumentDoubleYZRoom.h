#pragma once

class OceanMonumentDoubleYZRoom : OceanMonumentPiece {

    virtual void OceanMonumentDoubleYZRoom::~OceanMonumentDoubleYZRoom();
    virtual void OceanMonumentDoubleYZRoom::~OceanMonumentDoubleYZRoom();
    virtual void moveBoundingBox(int, int, int);
    virtual void asPoolElement(void);
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece*, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void getWorldX(int, int);
    virtual void getWorldZ(int, int);
    virtual void placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    virtual void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
}
