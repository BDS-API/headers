#pragma once

class OcelotSitOnBlockGoal : BaseMoveToBlockGoal {

public:
    virtual ~OcelotSitOnBlockGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    void OcelotSitOnBlockGoal(Mob *, float);
};
