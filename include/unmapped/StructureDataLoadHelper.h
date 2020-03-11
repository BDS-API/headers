#pragma once

#include "../bedrock/util/Vec3.h"
#include "./DataLoadHelper.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"


class StructureDataLoadHelper : DataLoadHelper {

public:
    virtual ~StructureDataLoadHelper();
    virtual void loadPosition(Vec3 const&);
    virtual void loadBlockPosition(BlockPos const&);
    virtual void loadBlockPositionOffset(BlockPos const&);
    virtual void loadRotationDegreesX(float);
    virtual void loadRotationDegreesY(float);
    virtual void loadRotationRadiansX(float);
    virtual void loadRotationRadiansY(float);
    virtual void loadFacingID(unsigned char);
    virtual void loadDirection(Vec3 const&);
//  virtual void loadDirection(Direction::Type); //TODO: incomplete function definition
//  virtual void loadRotation(Rotation); //TODO: incomplete function definition
//  virtual void loadMirror(Mirror); //TODO: incomplete function definition
    virtual void loadActorUniqueID(ActorUniqueID);
    virtual void loadOwnerID(ActorUniqueID);
    virtual void getType()const;
    virtual void shouldResetTime();
    virtual void _generateNewID();

//  StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level &); //TODO: incomplete function definition
//  StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level *); //TODO: incomplete function definition
    void _transformPosition(Vec3)const;
    void _transformBlockPos(BlockPos)const;
    void _rotationToDegrees();
    void _rotationToRadians();
    void _transformDirection(Vec3)const;
};
