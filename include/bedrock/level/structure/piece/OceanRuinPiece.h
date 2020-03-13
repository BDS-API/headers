#pragma once

#include <string>
#include "TemplateStructurePiece.h"


namespace OceanRuinPieces {

    class OceanRuinPiece : TemplateStructurePiece {

    public:
        ~OceanRuinPiece(); // _ZN15OceanRuinPieces14OceanRuinPieceD2Ev
        virtual void getType()const; // _ZNK15OceanRuinPieces14OceanRuinPiece7getTypeEv
        virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN15OceanRuinPieces14OceanRuinPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&); // _ZN15OceanRuinPieces14OceanRuinPiece17_handleDataMarkerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPosR11BlockSourceR6RandomRK11BoundingBox
//      OceanRuinPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, OceanTempCategory); //TODO: incomplete function definition // _ZN15OceanRuinPieces14OceanRuinPieceC2ER16StructureManagerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos8Rotationfb17OceanTempCategory
        void _loadTemplate(); // _ZN15OceanRuinPieces14OceanRuinPiece13_loadTemplateEv
        OceanRuinPiece(StructureManager &); // _ZN15OceanRuinPieces14OceanRuinPieceC2ER16StructureManager
        void _getHeight(BlockPos &, BlockSource *, BlockPos const&); // _ZN15OceanRuinPieces14OceanRuinPiece10_getHeightER8BlockPosP11BlockSourceRKS1_
//      void getChestReplacer(OceanTempCategory, std::string const&); //TODO: incomplete function definition // _ZN15OceanRuinPieces14OceanRuinPiece16getChestReplacerE17OceanTempCategoryRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    };
}
