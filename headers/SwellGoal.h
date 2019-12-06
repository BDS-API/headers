#pragma once

class SwellGoal : Goal {

public:
    virtual ~SwellGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void SwellGoal(Creeper *, float, float);
};
