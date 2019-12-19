#pragma once

class VillagePiece : PoolElementStructurePiece {

public:
    virtual VillagePiece::~VillagePiece();

    VillagePiece(StructurePoolElement const&, BlockPos, Rotation, JigsawJunction &, BoundingBox);
    void addPieces(BlockPos, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, JigsawStructureRegistry &, VanillaBiomeTypes, Dimension &);
};
