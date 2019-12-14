#pragma once

class WoodlandMansionPieces::WoodlandMansionPiece : TemplateStructurePiece {

public:
    virtual ~WoodlandMansionPiece();
    virtual void getType(void)const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    void WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation);
    void WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation, Mirror);
    void _loadTemplate(void);
    void WoodlandMansionPiece(StructureManager &);
    void _addChest(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
};
