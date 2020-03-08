#pragma once

#include "../bedrock/level/Level"
#include "../bedrock/actor/unmapped/ActorUniqueID"
#include "../bedrock/level/LevelListener"
#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"


class DanceComponentListener : LevelListener {

public:
    DanceComponentListener::~DanceComponentListener()
    virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);

    DanceComponentListener(void);
    void _disconnect();
    void setOwnerID(ActorUniqueID const&);
    void setListenDistance(float);
    void setLevel(Level &);
    void inListenDistance(Vec3 const&)const;
};
