#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "Goal.h"
#include <vector>


class MoveToBlockGoal : Goal {

public:
    ~MoveToBlockGoal(); // _ZN15MoveToBlockGoalD2Ev
    virtual bool canUse(); // _ZN15MoveToBlockGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15MoveToBlockGoal16canContinueToUseEv
    virtual void start(); // _ZN15MoveToBlockGoal5startEv
    virtual void stop(); // _ZN15MoveToBlockGoal4stopEv
    virtual void tick(); // _ZN15MoveToBlockGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15MoveToBlockGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  MoveToBlockGoal(Mob &, float, int, int, int, int, float, Vec3, float, TargetSelectionMethod, std::vector<DefinitionTrigger>, std::vector<DefinitionTrigger>, std::vector<ItemDescriptor>); //TODO: incomplete function definition // _ZN15MoveToBlockGoalC2ER3Mobfiiiif4Vec3f21TargetSelectionMethodSt6vectorI17DefinitionTriggerSaIS5_EES7_S4_I14ItemDescriptorSaIS8_EE
    void _isCooldownActive()const; // _ZNK15MoveToBlockGoal17_isCooldownActiveEv
    void _tickCooldown(); // _ZN15MoveToBlockGoal13_tickCooldownEv
    void _nextStartTick(); // _ZN15MoveToBlockGoal14_nextStartTickEv
    void _findTargetBlock(); // _ZN15MoveToBlockGoal16_findTargetBlockEv
    void _pathIsValid(Path const*); // _ZN15MoveToBlockGoal12_pathIsValidEPK4Path
    void _isValidTarget(BlockSource &, BlockPos const&)const; // _ZNK15MoveToBlockGoal14_isValidTargetER11BlockSourceRK8BlockPos
    void _isStayDurationCompleted()const; // _ZNK15MoveToBlockGoal24_isStayDurationCompletedEv
    void _moveToBlock(); // _ZN15MoveToBlockGoal12_moveToBlockEv
    void _checkIfStuck(); // _ZN15MoveToBlockGoal13_checkIfStuckEv
    void _findNearestTargetBlock(BlockSource &, BlockPos const&); // _ZN15MoveToBlockGoal23_findNearestTargetBlockER11BlockSourceRK8BlockPos
    void _findRandomTargetBlock(BlockSource &, BlockPos const&); // _ZN15MoveToBlockGoal22_findRandomTargetBlockER11BlockSourceRK8BlockPos
    void _getTargetPosition()const; // _ZNK15MoveToBlockGoal18_getTargetPositionEv
    void _isValidTarget(Block const&)const; // _ZNK15MoveToBlockGoal14_isValidTargetERK5Block
};
