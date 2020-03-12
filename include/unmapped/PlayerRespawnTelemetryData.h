#pragma once

#include <string>


class PlayerRespawnTelemetryData {

public:
    static std::string mEventName;

    std::string getEventName()const;
    PlayerRespawnTelemetryData();
    void setPositionSourceType(unsigned int);
    void setChangedDimension(bool);
    void setShortJumpCount(unsigned int);
    void setLongJumpCount(unsigned int);
    void WriteEventData(Social::Events::Event &)const;
    void setSearchTime(unsigned int);
    void setSearchTime(double);
    void setJumpDistance(double);
};
