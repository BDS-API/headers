#pragma once

#include <string>
#include "TemplateStructurePiece.h"


namespace WoodlandMansionPieces {

    class WoodlandMansionPiece : TemplateStructurePiece {

    public:
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
        virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
        virtual void getType()const;
        ~WoodlandMansionPiece();
//      WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation); //TODO: incomplete function definition
        WoodlandMansionPiece(StructureManager &);
//      WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation, Mirror); //TODO: incomplete function definition
        void _loadTemplate();
        void _addChest(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
    };
}
