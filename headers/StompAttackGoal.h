#pragma once

class StompAttackGoal : MeleeAttackGoal {

public:
    virtual ~StompAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _attemptAttackTarget(Actor *);

    void StompAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, bool);
};
