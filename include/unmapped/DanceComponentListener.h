#pragma once

#include "../bedrock/level/LevelListener.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class DanceComponentListener : LevelListener {

public:
    ~DanceComponentListener();
//  virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void setLevel(Level &);
    void inListenDistance(Vec3 const&)const;
    void _disconnect();
    void setListenDistance(float);
    void setOwnerID(ActorUniqueID const&);
    DanceComponentListener();
};
