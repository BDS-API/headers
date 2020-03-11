#pragma once

#include "./StructureManager.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "./Dimension.h"
#include "../bedrock/level/structure/piece/StructurePiece.h"
#include <vector>
#include "../bedrock/util/BlockPos.h"


class PillagerOutpostPieces {

public:
    static long PILLAGER_LOOT;
    static long STRUCTURE_WATCHTOWER_OVERGROWN;
    static long STRUCTURE_WATCHTOWER;
    static long MSC_FEATURES;


    void _getMscFeature(Random &);
//  void _addScatteredPieces(StructureManager &, Random &, Rotation const&, BlockPos const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Dimension &); //TODO: incomplete function definition
    void _getPiecePositions(Random &);
//  void _addPiece(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, Dimension &); //TODO: incomplete function definition
//  void addPieces(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, Dimension &); //TODO: incomplete function definition
};
