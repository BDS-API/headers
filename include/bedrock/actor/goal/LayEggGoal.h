#pragma once

#include "../../../unmapped/BlockPos"
#include "../Mob"
#include "../../../unmapped/BlockSource"


class LayEggGoal : BaseMoveToBlockGoal {

public:
    virtual LayEggGoal::~LayEggGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock(void);

    LayEggGoal(Mob &, float, int, int, int, float, DefinitionTrigger const&);
    void _layEgg(BlockPos const&);
};
