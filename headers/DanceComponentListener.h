#pragma once

class DanceComponentListener : LevelListener {

public:
    virtual ~DanceComponentListener();
    virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);

    void DanceComponentListener(void);
    void _disconnect(void);
    void setOwnerID(ActorUniqueID const&);
    void setListenDistance(float);
    void setLevel(Level &);
    void inListenDistance(Vec3 const&)const;
};
