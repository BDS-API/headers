#pragma once

class SwellGoal : Goal {

public:
    virtual SwellGoal::~SwellGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SwellGoal(Creeper *, float, float);
};
