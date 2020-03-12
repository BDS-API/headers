#pragma once

#include "../../../unmapped/Block.h"
#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../../util/Vec3.h"
#include "../Mob.h"
#include "Goal.h"
#include "../../../unmapped/Path.h"
#include <vector>
#include "../../util/BlockPos.h"
#include "../../item/unmapped/ItemDescriptor.h"
#include "../../definition/DefinitionTrigger.h"


class MoveToBlockGoal : Goal {

public:
    virtual void tick();
    virtual bool canUse();
    virtual void stop();
    virtual bool canContinueToUse();
    ~MoveToBlockGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    void _tickCooldown();
    void _isStayDurationCompleted()const;
    void _isCooldownActive()const;
    void _isValidTarget(Block const&)const;
    void _findRandomTargetBlock(BlockSource &, BlockPos const&);
    void _checkIfStuck();
    void _getTargetPosition()const;
    void _pathIsValid(Path const*);
    void _findNearestTargetBlock(BlockSource &, BlockPos const&);
    void _isValidTarget(BlockSource &, BlockPos const&)const;
    void _moveToBlock();
    void _findTargetBlock();
    void _nextStartTick();
//  MoveToBlockGoal(Mob &, float, int, int, int, int, float, Vec3, float, TargetSelectionMethod, std::vector<DefinitionTrigger>, std::vector<DefinitionTrigger>, std::vector<ItemDescriptor>); //TODO: incomplete function definition
};
