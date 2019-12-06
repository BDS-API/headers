#pragma once

class PillagerOutpostPieces {

public:
    static long PillagerOutpostPieces::PILLAGER_LOOT;
    static long PillagerOutpostPieces::STRUCTURE_WATCHTOWER_OVERGROWN;
    static long PillagerOutpostPieces::STRUCTURE_WATCHTOWER;
    static long PillagerOutpostPieces::MSC_FEATURES;


    void _getMscFeature(Random &);
    void _addScatteredPieces(StructureManager &, Random &, Rotation const&, BlockPos const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Dimension &);
    void _getPiecePositions(Random &);
    void _addPiece(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, Dimension &);
    void addPieces(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, Dimension &);
};
