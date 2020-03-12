#pragma once

#include <string>
#include "MoveToPOIGoal.h"


class HideGoal : MoveToPOIGoal {

public:
    virtual void start();
//  virtual void _getOwnedPOI(POIType)const; //TODO: incomplete function definition
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _getRepathTime()const;
    virtual bool canContinueToUse();
    virtual void stop();
    ~HideGoal();
    void _sendSoundTheAlarmAchievement()const;
//  HideGoal(Mob &, float, float, float, POIType); //TODO: incomplete function definition
};
