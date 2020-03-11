#pragma once

#include <functional>
#include "./BasicTimer.h"


class BasicTimer {

public:

    ~BasicTimer();
//  BasicTimer(double, std::function<double (void)>); //TODO: incomplete function definition
//  BasicTimer(double, double, std::function<double (void)>); //TODO: incomplete function definition
    void operator<(BasicTimer const&)const;
    void getTimeOverAt()const;
    void getTimeDelay()const;
    bool isFinished()const;
    void resetTime();
    void resetTime(double);
    void resetTime(double, double);
    void repeatIfFinished();
    void repeatIfFinished(double);
    void finishTimer();
    void getStartTime();
    bool hasExpired()const;
};
