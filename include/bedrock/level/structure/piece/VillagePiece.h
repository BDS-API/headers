#pragma once

#include "../../../../unmapped/StructurePoolElement"
#include "../../../../unmapped/BoundingBox"
#include "../../../../unmapped/JigsawJunction"
#include "../../../util/Random"
#include "../../../../unmapped/JigsawStructureRegistry"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"


class VillagePiece : PoolElementStructurePiece {

public:
    VillagePiece::~VillagePiece()

    VillagePiece(StructurePoolElement const&, BlockPos, Rotation, JigsawJunction &, BoundingBox);
    void addPieces(BlockPos, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, JigsawStructureRegistry &, VanillaBiomeTypes, Dimension &);
};
