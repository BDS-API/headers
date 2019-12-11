#pragma once

class BegGoal : Goal {

public:
    virtual ~BegGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void BegGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, float, int, int);
    void _playerHoldingInteresting(Player *);
};
