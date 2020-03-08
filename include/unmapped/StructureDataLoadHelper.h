#pragma once

#include "../bedrock/level/Level"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorUniqueID"


class StructureDataLoadHelper : DataLoadHelper {

public:
    virtual StructureDataLoadHelper::~StructureDataLoadHelper()
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
    virtual void getType()const;
    virtual void shouldResetTime();
    virtual void _generateNewID();

    StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level &);
    StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level *);
    void _transformPosition(Vec3)const;
    void _transformBlockPos(BlockPos)const;
    void _rotationToDegrees();
    void _rotationToRadians();
    void _transformDirection(Vec3)const;
};
