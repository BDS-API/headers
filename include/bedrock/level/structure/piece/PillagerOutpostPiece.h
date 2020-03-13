#pragma once

#include <string>
#include <vector>
#include "TemplateStructurePiece.h"


namespace PillagerOutpostPieces {

    class PillagerOutpostPiece : TemplateStructurePiece {

    public:
        ~PillagerOutpostPiece(); // _ZN21PillagerOutpostPieces20PillagerOutpostPieceD2Ev
        virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN21PillagerOutpostPieces20PillagerOutpostPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
        virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN21PillagerOutpostPieces20PillagerOutpostPiece17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
        virtual void addHardcodedSpawnAreas(LevelChunk &)const; // _ZNK21PillagerOutpostPieces20PillagerOutpostPiece22addHardcodedSpawnAreasER10LevelChunk
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&); // _ZN21PillagerOutpostPieces20PillagerOutpostPiece17_handleDataMarkerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPosR11BlockSourceR6RandomRK11BoundingBox
//      PillagerOutpostPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, Dimension &); //TODO: incomplete function definition // _ZN21PillagerOutpostPieces20PillagerOutpostPieceC2ER16StructureManagerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos8RotationfbR9Dimension
        void _loadTemplate(); // _ZN21PillagerOutpostPieces20PillagerOutpostPiece13_loadTemplateEv
        PillagerOutpostPiece(StructureManager &); // _ZN21PillagerOutpostPieces20PillagerOutpostPieceC2ER16StructureManager
        void _addMobsFromPositions(BoundingBox const&, ActorDefinitionIdentifier const&, BlockSource &, std::vector<BlockPos> const&); // _ZN21PillagerOutpostPieces20PillagerOutpostPiece21_addMobsFromPositionsERK11BoundingBoxRK25ActorDefinitionIdentifierR11BlockSourceRKSt6vectorI8BlockPosSaISA_EE
    };
}
