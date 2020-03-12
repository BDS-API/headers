#pragma once

#include "Event.h"
#include <string>


class PlayerRespawnTelemetryData {

public:
    static std::string mEventName;

    void setShortJumpCount(unsigned int);
    void setSearchTime(unsigned int);
    PlayerRespawnTelemetryData();
    void setSearchTime(double);
    void setPositionSourceType(unsigned int);
    std::string getEventName()const;
    void setJumpDistance(double);
    void WriteEventData(Social::Events::Event &)const;
    void setChangedDimension(bool);
    void setLongJumpCount(unsigned int);
};
