#pragma once

#include <string>
#include "TemplateStructurePiece.h"


namespace WoodlandMansionPieces {

    class WoodlandMansionPiece : TemplateStructurePiece {

    public:
        ~WoodlandMansionPiece(); // _ZN21WoodlandMansionPieces20WoodlandMansionPieceD2Ev
        virtual void getType()const; // _ZNK21WoodlandMansionPieces20WoodlandMansionPiece7getTypeEv
        virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN21WoodlandMansionPieces20WoodlandMansionPiece17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&); // _ZN21WoodlandMansionPieces20WoodlandMansionPiece17_handleDataMarkerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPosR11BlockSourceR6RandomRK11BoundingBox
//      WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation); //TODO: incomplete function definition // _ZN21WoodlandMansionPieces20WoodlandMansionPieceC2ER16StructureManagerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos8Rotation
//      WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation, Mirror); //TODO: incomplete function definition // _ZN21WoodlandMansionPieces20WoodlandMansionPieceC2ER16StructureManagerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos8Rotation6Mirror
        void _loadTemplate(); // _ZN21WoodlandMansionPieces20WoodlandMansionPiece13_loadTemplateEv
        WoodlandMansionPiece(StructureManager &); // _ZN21WoodlandMansionPieces20WoodlandMansionPieceC2ER16StructureManager
        void _addChest(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&); // _ZN21WoodlandMansionPieces20WoodlandMansionPiece9_addChestERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPosR11BlockSourceR6RandomRK11BoundingBox
    };
}
