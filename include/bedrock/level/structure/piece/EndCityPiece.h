#pragma once

#include "../../../../unmapped/BlockPos"
#include "../../../../unmapped/StructureManager"
#include "../../../../unmapped/BlockSource"


using namespace EndCityPieces;

class EndCityPiece : TemplateStructurePiece {

public:
    virtual EndCityPieces::EndCityPiece::~EndCityPiece();
    virtual void getType(void)const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    EndCityPiece(StructureManager &);
    EndCityPiece(StructureManager &, std::string, BlockPos const&, Rotation, bool);
    void _loadAndSetup(BlockPos const&);
};
