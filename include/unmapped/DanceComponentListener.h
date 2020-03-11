#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/level/LevelListener.h"


class DanceComponentListener : LevelListener {

public:
    virtual ~DanceComponentListener();
//  virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition

    DanceComponentListener();
    void _disconnect();
    void setOwnerID(ActorUniqueID const&);
    void setListenDistance(float);
    void setLevel(Level &);
    void inListenDistance(Vec3 const&)const;
};
