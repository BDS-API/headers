#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "DataLoadHelper.h"


class DefaultDataLoadHelper : public DataLoadHelper {

public:
    virtual ~DefaultDataLoadHelper(); // _ZN21DefaultDataLoadHelperD2Ev
    virtual void __fake_function0(); // fake
    virtual void loadPosition(Vec3 const&); // _ZN21DefaultDataLoadHelper12loadPositionERK4Vec3
    virtual void loadBlockPosition(BlockPos const&); // _ZN21DefaultDataLoadHelper17loadBlockPositionERK8BlockPos
    virtual void loadBlockPositionOffset(BlockPos const&); // _ZN21DefaultDataLoadHelper23loadBlockPositionOffsetERK8BlockPos
    virtual void loadRotationDegreesX(float); // _ZN21DefaultDataLoadHelper20loadRotationDegreesXEf
    virtual void loadRotationDegreesY(float); // _ZN21DefaultDataLoadHelper20loadRotationDegreesYEf
    virtual void loadRotationRadiansX(float); // _ZN21DefaultDataLoadHelper20loadRotationRadiansXEf
    virtual void loadRotationRadiansY(float); // _ZN21DefaultDataLoadHelper20loadRotationRadiansYEf
    virtual void loadFacingID(unsigned char); // _ZN21DefaultDataLoadHelper12loadFacingIDEh
    virtual void loadDirection(Vec3 const&); // _ZN21DefaultDataLoadHelper13loadDirectionERK4Vec3
    virtual void loadDirection__incomplete1(long); //TODO: incomplete function definition // _ZN21DefaultDataLoadHelper13loadDirectionEN9Direction4TypeE
    virtual void loadRotation__incomplete0(long); //TODO: incomplete function definition // _ZN21DefaultDataLoadHelper12loadRotationE8Rotation
    virtual void loadMirror__incomplete0(long); //TODO: incomplete function definition // _ZN21DefaultDataLoadHelper10loadMirrorE6Mirror
    virtual void loadActorUniqueID(ActorUniqueID); // _ZN21DefaultDataLoadHelper17loadActorUniqueIDE13ActorUniqueID
    virtual void loadOwnerID(ActorUniqueID); // _ZN21DefaultDataLoadHelper11loadOwnerIDE13ActorUniqueID
    virtual void getType()const; // _ZNK21DefaultDataLoadHelper7getTypeEv
    virtual bool shouldResetTime(); // _ZN21DefaultDataLoadHelper15shouldResetTimeEv
    DefaultDataLoadHelper(); // _ZN21DefaultDataLoadHelperC2Ev
};
