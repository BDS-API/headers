#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "TemplateStructurePiece.h"
#include <string>
#include "../../../../unmapped/Dimension.h"
#include "../../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include <vector>
#include "../../../../unmapped/StructureManager.h"
#include "../../LevelChunk.h"


namespace PillagerOutpostPieces {

    class PillagerOutpostPiece : TemplateStructurePiece {

    public:
        ~PillagerOutpostPiece();
        virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
        virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
        virtual void addHardcodedSpawnAreas(LevelChunk &)const;
        void _addMobsFromPositions(BoundingBox const&, ActorDefinitionIdentifier const&, BlockSource &, std::vector<BlockPos> const&);
        PillagerOutpostPiece(StructureManager &);
        void _loadTemplate();
//      PillagerOutpostPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, Dimension &); //TODO: incomplete function definition
    };
}
