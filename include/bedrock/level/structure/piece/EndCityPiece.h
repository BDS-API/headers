#pragma once

#include "../../../../unmapped/StructureManager"
#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../util/BlockPos"
#include "../../../block/unmapped/BlockSource"


using namespace EndCityPieces;

class EndCityPiece : TemplateStructurePiece {

public:
    EndCityPieces::EndCityPiece::~EndCityPiece()
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    EndCityPiece(StructureManager &);
    EndCityPiece(StructureManager &, std::string, BlockPos const&, Rotation, bool);
    void _loadAndSetup(BlockPos const&);
};
