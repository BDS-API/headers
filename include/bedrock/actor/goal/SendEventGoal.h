#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class SendEventGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~SendEventGoal();
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void stop();
    SendEventGoal(Mob &, std::vector<SendEventData> const&);
    void _selectBestSpell();
    void _getCurrentSpell()const;
};
