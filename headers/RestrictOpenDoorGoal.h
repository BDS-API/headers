#pragma once

class RestrictOpenDoorGoal : Goal {

public:
    virtual ~RestrictOpenDoorGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    void RestrictOpenDoorGoal(Mob &);
};
