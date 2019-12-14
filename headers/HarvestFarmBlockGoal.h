#pragma once

class HarvestFarmBlockGoal : BaseMoveToBlockGoal {

public:
    virtual ~HarvestFarmBlockGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    void HarvestFarmBlockGoal(Mob &, float);
    void findInventorySlotForFarmSeeds(void);
};
