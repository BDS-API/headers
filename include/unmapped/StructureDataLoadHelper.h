#pragma once

#include "../bedrock/util/BlockPos.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/Vec3.h"


class StructureDataLoadHelper : DataLoadHelper {

public:
    virtual void loadBlockPosition(BlockPos const&);
    virtual void loadBlockPositionOffset(BlockPos const&);
    virtual void loadActorUniqueID(ActorUniqueID);
    virtual void loadPosition(Vec3 const&);
    virtual void loadRotationDegreesX(float);
    virtual void loadDirection(Vec3 const&);
//  virtual void loadRotation(Rotation); //TODO: incomplete function definition
    virtual void shouldResetTime();
//  virtual void loadDirection(Direction::Type); //TODO: incomplete function definition
    virtual void _generateNewID();
    virtual void loadRotationDegreesY(float);
    virtual void loadRotationRadiansX(float);
    virtual void loadOwnerID(ActorUniqueID);
    ~StructureDataLoadHelper();
//  virtual void loadMirror(Mirror); //TODO: incomplete function definition
    virtual void getType()const;
    virtual void loadRotationRadiansY(float);
    virtual void loadFacingID(unsigned char);
    void _transformDirection(Vec3)const;
//  StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level &); //TODO: incomplete function definition
    void _rotationToRadians();
//  StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level *); //TODO: incomplete function definition
    void _transformPosition(Vec3)const;
    void _transformBlockPos(BlockPos)const;
    void _rotationToDegrees();
};
