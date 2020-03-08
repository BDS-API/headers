#pragma once



class PlayerRespawnTelemetryData {

public:
    static long mEventName[abi:cxx11];


    PlayerRespawnTelemetryData(void);
    void WriteEventData(Social::Events::Event &)const;
    void setSearchTime(double);
    void setSearchTime(unsigned int);
    void setLongJumpCount(unsigned int);
    void setShortJumpCount(unsigned int);
    void setJumpDistance(double);
    void setPositionSourceType(unsigned int);
    void setChangedDimension(bool);
};
