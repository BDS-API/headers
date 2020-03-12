#pragma once

#include "DataLoadHelper.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class DefaultDataLoadHelper : DataLoadHelper {

public:
    virtual void loadRotationRadiansX(float);
    virtual void loadRotationDegreesY(float);
//  virtual void loadRotation(Rotation); //TODO: incomplete function definition
    virtual void loadBlockPosition(BlockPos const&);
    virtual void loadRotationDegreesX(float);
    virtual void loadRotationRadiansY(float);
//  virtual void loadMirror(Mirror); //TODO: incomplete function definition
    virtual void getType()const;
    virtual void shouldResetTime();
    virtual void loadPosition(Vec3 const&);
    virtual void loadOwnerID(ActorUniqueID);
    virtual void loadBlockPositionOffset(BlockPos const&);
    virtual void loadFacingID(unsigned char);
    ~DefaultDataLoadHelper();
    virtual void loadActorUniqueID(ActorUniqueID);
    virtual void loadDirection(Vec3 const&);
//  virtual void loadDirection(Direction::Type); //TODO: incomplete function definition
    DefaultDataLoadHelper();
};
