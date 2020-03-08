#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/LegacyStructureTemplate"
#include "../../../../unmapped/LegacyStructureSettings"
#include "../../../util/BlockPos"
#include "../../../../unmapped/BoundingBox"


class TemplateStructurePiece : StructurePiece {

public:
    virtual TemplateStructurePiece::~TemplateStructurePiece()
    virtual void moveBoundingBox(int, int, int);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    TemplateStructurePiece(int);
    void _setup(LegacyStructureTemplate &, LegacyStructureSettings const&, BlockPos const&);
    void _setBoundingBoxFromTemplate();
    void getTemplatePosition()const;
    void getTemplate()const;
    void getSettings()const;
};
