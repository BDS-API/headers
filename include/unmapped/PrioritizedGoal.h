#pragma once

#include "../bedrock/actor/goal/Goal.h"
#include <memory>


class PrioritizedGoal {

public:
    void getUsed()const;
    void setPriority(int);
    ~PrioritizedGoal();
    void getToStart()const;
    void setUsed(bool);
    void getPriority()const;
    PrioritizedGoal(PrioritizedGoal &&);
    void setToStart(bool);
    PrioritizedGoal(int, std::unique_ptr<Goal>);
};
