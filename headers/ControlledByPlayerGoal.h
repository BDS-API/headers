#pragma once

class ControlledByPlayerGoal : Goal {

public:
    virtual ~ControlledByPlayerGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void ControlledByPlayerGoal(Mob &);
    void _canBeControlledByRider(void);
};
