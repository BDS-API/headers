#pragma once

class StructureDataLoadHelper : DataLoadHelper {

    virtual void Structure~StructureDataLoadHelper();
    virtual void Structure~StructureDataLoadHelper();
    virtual void StructureloadPosition(Vec3 const&);
    virtual void StructureloadBlockPosition(BlockPos const&);
    virtual void StructureloadBlockPositionOffset(BlockPos const&);
    virtual void StructureloadRotationDegreesX(float);
    virtual void StructureloadRotationDegreesY(float);
    virtual void StructureloadRotationRadiansX(float);
    virtual void StructureloadRotationRadiansY(float);
    virtual void StructureloadFacingID(unsigned char);
    virtual void StructureloadDirection(Vec3 const&);
    virtual void StructureloadDirection(Direction::Type);
    virtual void StructureloadRotation(Rotation);
    virtual void StructureloadMirror(Mirror);
    virtual void StructureloadActorUniqueID(ActorUniqueID);
    virtual void StructureloadOwnerID(ActorUniqueID);
    virtual void StructuregetType(void)const;
    virtual void StructureshouldResetTime(void);
    virtual void Structure_generateNewID(void);
}
