#pragma once

#include "../bedrock/level/structure/piece/StructurePiece.h"
#include "../bedrock/util/BlockPos.h"
#include "Dimension.h"
#include <vector>
#include <memory>
#include "../bedrock/util/Random.h"
#include "StructureManager.h"


namespace PillagerOutpostPieces {

    static long PILLAGER_LOOT;
    static long STRUCTURE_WATCHTOWER_OVERGROWN;
    static long STRUCTURE_WATCHTOWER;
    static long MSC_FEATURES;

    void _getMscFeature(Random &);
//  void addPieces(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, Dimension &); //TODO: incomplete function definition
//  void _addPiece(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, Dimension &); //TODO: incomplete function definition
//  void _addScatteredPieces(StructureManager &, Random &, Rotation const&, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Dimension &); //TODO: incomplete function definition
    void _getPiecePositions(Random &);
};
