#pragma once

#include "../../../util/BlockPos.h"
#include "../../../util/Random.h"
#include "./StructurePiece.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../../unmapped/LegacyStructureTemplate.h"
#include "../../../../unmapped/LegacyStructureSettings.h"


class TemplateStructurePiece : StructurePiece {

public:
    virtual ~TemplateStructurePiece();
    virtual void moveBoundingBox(int, int, int);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    TemplateStructurePiece(int);
    void _setup(LegacyStructureTemplate &, LegacyStructureSettings const&, BlockPos const&);
    void _setBoundingBoxFromTemplate();
    void getTemplatePosition()const;
    void getTemplate()const;
    void getSettings()const;
};
