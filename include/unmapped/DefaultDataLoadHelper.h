#pragma once

#include "DataLoadHelper.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"


class DefaultDataLoadHelper : DataLoadHelper {

public:
    virtual void loadPosition(Vec3 const&);
    virtual void loadOwnerID(ActorUniqueID);
    virtual void getType()const;
    virtual void loadRotationRadiansY(float);
    virtual void loadBlockPosition(BlockPos const&);
    virtual void shouldResetTime();
    virtual void loadRotationDegreesX(float);
//  virtual void loadDirection(Direction::Type); //TODO: incomplete function definition
//  virtual void loadRotation(Rotation); //TODO: incomplete function definition
    virtual void loadActorUniqueID(ActorUniqueID);
    virtual void loadRotationDegreesY(float);
    ~DefaultDataLoadHelper();
    virtual void loadFacingID(unsigned char);
    virtual void loadRotationRadiansX(float);
    virtual void loadDirection(Vec3 const&);
//  virtual void loadMirror(Mirror); //TODO: incomplete function definition
    virtual void loadBlockPositionOffset(BlockPos const&);
    DefaultDataLoadHelper();
};
