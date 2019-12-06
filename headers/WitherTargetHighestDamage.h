#pragma once

class WitherTargetHighestDamage : TargetGoal {

public:
    virtual ~WitherTargetHighestDamage();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);

    void WitherTargetHighestDamage(WitherBoss &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
    void getHighestDamageTarget(void);
};
