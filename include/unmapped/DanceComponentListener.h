#pragma once

#include "../bedrock/level/LevelListener.h"


class DanceComponentListener : LevelListener {

public:
    ~DanceComponentListener();
//  virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void inListenDistance(Vec3 const&)const;
    void setLevel(Level &);
    void setOwnerID(ActorUniqueID const&);
    void _disconnect();
    DanceComponentListener();
    void setListenDistance(float);
};
