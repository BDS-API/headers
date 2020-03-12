#pragma once

#include <string>
#include "TemplateStructurePiece.h"


namespace EndCityPieces {

    class EndCityPiece : TemplateStructurePiece {

    public:
        ~EndCityPiece();
        virtual void getType()const;
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
        virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
        void _loadAndSetup(BlockPos const&);
        EndCityPiece(StructureManager &);
//      EndCityPiece(StructureManager &, std::string, BlockPos const&, Rotation, bool); //TODO: incomplete function definition
    };
}
