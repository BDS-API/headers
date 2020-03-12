#pragma once

#include "../../../../unmapped/BoundingBox.h"
#include <vector>
#include "../../../util/BlockPos.h"
#include "PoolElementStructurePiece.h"


class VillagePiece : PoolElementStructurePiece {

public:
    ~VillagePiece();
//  void addPieces(BlockPos, std::vector<std::unique_ptr<StructurePiece>> &, Random &, JigsawStructureRegistry &, VanillaBiomeTypes, Dimension &); //TODO: incomplete function definition
//  VillagePiece(StructurePoolElement const&, BlockPos, Rotation, JigsawJunction &, BoundingBox); //TODO: incomplete function definition
};
