#pragma once

class DragonFlamingGoal : Goal {

public:
    static long DragonFlamingGoal::ROAR_DURATION;
    static long DragonFlamingGoal::FLAME_DURATION;
    static long DragonFlamingGoal::SITTING_FLAME_ATTACK_COUNT;
    static long DragonFlamingGoal::WARMUP_TIME;

    virtual ~DragonFlamingGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void DragonFlamingGoal(EnderDragon &);
};
