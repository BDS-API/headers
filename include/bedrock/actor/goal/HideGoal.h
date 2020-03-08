#pragma once

#include "../Mob"


class HideGoal : MoveToPOIGoal {

public:
    virtual HideGoal::~HideGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _getRepathTime()const;
    virtual void _getOwnedPOI(POIType)const;

    HideGoal(Mob &, float, float, float, POIType);
    void _sendSoundTheAlarmAchievement()const;
};
