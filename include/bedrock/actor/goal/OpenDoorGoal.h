#pragma once

class OpenDoorGoal : DoorInteractGoal {

public:
    virtual OpenDoorGoal::~OpenDoorGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    OpenDoorGoal(Mob &, bool);
};
