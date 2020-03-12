#pragma once

#include <vector>


namespace PillagerOutpostPieces {

    static long PILLAGER_LOOT;
    static long STRUCTURE_WATCHTOWER_OVERGROWN;
    static long STRUCTURE_WATCHTOWER;
    static long MSC_FEATURES;

    void _getMscFeature(Random &);
//  void _addScatteredPieces(StructureManager &, Random &, Rotation const&, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Dimension &); //TODO: incomplete function definition
//  void addPieces(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, Dimension &); //TODO: incomplete function definition
//  void _addPiece(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, Dimension &); //TODO: incomplete function definition
    void _getPiecePositions(Random &);
};
