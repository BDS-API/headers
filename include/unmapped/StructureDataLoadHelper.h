#pragma once

#include "DataLoadHelper.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class StructureDataLoadHelper : DataLoadHelper {

public:
    ~StructureDataLoadHelper(); // _ZN23StructureDataLoadHelperD2Ev
    virtual void loadPosition(Vec3 const&); // _ZN23StructureDataLoadHelper12loadPositionERK4Vec3
    virtual void loadBlockPosition(BlockPos const&); // _ZN23StructureDataLoadHelper17loadBlockPositionERK8BlockPos
    virtual void loadBlockPositionOffset(BlockPos const&); // _ZN23StructureDataLoadHelper23loadBlockPositionOffsetERK8BlockPos
    virtual void loadRotationDegreesX(float); // _ZN23StructureDataLoadHelper20loadRotationDegreesXEf
    virtual void loadRotationDegreesY(float); // _ZN23StructureDataLoadHelper20loadRotationDegreesYEf
    virtual void loadRotationRadiansX(float); // _ZN23StructureDataLoadHelper20loadRotationRadiansXEf
    virtual void loadRotationRadiansY(float); // _ZN23StructureDataLoadHelper20loadRotationRadiansYEf
    virtual void loadFacingID(unsigned char); // _ZN23StructureDataLoadHelper12loadFacingIDEh
    virtual void loadDirection(Vec3 const&); // _ZN23StructureDataLoadHelper13loadDirectionERK4Vec3
//  virtual void loadDirection(Direction::Type); //TODO: incomplete function definition // _ZN23StructureDataLoadHelper13loadDirectionEN9Direction4TypeE
//  virtual void loadRotation(Rotation); //TODO: incomplete function definition // _ZN23StructureDataLoadHelper12loadRotationE8Rotation
//  virtual void loadMirror(Mirror); //TODO: incomplete function definition // _ZN23StructureDataLoadHelper10loadMirrorE6Mirror
    virtual void loadActorUniqueID(ActorUniqueID); // _ZN23StructureDataLoadHelper17loadActorUniqueIDE13ActorUniqueID
    virtual void loadOwnerID(ActorUniqueID); // _ZN23StructureDataLoadHelper11loadOwnerIDE13ActorUniqueID
    virtual void getType()const; // _ZNK23StructureDataLoadHelper7getTypeEv
    virtual void shouldResetTime(); // _ZN23StructureDataLoadHelper15shouldResetTimeEv
    virtual void _generateNewID(); // _ZN23StructureDataLoadHelper14_generateNewIDEv
//  StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level &); //TODO: incomplete function definition // _ZN23StructureDataLoadHelperC2ERK8BlockPosS2_RK4Vec313ActorUniqueID8Rotation6MirrorR5Level
//  StructureDataLoadHelper(BlockPos const&, BlockPos const&, Vec3 const&, ActorUniqueID, Rotation, Mirror, Level *); //TODO: incomplete function definition // _ZN23StructureDataLoadHelperC2ERK8BlockPosS2_RK4Vec313ActorUniqueID8Rotation6MirrorP5Level
    void _transformPosition(Vec3)const; // _ZNK23StructureDataLoadHelper18_transformPositionE4Vec3
    void _transformBlockPos(BlockPos)const; // _ZNK23StructureDataLoadHelper18_transformBlockPosE8BlockPos
    void _rotationToDegrees(); // _ZN23StructureDataLoadHelper18_rotationToDegreesEv
    void _rotationToRadians(); // _ZN23StructureDataLoadHelper18_rotationToRadiansEv
    void _transformDirection(Vec3)const; // _ZNK23StructureDataLoadHelper19_transformDirectionE4Vec3
};
