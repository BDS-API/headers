#pragma once

class OcelotAttackGoal : Goal {

public:
    virtual ~OcelotAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void OcelotAttackGoal(Mob &, float, float, float);
};
