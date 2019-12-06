#pragma once

class AvoidMobTypeGoal : AvoidMobGoal {

public:
    virtual ~AvoidMobTypeGoal();
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void findNearestEntityToAvoid(float);

    void AvoidMobTypeGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, float, float, float, float, bool);
};
