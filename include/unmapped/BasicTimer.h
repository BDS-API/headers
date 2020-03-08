#pragma once



class BasicTimer {

public:

    BasicTimer(double, std::function<double ()(void)>);
    BasicTimer(double, double, std::function<double ()(void)>);
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
