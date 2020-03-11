#pragma once

#include "./TemplateStructurePiece.h"
#include <string>
#include "../../../util/BlockPos.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../../unmapped/StructureManager.h"


namespace WoodlandMansionPieces {

class WoodlandMansionPiece : TemplateStructurePiece {

public:
    virtual ~WoodlandMansionPiece();
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

//  WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation); //TODO: incomplete function definition
//  WoodlandMansionPiece(StructureManager &, std::string const&, BlockPos const&, Rotation, Mirror); //TODO: incomplete function definition
    void _loadTemplate();
    WoodlandMansionPiece(StructureManager &);
    void _addChest(std::string const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
};

}