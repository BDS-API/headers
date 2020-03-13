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

    std::string _getSmallWarmRuin(Random &); // _ZN15OceanRuinPieces17_getSmallWarmRuinB5cxx11ER6Random
    std::string _getBigWarmRuin(Random &); // _ZN15OceanRuinPieces15_getBigWarmRuinB5cxx11ER6Random
//  void _addClusterRuins(StructureManager &, Random &, Rotation const&, BlockPos const&, OceanRuinConfiguration const&, std::vector<std::unique_ptr<StructurePiece>> &); //TODO: incomplete function definition // _ZN15OceanRuinPieces16_addClusterRuinsER16StructureManagerR6RandomRK8RotationRK8BlockPosRK22OceanRuinConfigurationRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteISF_EESaISI_EE
    void _allPositions(Random &, int, int, int); // _ZN15OceanRuinPieces13_allPositionsER6Randomiii
//  void _addPiece(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, OceanRuinConfiguration const&, bool, float); //TODO: incomplete function definition // _ZN15OceanRuinPieces9_addPieceER16StructureManagerRK8BlockPosRK8RotationRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteISA_EESaISD_EER6RandomRK22OceanRuinConfigurationbf
    void init(); // _ZN15OceanRuinPieces4initEv
//  void addPieces(StructureManager &, BlockPos const&, Rotation const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, OceanRuinConfiguration const&); //TODO: incomplete function definition // _ZN15OceanRuinPieces9addPiecesER16StructureManagerRK8BlockPosRK8RotationRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteISA_EESaISD_EER6RandomRK22OceanRuinConfiguration
};
