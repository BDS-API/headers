#pragma once

#include "../../../util/BlockPos.h"
#include "./PoolElementStructurePiece.h"
#include "../../../../unmapped/StructurePoolElement.h"
#include "../../../../unmapped/Dimension.h"
#include <memory>
#include "../../../util/Random.h"
#include "../../../../unmapped/JigsawJunction.h"
#include "./StructurePiece.h"
#include <vector>
#include "../../../../unmapped/JigsawStructureRegistry.h"
#include "../../../../unmapped/BoundingBox.h"


class VillagePiece : PoolElementStructurePiece {

public:
    virtual ~VillagePiece();

//  VillagePiece(StructurePoolElement const&, BlockPos, Rotation, JigsawJunction &, BoundingBox); //TODO: incomplete function definition
//  void addPieces(BlockPos, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, JigsawStructureRegistry &, VanillaBiomeTypes, Dimension &); //TODO: incomplete function definition
};
