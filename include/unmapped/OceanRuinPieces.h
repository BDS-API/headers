#pragma once

#include <string>
#include <vector>


namespace OceanRuinPieces {

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

    void init();
//  void _addPiece(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, OceanRuinConfiguration const&, bool, float); //TODO: incomplete function definition
//  void _addClusterRuins(StructureManager &, Random &, Rotation const&, BlockPos const&, OceanRuinConfiguration const&, std::vector<std::unique_ptr<StructurePiece>> &); //TODO: incomplete function definition
    void _allPositions(Random &, int, int, int);
//  void addPieces(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, OceanRuinConfiguration const&); //TODO: incomplete function definition
    std::string _getSmallWarmRuin(Random &);
    std::string _getBigWarmRuin(Random &);
};
