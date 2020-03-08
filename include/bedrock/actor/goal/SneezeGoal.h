#pragma once

#include "../Mob"


class SneezeGoal : Goal {

public:
    virtual SneezeGoal::~SneezeGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SneezeGoal(Mob &, float, float, float, std::string const&, std::string const&, std::string const&, float, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float);
};
