#pragma once



class StructureDataLoadHelper : DataLoadHelper {

public:
    virtual StructureDataLoadHelper::~StructureDataLoadHelper();
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
    virtual void _generateNewID(void);

    StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level &);
    StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level *);
    void _transformPosition(Vec3)const;
    void _transformBlockPos(BlockPos)const;
    void _rotationToDegrees(void);
    void _rotationToRadians(void);
    void _transformDirection(Vec3)const;
};
