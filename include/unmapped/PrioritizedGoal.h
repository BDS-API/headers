#pragma once

#include <memory>


class PrioritizedGoal {

public:
    PrioritizedGoal(PrioritizedGoal &&);
    void getToStart()const;
    ~PrioritizedGoal();
    PrioritizedGoal(int, std::unique_ptr<Goal>);
    void setToStart(bool);
    void getPriority()const;
    void getUsed()const;
    void setPriority(int);
    void setUsed(bool);
};
