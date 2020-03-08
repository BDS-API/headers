#pragma once

#include "../Mob"
#include "../../../unmapped/Block"
#include "../../../unmapped/BlockSource"
#include "../../../unmapped/Path"


class MoveToBlockGoal : Goal {

public:
    virtual MoveToBlockGoal::~MoveToBlockGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    MoveToBlockGoal(Mob &, float, int, int, int, int, float, Vec3, float, TargetSelectionMethod, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>>);
    void _isCooldownActive(void)const;
    void _tickCooldown(void);
    void _nextStartTick(void);
    void _findTargetBlock(void);
    void _pathIsValid(Path const*);
    void _isValidTarget(BlockSource &, BlockPos const&)const;
    void _isStayDurationCompleted(void)const;
    void _moveToBlock(void);
    void _checkIfStuck(void);
    void _findNearestTargetBlock(BlockSource &, BlockPos const&);
    void _findRandomTargetBlock(BlockSource &, BlockPos const&);
    void _getTargetPosition(void)const;
    void _isValidTarget(Block const&)const;
};
