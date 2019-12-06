#pragma once

class AgentCommandExecutionGoal : Goal {

public:
    virtual ~AgentCommandExecutionGoal();
    virtual bool canUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void AgentCommandExecutionGoal(Mob &);
};
