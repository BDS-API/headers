#pragma once

class FloatGoal : Goal {

public:
    virtual ~FloatGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void FloatGoal(Mob &);
};
