#pragma once

#include <functional>


class BasicTimer {

public:
    void resetTime(double, double);
    void getTimeOverAt()const;
    void repeatIfFinished(double);
    BasicTimer(double, double, std::function<double (void)>);
    void getStartTime();
    bool hasExpired()const;
    void operator<(BasicTimer const&)const;
    void finishTimer();
    void resetTime();
    void getTimeDelay()const;
    ~BasicTimer();
    BasicTimer(double, std::function<double (void)>);
    void resetTime(double);
    void repeatIfFinished();
    bool isFinished()const;
};
