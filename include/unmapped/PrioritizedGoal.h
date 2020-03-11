#pragma once

#include "../bedrock/actor/goal/Goal.h"
#include <memory>
#include "./PrioritizedGoal.h"


class PrioritizedGoal {

public:

    PrioritizedGoal(int, std::unique_ptr<Goal, std::default_delete<Goal>>);
    PrioritizedGoal(PrioritizedGoal &&);
    ~PrioritizedGoal();
    void getPriority()const;
    void setPriority(int);
    void getUsed()const;
    void setUsed(bool);
    void getToStart()const;
    void setToStart(bool);
};
