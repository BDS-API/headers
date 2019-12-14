#pragma once

class AvoidMobTypeGoal : AvoidMobGoal {

public:
    virtual ~AvoidMobTypeGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void findNearestEntityToAvoid(float);

    void AvoidMobTypeGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, float, float, float, float, bool);
};
