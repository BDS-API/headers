#pragma once

class HideGoal : MoveToPOIGoal {

public:
    virtual HideGoal::~HideGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _getRepathTime(void)const;
    virtual void _getOwnedPOI(POIType)const;

    HideGoal(Mob &, float, float, float, POIType);
    void _sendSoundTheAlarmAchievement(void)const;
};
