#pragma once

class PillagerOutpostPieces::PillagerOutpostPiece : TemplateStructurePiece {

    virtual void ~PillagerOutpostPiece();
    virtual void ~PillagerOutpostPiece();
    virtual void moveBoundingBox(int, int, int);
    virtual void StructurePiece::asPoolElement(void);
    virtual void StructurePiece::getType(void)const;
    virtual void StructurePiece::addChildren(StructurePiece*, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void StructurePiece::getWorldX(int, int);
    virtual void StructurePiece::getWorldZ(int, int);
    virtual void StructurePiece::placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    virtual void StructurePiece::generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void _handleDataMarker(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
}
