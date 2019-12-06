#pragma once

class SlimeKeepOnJumpingGoal : Goal {

public:
    virtual ~SlimeKeepOnJumpingGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void SlimeKeepOnJumpingGoal(Mob &);
};
