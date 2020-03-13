#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"
#include "../../../unmapped/FloatRange.h"


class DropItemForGoal : BaseMoveToBlockGoal {

public:
    static long COOLDOWN_TICKS;

    ~DropItemForGoal(); // _ZN15DropItemForGoalD2Ev
    virtual bool canUse(); // _ZN15DropItemForGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15DropItemForGoal16canContinueToUseEv
    virtual void start(); // _ZN15DropItemForGoal5startEv
    virtual void stop(); // _ZN15DropItemForGoal4stopEv
    virtual void tick(); // _ZN15DropItemForGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15DropItemForGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN15DropItemForGoal13isValidTargetER11BlockSourceRK8BlockPos
    virtual void findTargetBlock(); // _ZN15DropItemForGoal15findTargetBlockEv
    DropItemForGoal(Mob &, float, int, int, float, DefinitionTrigger const&, float, float, float, std::string, FloatRange); // _ZN15DropItemForGoalC2ER3MobfiifRK17DefinitionTriggerfffNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE10FloatRange
    void _getLootTable(); // _ZN15DropItemForGoal13_getLootTableEv
    void _checkWhereHaveYouBeenAchievement(Actor *); // _ZN15DropItemForGoal33_checkWhereHaveYouBeenAchievementEP5Actor
    void getFilter(); // _ZN15DropItemForGoal9getFilterEv
};
