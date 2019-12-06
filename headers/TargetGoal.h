#pragma once

class TargetGoal : Goal {

public:
    virtual ~TargetGoal();
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual bool isTargetGoal(void)const;
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);

    void TargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, bool, int, bool, float, bool, int);
    void _withinRange(Actor const&);
    void getFollowDistance(void)const;
    void _canAttack(Actor *, bool, MobDescriptor const**);
    void _canReach(Actor &);
};
