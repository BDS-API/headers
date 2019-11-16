#pragma once

class AgentCommandExecutionGoal : Goal {

    virtual void AgentCommandExecution~AgentCommandExecutionGoal();
    virtual void AgentCommandExecution~AgentCommandExecutionGoal();
    virtual void AgentCommandExecutioncanUse(void);
    virtual void canContinueToUse(void);
    virtual void AgentCommandExecutioncanBeInterrupted(void);
    virtual void AgentCommandExecutionstart(void);
    virtual void AgentCommandExecutionstop(void);
    virtual void tick(void);
    virtual void AgentCommandExecutionappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
