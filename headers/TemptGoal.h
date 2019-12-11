#pragma once

class TemptGoal : Goal {

public:
    virtual ~TemptGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void TemptGoal(Mob &, float, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, bool, float, bool);
    bool isRunning(void);
};
