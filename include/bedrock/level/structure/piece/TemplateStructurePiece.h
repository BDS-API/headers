#pragma once

#include "../../../../unmapped/LegacyStructureTemplate"
#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../../unmapped/LegacyStructureSettings"
#include "../../../util/BlockPos"
#include "../../../block/unmapped/BlockSource"


class TemplateStructurePiece : StructurePiece {

public:
    TemplateStructurePiece::~TemplateStructurePiece()
    virtual void moveBoundingBox(int, int, int);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    TemplateStructurePiece(int);
    void _setup(LegacyStructureTemplate &, LegacyStructureSettings const&, BlockPos const&);
    void _setBoundingBoxFromTemplate();
    void getTemplatePosition()const;
    void getTemplate()const;
    void getSettings()const;
};
