#pragma once

class OceanRuinPieces {

public:
    static long OceanRuinPieces::RUIN_LOOT;
    static long OceanRuinPieces::BIG_RUIN_LOOT;
    static long OceanRuinPieces::STRUCTURE_RUIN_2_BRICK;
    static long OceanRuinPieces::STRUCTURE_RUIN_3_BRICK;
    static long OceanRuinPieces::STRUCTURE_BIG_RUIN1_BRICK;
    static long OceanRuinPieces::STRUCTURE_BIG_RUIN8_BRICK;
    static long OceanRuinPieces::warmRuins;
    static long OceanRuinPieces::ruinsBrick;
    static long OceanRuinPieces::ruinsCracked;
    static long OceanRuinPieces::ruinsMossy;
    static long OceanRuinPieces::bigWarmRuins;
    static long OceanRuinPieces::bigRuinsBrick;
    static long OceanRuinPieces::bigRuinsCracked;
    static long OceanRuinPieces::bigRuinsMossy;
    static long OceanRuinPieces::mSettings;


    void _addClusterRuins(StructureManager &, Random &, Rotation const&, BlockPos const&, OceanRuinConfiguration const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &);
    void _allPositions(Random &, int, int, int);
    void _addPiece(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, OceanRuinConfiguration const&, bool, float);
    void init(void);
    void addPieces(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, OceanRuinConfiguration const&);
};
