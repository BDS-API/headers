#pragma once

#include "MoveToPOIGoal.h"
#include "../Mob.h"
#include <string>


class HideGoal : MoveToPOIGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void _getRepathTime()const;
    ~HideGoal();
    virtual bool canContinueToUse();
    virtual void start();
//  virtual void _getOwnedPOI(POIType)const; //TODO: incomplete function definition
    virtual void stop();
    void _sendSoundTheAlarmAchievement()const;
//  HideGoal(Mob &, float, float, float, POIType); //TODO: incomplete function definition
};
