#pragma once

class DefendTrustedTargetGoal : NearestAttackableTargetGoal {

public:
    virtual ~DefendTrustedTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void DefendTrustedTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, LevelSoundEvent, DefinitionTrigger const&);
    void _findTrustedTarget(TrustComponent const&);
};
