#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "Goal.h"
#include <vector>


class MoveToBlockGoal : Goal {

public:
    virtual void start();
    virtual void stop();
    virtual bool canUse();
    ~MoveToBlockGoal();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    void _nextStartTick();
    void _getTargetPosition()const;
    void _pathIsValid(Path const*);
    void _checkIfStuck();
    void _findNearestTargetBlock(BlockSource &, BlockPos const&);
    void _isValidTarget(Block const&)const;
    void _isStayDurationCompleted()const;
    void _isValidTarget(BlockSource &, BlockPos const&)const;
    void _tickCooldown();
    void _isCooldownActive()const;
    void _moveToBlock();
    void _findRandomTargetBlock(BlockSource &, BlockPos const&);
//  MoveToBlockGoal(Mob &, float, int, int, int, int, float, Vec3, float, TargetSelectionMethod, std::vector<DefinitionTrigger>, std::vector<DefinitionTrigger>, std::vector<ItemDescriptor>); //TODO: incomplete function definition
    void _findTargetBlock();
};
