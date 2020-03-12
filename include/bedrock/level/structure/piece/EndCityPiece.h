#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "TemplateStructurePiece.h"
#include <string>
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/StructureManager.h"


namespace EndCityPieces {

    class EndCityPiece : TemplateStructurePiece {

    public:
        virtual void getType()const;
        ~EndCityPiece();
        virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
        EndCityPiece(StructureManager &);
        void _loadAndSetup(BlockPos const&);
//      EndCityPiece(StructureManager &, std::string, BlockPos const&, Rotation, bool); //TODO: incomplete function definition
    };
}
