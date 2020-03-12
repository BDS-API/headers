#pragma once

#include <string>
#include "TemplateStructurePiece.h"
#include <vector>


namespace PillagerOutpostPieces {

    class PillagerOutpostPiece : TemplateStructurePiece {

    public:
        virtual void addHardcodedSpawnAreas(LevelChunk &)const;
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
        ~PillagerOutpostPiece();
        virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
        virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
        void _addMobsFromPositions(BoundingBox const&, ActorDefinitionIdentifier const&, BlockSource &, std::vector<BlockPos> const&);
        void _loadTemplate();
//      PillagerOutpostPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, Dimension &); //TODO: incomplete function definition
        PillagerOutpostPiece(StructureManager &);
    };
}
