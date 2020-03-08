#pragma once

#include "../../../../unmapped/StructureManager"
#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"
#include "../../../actor/unmapped/ActorDefinitionIdentifier"
#include "../../../block/unmapped/BlockSource"
#include "../../LevelChunk"


using namespace PillagerOutpostPieces;

class PillagerOutpostPiece : TemplateStructurePiece {

public:
    PillagerOutpostPieces::PillagerOutpostPiece::~PillagerOutpostPiece()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    PillagerOutpostPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, Dimension &);
    void _loadTemplate();
    PillagerOutpostPiece(StructureManager &);
    void _addMobsFromPositions(BoundingBox const&, ActorDefinitionIdentifier const&, BlockSource &, std::vector<BlockPos, std::allocator<BlockPos>> const&);
};
