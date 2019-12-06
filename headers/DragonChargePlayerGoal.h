#pragma once

class DragonChargePlayerGoal : Goal {

public:
    static long DragonChargePlayerGoal::CHARGE_RECOVERY_TIME;
    static long DragonChargePlayerGoal::SITTING_CHARGE_VIEW_RANGE;

    virtual ~DragonChargePlayerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void DragonChargePlayerGoal(EnderDragon &);
};
