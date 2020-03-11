#pragma once

#include "./Event.h"
#include <string>


class PlayerRespawnTelemetryData {

public:
    static std::string mEventName;


    std::string getEventName()const;
    PlayerRespawnTelemetryData();
    void WriteEventData(Social::Events::Event &)const;
    void setSearchTime(double);
    void setSearchTime(unsigned int);
    void setLongJumpCount(unsigned int);
    void setShortJumpCount(unsigned int);
    void setJumpDistance(double);
    void setPositionSourceType(unsigned int);
    void setChangedDimension(bool);
};
