#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "./DataLoadHelper.h"
#include "../bedrock/util/BlockPos.h"


class DefaultDataLoadHelper : DataLoadHelper {

public:
    virtual ~DefaultDataLoadHelper();
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

    DefaultDataLoadHelper();
};
