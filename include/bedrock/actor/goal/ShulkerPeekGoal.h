#pragma once

class ShulkerPeekGoal : Goal {

public:
    virtual ShulkerPeekGoal::~ShulkerPeekGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    ShulkerPeekGoal(Mob &);
};
