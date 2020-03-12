#pragma once

#include "TemplateStructurePiece.h"
#include <string>


namespace OceanRuinPieces {

    class OceanRuinPiece : TemplateStructurePiece {

    public:
        virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
        ~OceanRuinPiece();
        virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
        virtual void getType()const;
        void _getHeight(BlockPos &, BlockSource *, BlockPos const&);
//      void getChestReplacer(OceanTempCategory, std::string const&); //TODO: incomplete function definition
        OceanRuinPiece(StructureManager &);
//      OceanRuinPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, OceanTempCategory); //TODO: incomplete function definition
        void _loadTemplate();
    };
}
