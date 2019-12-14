#pragma once

class FleeSunGoal : FindCoverGoal {

public:
    virtual ~FleeSunGoal();
    virtual bool canUse(void);
    virtual void appendDebugInfo(std::string &)const;

    void FleeSunGoal(Mob &, float);
};
