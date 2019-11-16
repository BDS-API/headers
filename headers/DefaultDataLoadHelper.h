#pragma once

class DefaultDataLoadHelper : DataLoadHelper {

    virtual void Default~DefaultDataLoadHelper();
    virtual void Default~DefaultDataLoadHelper();
    virtual void DefaultloadPosition(Vec3 const&);
    virtual void DefaultloadBlockPosition(BlockPos const&);
    virtual void DefaultloadBlockPositionOffset(BlockPos const&);
    virtual void DefaultloadRotationDegreesX(float);
    virtual void DefaultloadRotationDegreesY(float);
    virtual void DefaultloadRotationRadiansX(float);
    virtual void DefaultloadRotationRadiansY(float);
    virtual void DefaultloadFacingID(unsigned char);
    virtual void DefaultloadDirection(Vec3 const&);
    virtual void DefaultloadDirection(Direction::Type);
    virtual void DefaultloadRotation(Rotation);
    virtual void DefaultloadMirror(Mirror);
    virtual void DefaultloadActorUniqueID(ActorUniqueID);
    virtual void DefaultloadOwnerID(ActorUniqueID);
    virtual void DefaultgetType(void)const;
    virtual void DefaultshouldResetTime(void);
}
