#pragma once

#include "../../../../unmapped/JigsawStructureRegistry.h"
#include "PoolElementStructurePiece.h"
#include "../../../../unmapped/Dimension.h"
#include "StructurePiece.h"
#include "../../../../unmapped/JigsawJunction.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include <vector>
#include <memory>
#include "../../../../unmapped/StructurePoolElement.h"


class VillagePiece : PoolElementStructurePiece {

public:
    ~VillagePiece();
//  VillagePiece(StructurePoolElement const&, BlockPos, Rotation, JigsawJunction &, BoundingBox); //TODO: incomplete function definition
//  void addPieces(BlockPos, std::vector<std::unique_ptr<StructurePiece>> &, Random &, JigsawStructureRegistry &, VanillaBiomeTypes, Dimension &); //TODO: incomplete function definition
};
