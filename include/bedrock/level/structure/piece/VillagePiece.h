#pragma once

#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/BlockPos.h"
#include "PoolElementStructurePiece.h"
#include <vector>


class VillagePiece : public PoolElementStructurePiece {

public:
    virtual ~VillagePiece(); // _ZN12VillagePieceD2Ev
    virtual void __fake_function0(); // fake
//    VillagePiece(StructurePoolElement const&, BlockPos, long, JigsawJunction &, BoundingBox); //TODO: incomplete function definition // _ZN12VillagePieceC2ERK20StructurePoolElement8BlockPos8RotationR14JigsawJunction11BoundingBox
//    void addPieces(BlockPos, std::vector<std::unique_ptr<StructurePiece>> &, Random &, JigsawStructureRegistry &, long, Dimension &); //TODO: incomplete function definition // _ZN12VillagePiece9addPiecesE8BlockPosRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EER6RandomR23JigsawStructureRegistry17VanillaBiomeTypesR9Dimension
};
