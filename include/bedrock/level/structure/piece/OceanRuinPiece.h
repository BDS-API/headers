#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "TemplateStructurePiece.h"
#include <string>
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/StructureManager.h"


namespace OceanRuinPieces {

    class OceanRuinPiece : TemplateStructurePiece {

    public:
        virtual void getType()const;
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
        ~OceanRuinPiece();
        virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
//      OceanRuinPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, OceanTempCategory); //TODO: incomplete function definition
//      void getChestReplacer(OceanTempCategory, std::string const&); //TODO: incomplete function definition
        void _getHeight(BlockPos &, BlockSource *, BlockPos const&);
        void _loadTemplate();
        OceanRuinPiece(StructureManager &);
    };
}
