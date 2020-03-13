#pragma once

#include "../bedrock/level/LevelListener.h"


class DanceComponentListener : LevelListener {

public:
    ~DanceComponentListener(); // _ZN22DanceComponentListenerD2Ev
//  virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition // _ZN22DanceComponentListener15levelSoundEventE15LevelSoundEventRK4Vec3iRK25ActorDefinitionIdentifierbb
    DanceComponentListener(); // _ZN22DanceComponentListenerC2Ev
    void _disconnect(); // _ZN22DanceComponentListener11_disconnectEv
    void setOwnerID(ActorUniqueID const&); // _ZN22DanceComponentListener10setOwnerIDERK13ActorUniqueID
    void setListenDistance(float); // _ZN22DanceComponentListener17setListenDistanceEf
    void setLevel(Level &); // _ZN22DanceComponentListener8setLevelER5Level
    void inListenDistance(Vec3 const&)const; // _ZNK22DanceComponentListener16inListenDistanceERK4Vec3
};
