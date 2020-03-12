#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/LegacyStructureSettings.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/LegacyStructureTemplate.h"


class TemplateStructurePiece : StructurePiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void moveBoundingBox(int, int, int);
    ~TemplateStructurePiece();
    void getTemplate()const;
    void getSettings()const;
    void getTemplatePosition()const;
    void _setBoundingBoxFromTemplate();
    TemplateStructurePiece(int);
    void _setup(LegacyStructureTemplate &, LegacyStructureSettings const&, BlockPos const&);
};
