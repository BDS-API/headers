#pragma once

#include "../../../unmapped/SendEventData.h"
#include <memory>
#include "./Goal.h"
#include <vector>
#include "../Mob.h"
#include <string>


class SendEventGoal : Goal {

public:
    virtual ~SendEventGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SendEventGoal(Mob &, std::vector<SendEventData, std::allocator<SendEventData>> const&);
    void _selectBestSpell();
    void _getCurrentSpell()const;
};
