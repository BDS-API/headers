#pragma once

class OcelotSitOnBlockGoal : BaseMoveToBlockGoal {

public:
    virtual ~OcelotSitOnBlockGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    void OcelotSitOnBlockGoal(Mob *, float);
};
