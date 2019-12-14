#pragma once

class WitherDoNothingGoal : Goal {

public:
    virtual ~WitherDoNothingGoal();
    virtual bool canUse(void);
    virtual void appendDebugInfo(std::string &)const;

    void WitherDoNothingGoal(WitherBoss &);
};
