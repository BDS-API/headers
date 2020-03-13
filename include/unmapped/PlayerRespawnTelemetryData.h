#pragma once

#include <string>


class PlayerRespawnTelemetryData {

public:
    static std::string mEventName;

    std::string getEventName()const; // _ZNK26PlayerRespawnTelemetryData12getEventNameB5cxx11Ev
    PlayerRespawnTelemetryData(); // _ZN26PlayerRespawnTelemetryDataC2Ev
    void WriteEventData(Social::Events::Event &)const; // _ZNK26PlayerRespawnTelemetryData14WriteEventDataERN6Social6Events5EventE
    void setSearchTime(double); // _ZN26PlayerRespawnTelemetryData13setSearchTimeEd
    void setSearchTime(unsigned int); // _ZN26PlayerRespawnTelemetryData13setSearchTimeEj
    void setLongJumpCount(unsigned int); // _ZN26PlayerRespawnTelemetryData16setLongJumpCountEj
    void setShortJumpCount(unsigned int); // _ZN26PlayerRespawnTelemetryData17setShortJumpCountEj
    void setJumpDistance(double); // _ZN26PlayerRespawnTelemetryData15setJumpDistanceEd
    void setPositionSourceType(unsigned int); // _ZN26PlayerRespawnTelemetryData21setPositionSourceTypeEj
    void setChangedDimension(bool); // _ZN26PlayerRespawnTelemetryData19setChangedDimensionEb
};
