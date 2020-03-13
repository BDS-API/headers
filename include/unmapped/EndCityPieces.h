#pragma once

#include <string>
#include <memory>
#include <vector>


namespace EndCityPieces {

    static long mOverwriteSettings;
    static long mInsertSettings;

    void init(); // _ZN13EndCityPieces4initEv
//  void startHouseTower(StructureManager &, BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece>> &, Random &); //TODO: incomplete function definition // _ZN13EndCityPieces15startHouseTowerER16StructureManagerRK8BlockPos8RotationRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS8_EESaISB_EER6Random
    void _addHelper(std::vector<std::unique_ptr<StructurePiece>> &, std::unique_ptr<EndCityPieces::EndCityPiece>); // _ZN13EndCityPieces10_addHelperERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EES1_INS_12EndCityPieceES3_IS9_EE
//  void _createPiece(StructureManager &, EndCityPieces::EndCityPiece *, BlockPos const&, std::string const&, Rotation, bool); //TODO: incomplete function definition // _ZN13EndCityPieces12_createPieceER16StructureManagerPNS_12EndCityPieceERK8BlockPosRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE8Rotationb
//  void _recursiveChildren(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, EndCityPieces::SectionType, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &); //TODO: incomplete function definition // _ZN13EndCityPieces18_recursiveChildrenER16StructureManagerRKSt6vectorISt10unique_ptrINS_16SectionGeneratorESt14default_deleteIS4_EESaIS7_EENS_11SectionTypeEiPNS_12EndCityPieceERK8BlockPosRS2_IS3_I14StructurePieceS5_ISI_EESaISK_EER6Random
};
