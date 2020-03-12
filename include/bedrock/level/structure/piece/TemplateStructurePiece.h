#pragma once

#include "StructurePiece.h"


class TemplateStructurePiece : StructurePiece {

public:
    virtual void moveBoundingBox(int, int, int);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~TemplateStructurePiece();
    void getTemplatePosition()const;
    void getTemplate()const;
    TemplateStructurePiece(int);
    void _setup(LegacyStructureTemplate &, LegacyStructureSettings const&, BlockPos const&);
    void getSettings()const;
    void _setBoundingBoxFromTemplate();
};
