#pragma once

class GoHomeGoal : Goal {

public:
    static long GIVE_UP_TICKS;

    virtual ~GoHomeGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void GoHomeGoal(Mob &, float, int, float, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>);
    void _getHomeDimension(void)const;
    void _getHomePos(void)const;
    void _triggerOnFailedEvents(void);
};
