#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include "../../../unmapped/Block.h"
#include "../../definition/DefinitionTrigger.h"
#include "../../util/Vec3.h"
#include <memory>
#include "../../../unmapped/Path.h"
#include "../../util/BlockPos.h"
#include "./Goal.h"
#include "../../block/unmapped/BlockSource.h"
#include <vector>
#include "../Mob.h"
#include <string>


class MoveToBlockGoal : Goal {

public:
    virtual ~MoveToBlockGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

//  MoveToBlockGoal(Mob &, float, int, int, int, int, float, Vec3, float, TargetSelectionMethod, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>>, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>>); //TODO: incomplete function definition
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
