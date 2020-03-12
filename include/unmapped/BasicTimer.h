#pragma once

#include <functional>


class BasicTimer {

public:
    void resetTime(double, double);
    void getTimeDelay()const;
    void repeatIfFinished();
    void finishTimer();
    BasicTimer(double, std::function<double (void)>);
    BasicTimer(double, double, std::function<double (void)>);
    void resetTime();
    bool isFinished()const;
    void getTimeOverAt()const;
    void getStartTime();
    ~BasicTimer();
    void repeatIfFinished(double);
    void operator<(BasicTimer const&)const;
    bool hasExpired()const;
    void resetTime(double);
};
