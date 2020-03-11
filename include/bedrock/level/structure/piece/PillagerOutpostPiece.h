#pragma once

#include "./TemplateStructurePiece.h"
#include <string>
#include "../../LevelChunk.h"
#include "../../../util/BlockPos.h"
#include "../../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../../../../unmapped/Dimension.h"
#include <memory>
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include <vector>
#include "../../../../unmapped/BoundingBox.h"
#include "../../../../unmapped/StructureManager.h"


namespace PillagerOutpostPieces {

class PillagerOutpostPiece : TemplateStructurePiece {

public:
    virtual ~PillagerOutpostPiece();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

//  PillagerOutpostPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, Dimension &); //TODO: incomplete function definition
    void _loadTemplate();
    PillagerOutpostPiece(StructureManager &);
    void _addMobsFromPositions(BoundingBox const&, ActorDefinitionIdentifier const&, BlockSource &, std::vector<BlockPos, std::allocator<BlockPos>> const&);
};

}