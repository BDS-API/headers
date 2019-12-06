#pragma once

class DragonStrafePlayerGoal : Goal {

public:
    static long DragonStrafePlayerGoal::FIREBALL_CHARGE_AMOUNT;

    virtual ~DragonStrafePlayerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void DragonStrafePlayerGoal(EnderDragon &);
    void setTarget(Actor *);
    void findNewTarget(void);
    void navigateToNextPathNode(void);
};
