#pragma once

class RakNetServerLocator::PingRateRecorder {

public:

    void PingRateRecorder(unsigned int, bool);
    void _updateAverage(float);
    void pingStart(unsigned int const&, int);
    void pingEnd(unsigned int const&, int);
    void getLastPingTime(void)const;
    void getAverageLatency(void)const;
};