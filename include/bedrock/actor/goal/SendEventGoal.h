#pragma once

#include "../Mob"


class SendEventGoal : Goal {

public:
    virtual SendEventGoal::~SendEventGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SendEventGoal(Mob &, std::vector<SendEventData, std::allocator<SendEventData>> const&);
    void _selectBestSpell(void);
    void _getCurrentSpell(void)const;
};
