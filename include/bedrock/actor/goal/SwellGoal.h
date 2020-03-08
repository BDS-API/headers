#pragma once

#include "../Creeper"


class SwellGoal : Goal {

public:
    SwellGoal::~SwellGoal()
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwellGoal(Creeper *, float, float);
};
