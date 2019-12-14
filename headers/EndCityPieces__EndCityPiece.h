#pragma once

class EndCityPieces::EndCityPiece : TemplateStructurePiece {

public:
    virtual ~EndCityPiece();
    virtual void getType(void)const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    void EndCityPiece(StructureManager &);
    void EndCityPiece(StructureManager &, std::string, BlockPos const&, Rotation, bool);
    void _loadAndSetup(BlockPos const&);
};
