#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/level/structure/piece/StructurePiece"
#include "../bedrock/util/BlockPos"


class OceanRuinPieces {

public:
    static long RUIN_LOOT;
    static long BIG_RUIN_LOOT;
    static long STRUCTURE_RUIN_2_BRICK;
    static long STRUCTURE_RUIN_3_BRICK;
    static long STRUCTURE_BIG_RUIN1_BRICK;
    static long STRUCTURE_BIG_RUIN8_BRICK;
    static long warmRuins;
    static long ruinsBrick;
    static long ruinsCracked;
    static long ruinsMossy;
    static long bigWarmRuins;
    static long bigRuinsBrick;
    static long bigRuinsCracked;
    static long bigRuinsMossy;
    static long mSettings;


    void _addClusterRuins(StructureManager &, Random &, Rotation const&, BlockPos const&, OceanRuinConfiguration const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &);
    void _allPositions(Random &, int, int, int);
    void _addPiece(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, OceanRuinConfiguration const&, bool, float);
    void init();
    void addPieces(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, OceanRuinConfiguration const&);
};
