#pragma once



using namespace RakNetServerLocator;

class PingRateRecorder {

public:

    PingRateRecorder(unsigned int, bool);
    void _updateAverage(float);
    void pingStart(unsigned int const&, int);
    void pingEnd(unsigned int const&, int);
    void getLastPingTime()const;
    void getAverageLatency()const;
};
