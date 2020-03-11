#pragma once

#include "./TemplateStructurePiece.h"
#include <string>
#include "../../../util/BlockPos.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../../unmapped/StructureManager.h"


namespace EndCityPieces {

class EndCityPiece : TemplateStructurePiece {

public:
    virtual ~EndCityPiece();
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    EndCityPiece(StructureManager &);
//  EndCityPiece(StructureManager &, std::string, BlockPos const&, Rotation, bool); //TODO: incomplete function definition
    void _loadAndSetup(BlockPos const&);
};

}