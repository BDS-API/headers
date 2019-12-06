#pragma once

class HideGoal : MoveToPOIGoal {

public:
    virtual ~HideGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _getRepathTime(void)const;
    virtual void _getOwnedPOI(POIType)const;

    void HideGoal(Mob &, float, float, float, POIType);
    void _sendSoundTheAlarmAchievement(void)const;
};
