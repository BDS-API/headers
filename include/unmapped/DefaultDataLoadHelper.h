#pragma once



class DefaultDataLoadHelper : DataLoadHelper {

public:
    virtual DefaultDataLoadHelper::~DefaultDataLoadHelper();
    virtual void loadPosition(Vec3 const&);
    virtual void loadBlockPosition(BlockPos const&);
    virtual void loadBlockPositionOffset(BlockPos const&);
    virtual void loadRotationDegreesX(float);
    virtual void loadRotationDegreesY(float);
    virtual void loadRotationRadiansX(float);
    virtual void loadRotationRadiansY(float);
    virtual void loadFacingID(unsigned char);
    virtual void loadDirection(Vec3 const&);
    virtual void loadDirection(Direction::Type);
    virtual void loadRotation(Rotation);
    virtual void loadMirror(Mirror);
    virtual void loadActorUniqueID(ActorUniqueID);
    virtual void loadOwnerID(ActorUniqueID);
    virtual void getType(void)const;
    virtual void shouldResetTime(void);

    DefaultDataLoadHelper(void);
};
