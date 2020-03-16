#pragma once

#include <string>
#include "MoveToPOIGoal.h"


class HideGoal : public MoveToPOIGoal {

public:
    virtual ~HideGoal(); // _ZN8HideGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN8HideGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN8HideGoal16canContinueToUseEv
    virtual void start(); // _ZN8HideGoal5startEv
    virtual void stop(); // _ZN8HideGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK8HideGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _getRepathTime()const; // _ZNK8HideGoal14_getRepathTimeEv
    virtual void _getOwnedPOI__incomplete0(long)const; //TODO: incomplete function definition // _ZNK8HideGoal12_getOwnedPOIE7POIType
//    HideGoal(Mob &, float, float, float, long); //TODO: incomplete function definition // _ZN8HideGoalC2ER3Mobfff7POIType
    void _sendSoundTheAlarmAchievement()const; // _ZNK8HideGoal29_sendSoundTheAlarmAchievementEv
};
