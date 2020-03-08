#pragma once

#include "../Mob"
#include "../../item/unmapped/ItemDescriptor"
#include "../../definition/DefinitionTrigger"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/Path"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../util/Vec3"


class MoveToBlockGoal : Goal {

public:
    virtual MoveToBlockGoal::~MoveToBlockGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    MoveToBlockGoal(Mob &, float, int, int, int, int, float, Vec3, float, TargetSelectionMethod, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>>);
    void _isCooldownActive()const;
    void _tickCooldown();
    void _nextStartTick();
    void _findTargetBlock();
    void _pathIsValid(Path const*);
    void _isValidTarget(BlockSource &, BlockPos const&)const;
    void _isStayDurationCompleted()const;
    void _moveToBlock();
    void _checkIfStuck();
    void _findNearestTargetBlock(BlockSource &, BlockPos const&);
    void _findRandomTargetBlock(BlockSource &, BlockPos const&);
    void _getTargetPosition()const;
    void _isValidTarget(Block const&)const;
};
