#pragma once

#include <functional>


class BasicTimer {

public:
    ~BasicTimer(); // _ZN10BasicTimerD2Ev
    BasicTimer(double, std::function<double (void)>); // _ZN10BasicTimerC2EdSt8functionIFdvEE
    BasicTimer(double, double, std::function<double (void)>); // _ZN10BasicTimerC2EddSt8functionIFdvEE
    void operator<(BasicTimer const&)const; // _ZNK10BasicTimerltERKS_
    void getTimeOverAt()const; // _ZNK10BasicTimer13getTimeOverAtEv
    void getTimeDelay()const; // _ZNK10BasicTimer12getTimeDelayEv
    bool isFinished()const; // _ZNK10BasicTimer10isFinishedEv
    void resetTime(); // _ZN10BasicTimer9resetTimeEv
    void resetTime(double); // _ZN10BasicTimer9resetTimeEd
    void resetTime(double, double); // _ZN10BasicTimer9resetTimeEdd
    void repeatIfFinished(); // _ZN10BasicTimer16repeatIfFinishedEv
    void repeatIfFinished(double); // _ZN10BasicTimer16repeatIfFinishedEd
    void finishTimer(); // _ZN10BasicTimer11finishTimerEv
    void getStartTime(); // _ZN10BasicTimer12getStartTimeEv
    bool hasExpired()const; // _ZNK10BasicTimer10hasExpiredEv
};
