#pragma once

class DropItemForGoal : MoveToBlockGoal {

public:
    static long DropItemForGoal::COOLDOWN_TICKS;

    virtual ~DropItemForGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void findNearestBlock(void);

    void DropItemForGoal(Mob &, float, int, int, float, DefinitionTrigger const&, float, float, float, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, FloatRange);
    void _getLootTable(void);
    void _checkWhereHaveYouBeenAchievement(Actor *);
    void getFilter(void);
};
