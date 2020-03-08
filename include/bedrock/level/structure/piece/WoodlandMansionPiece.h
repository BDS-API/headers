#pragma once

#include "../../../../unmapped/StructureManager"
#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../util/BlockPos"
#include "../../../block/unmapped/BlockSource"


using namespace WoodlandMansionPieces;

class WoodlandMansionPiece : TemplateStructurePiece {

public:
    WoodlandMansionPieces::WoodlandMansionPiece::~WoodlandMansionPiece()
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation);
    WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation, Mirror);
    void _loadTemplate();
    WoodlandMansionPiece(StructureManager &);
    void _addChest(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
};
