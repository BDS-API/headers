#pragma once

#include <vector>


namespace PillagerOutpostPieces {

    static long PILLAGER_LOOT;
    static long STRUCTURE_WATCHTOWER_OVERGROWN;
    static long STRUCTURE_WATCHTOWER;
    static long MSC_FEATURES;

    void _getMscFeature(Random &); // _ZN21PillagerOutpostPieces14_getMscFeatureER6Random
//  void _addScatteredPieces(StructureManager &, Random &, Rotation const&, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Dimension &); //TODO: incomplete function definition // _ZN21PillagerOutpostPieces19_addScatteredPiecesER16StructureManagerR6RandomRK8RotationRK8BlockPosRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteISC_EESaISF_EER9Dimension
    void _getPiecePositions(Random &); // _ZN21PillagerOutpostPieces18_getPiecePositionsER6Random
//  void _addPiece(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, Dimension &); //TODO: incomplete function definition // _ZN21PillagerOutpostPieces9_addPieceER16StructureManagerRK8BlockPosRK8RotationRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteISA_EESaISD_EER6RandomR9Dimension
//  void addPieces(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, Dimension &); //TODO: incomplete function definition // _ZN21PillagerOutpostPieces9addPiecesER16StructureManagerRK8BlockPosRK8RotationRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteISA_EESaISD_EER6RandomR9Dimension
};
