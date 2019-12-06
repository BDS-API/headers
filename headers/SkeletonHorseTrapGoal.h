#pragma once

class SkeletonHorseTrapGoal : Goal {

public:
    virtual ~SkeletonHorseTrapGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void SkeletonHorseTrapGoal(Horse &, int, float);
    void _getClosestPlayer(void)const;
    void _createHorse(Difficulty const&);
    void _createSkeleton(Difficulty const&, Horse const&);
};
