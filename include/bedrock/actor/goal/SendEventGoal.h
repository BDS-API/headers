#pragma once

#include <string>
#include "../Mob.h"
#include "../../../unmapped/SendEventData.h"
#include <vector>
#include "Goal.h"


class SendEventGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void start();
    ~SendEventGoal();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void stop();
    SendEventGoal(Mob &, std::vector<SendEventData> const&);
    void _selectBestSpell();
    void _getCurrentSpell()const;
};
