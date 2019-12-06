#pragma once

class PrioritizedGoal {

public:

    void PrioritizedGoal(int, std::unique_ptr<Goal, std::default_delete<Goal>>);
    void PrioritizedGoal(PrioritizedGoal&&);
    void getPriority(void)const;
    void setPriority(int);
    void getUsed(void)const;
    void setUsed(bool);
    void getToStart(void)const;
    void setToStart(bool);
};
