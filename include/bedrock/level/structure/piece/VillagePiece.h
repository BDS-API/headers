#pragma once

#include "PoolElementStructurePiece.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/BoundingBox.h"
#include <vector>


class VillagePiece : PoolElementStructurePiece {

public:
    ~VillagePiece(); // _ZN12VillagePieceD2Ev
//  VillagePiece(StructurePoolElement const&, BlockPos, Rotation, JigsawJunction &, BoundingBox); //TODO: incomplete function definition // _ZN12VillagePieceC2ERK20StructurePoolElement8BlockPos8RotationR14JigsawJunction11BoundingBox
//  void addPieces(BlockPos, std::vector<std::unique_ptr<StructurePiece>> &, Random &, JigsawStructureRegistry &, VanillaBiomeTypes, Dimension &); //TODO: incomplete function definition // _ZN12VillagePiece9addPiecesE8BlockPosRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EER6RandomR23JigsawStructureRegistry17VanillaBiomeTypesR9Dimension
};
