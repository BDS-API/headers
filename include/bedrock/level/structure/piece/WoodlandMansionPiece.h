#pragma once

#include "../../../../unmapped/BlockSource"
#include "../../../../unmapped/StructureManager"


using namespace WoodlandMansionPieces;

class WoodlandMansionPiece : TemplateStructurePiece {

public:
    virtual WoodlandMansionPieces::WoodlandMansionPiece::~WoodlandMansionPiece();
    virtual void getType(void)const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation);
    WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation, Mirror);
    void _loadTemplate(void);
    WoodlandMansionPiece(StructureManager &);
    void _addChest(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
};
