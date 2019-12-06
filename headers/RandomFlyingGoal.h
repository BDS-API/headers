#pragma once

class RandomFlyingGoal : RandomStrollGoal {

public:
    virtual ~RandomFlyingGoal();
    virtual bool canUse(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _setWantedPosition(void);

    void RandomFlyingGoal(Mob &, float, int, int, bool);
    void _getTreePos(Vec3 &)const;
};
