#pragma once

class RandomStrollGoal : Goal {

public:
    virtual ~RandomStrollGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _setWantedPosition(void);

    void RandomStrollGoal(Mob &, float, int, int, int);
};
