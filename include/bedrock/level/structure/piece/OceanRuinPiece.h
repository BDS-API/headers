#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../util/BlockPos"
#include "../../../../unmapped/StructureManager"
#include "../../../../unmapped/BoundingBox"


using namespace OceanRuinPieces;

class OceanRuinPiece : TemplateStructurePiece {

public:
    virtual OceanRuinPieces::OceanRuinPiece::~OceanRuinPiece()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    OceanRuinPiece(StructureManager &, std::string, BlockPos const&, Rotation, float, bool, OceanTempCategory);
    void _loadTemplate();
    OceanRuinPiece(StructureManager &);
    void _getHeight(BlockPos &, BlockSource *, BlockPos const&);
    void getChestReplacer(OceanTempCategory, std::string const&);
};
