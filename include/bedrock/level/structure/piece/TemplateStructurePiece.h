#pragma once

#include "StructurePiece.h"


class TemplateStructurePiece : StructurePiece {

public:
    ~TemplateStructurePiece(); // _ZN22TemplateStructurePieceD2Ev
    virtual void moveBoundingBox(int, int, int); // _ZN22TemplateStructurePiece15moveBoundingBoxEiii
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN22TemplateStructurePiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    TemplateStructurePiece(int); // _ZN22TemplateStructurePieceC2Ei
    void _setup(LegacyStructureTemplate &, LegacyStructureSettings const&, BlockPos const&); // _ZN22TemplateStructurePiece6_setupER23LegacyStructureTemplateRK23LegacyStructureSettingsRK8BlockPos
    void _setBoundingBoxFromTemplate(); // _ZN22TemplateStructurePiece27_setBoundingBoxFromTemplateEv
    void getTemplatePosition()const; // _ZNK22TemplateStructurePiece19getTemplatePositionEv
    void getTemplate()const; // _ZNK22TemplateStructurePiece11getTemplateEv
    void getSettings()const; // _ZNK22TemplateStructurePiece11getSettingsEv
};
