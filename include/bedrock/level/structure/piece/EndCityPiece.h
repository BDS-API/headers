#pragma once

#include <string>
#include "TemplateStructurePiece.h"


namespace EndCityPieces {

    class EndCityPiece : TemplateStructurePiece {

    public:
        ~EndCityPiece(); // _ZN13EndCityPieces12EndCityPieceD2Ev
        virtual void getType()const; // _ZNK13EndCityPieces12EndCityPiece7getTypeEv
        virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN13EndCityPieces12EndCityPiece17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&); // _ZN13EndCityPieces12EndCityPiece17_handleDataMarkerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPosR11BlockSourceR6RandomRK11BoundingBox
        EndCityPiece(StructureManager &); // _ZN13EndCityPieces12EndCityPieceC2ER16StructureManager
//      EndCityPiece(StructureManager &, std::string, BlockPos const&, Rotation, bool); //TODO: incomplete function definition // _ZN13EndCityPieces12EndCityPieceC2ER16StructureManagerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos8Rotationb
        void _loadAndSetup(BlockPos const&); // _ZN13EndCityPieces12EndCityPiece13_loadAndSetupERK8BlockPos
    };
}
