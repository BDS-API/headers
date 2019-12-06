#pragma once

class BreedGoal : Goal {

public:
    virtual ~BreedGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void BreedGoal(Mob &, float);
    void _moveToFreePartner(void)const;
    void _isCloseEnoughToBreed(Vec3, Vec2, Vec3, Vec2)const;
    void _breed(void);
};
