#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "TemplateStructurePiece.h"
#include <string>
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/StructureManager.h"


namespace WoodlandMansionPieces {

    class WoodlandMansionPiece : TemplateStructurePiece {

    public:
        virtual void getType()const;
        virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
        ~WoodlandMansionPiece();
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
        void _addChest(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
//      WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation, Mirror); //TODO: incomplete function definition
        void _loadTemplate();
        WoodlandMansionPiece(StructureManager &);
//      WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation); //TODO: incomplete function definition
    };
}
