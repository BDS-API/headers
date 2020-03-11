#pragma once

#include "./TemplateStructurePiece.h"
#include <string>
#include "../../../util/BlockPos.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../../unmapped/StructureManager.h"


namespace OceanRuinPieces {

class OceanRuinPiece : TemplateStructurePiece {

public:
    virtual ~OceanRuinPiece();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

//  OceanRuinPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, OceanTempCategory); //TODO: incomplete function definition
    void _loadTemplate();
    OceanRuinPiece(StructureManager &);
    void _getHeight(BlockPos &, BlockSource *, BlockPos const&);
//  void getChestReplacer(OceanTempCategory, std::string const&); //TODO: incomplete function definition
};

}