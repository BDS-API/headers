#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../util/BlockPos"
#include "../../../../unmapped/StructureManager"
#include "../../../../unmapped/BoundingBox"


using namespace EndCityPieces;

class EndCityPiece : TemplateStructurePiece {

public:
    virtual EndCityPieces::EndCityPiece::~EndCityPiece()
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    EndCityPiece(StructureManager &);
    EndCityPiece(StructureManager &, std::string, BlockPos const&, Rotation, bool);
    void _loadAndSetup(BlockPos const&);
};
