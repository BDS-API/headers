#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/StructurePoolElement"
#include "../../../../unmapped/JigsawJunction"
#include "../../../util/BlockPos"
#include "../../../../unmapped/BoundingBox"
#include "../../../../unmapped/JigsawStructureRegistry"


class VillagePiece : PoolElementStructurePiece {

public:
    virtual VillagePiece::~VillagePiece()

    VillagePiece(StructurePoolElement const&, BlockPos, Rotation, JigsawJunction &, BoundingBox);
    void addPieces(BlockPos, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, JigsawStructureRegistry &, VanillaBiomeTypes, Dimension &);
};
