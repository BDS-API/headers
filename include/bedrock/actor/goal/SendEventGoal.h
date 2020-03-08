#pragma once

#include "../../../unmapped/SendEventData"
#include "../Mob"


class SendEventGoal : Goal {

public:
    SendEventGoal::~SendEventGoal()
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
