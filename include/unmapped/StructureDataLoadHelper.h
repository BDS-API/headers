#pragma once

#include "../bedrock/level/Level.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "DataLoadHelper.h"


class StructureDataLoadHelper : DataLoadHelper {

public:
//  virtual void loadMirror(Mirror); //TODO: incomplete function definition
    virtual void loadOwnerID(ActorUniqueID);
    virtual void loadDirection(Vec3 const&);
    virtual void loadRotationRadiansY(float);
    virtual void getType()const;
    virtual void _generateNewID();
    virtual void loadRotationRadiansX(float);
    ~StructureDataLoadHelper();
//  virtual void loadDirection(Direction::Type); //TODO: incomplete function definition
    virtual void loadActorUniqueID(ActorUniqueID);
    virtual void loadBlockPosition(BlockPos const&);
    virtual void loadPosition(Vec3 const&);
    virtual void loadRotationDegreesX(float);
    virtual void loadFacingID(unsigned char);
//  virtual void loadRotation(Rotation); //TODO: incomplete function definition
    virtual void loadRotationDegreesY(float);
    virtual void shouldResetTime();
    virtual void loadBlockPositionOffset(BlockPos const&);
    void _transformPosition(Vec3)const;
    void _rotationToRadians();
//  StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level &); //TODO: incomplete function definition
    void _transformBlockPos(BlockPos)const;
    void _transformDirection(Vec3)const;
//  StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level *); //TODO: incomplete function definition
    void _rotationToDegrees();
};
