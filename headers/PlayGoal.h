#pragma once

class PlayGoal : Goal {

public:
    virtual ~PlayGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void PlayGoal(Villager &, float);
};
