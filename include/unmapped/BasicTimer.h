#pragma once



class BasicTimer {

public:

    BasicTimer(double, std::function<double ()(void)>);
    BasicTimer(double, double, std::function<double ()(void)>);
    void getTimeOverAt(void)const;
    void getTimeDelay(void)const;
    bool isFinished(void)const;
    void resetTime(void);
    void resetTime(double);
    void resetTime(double, double);
    void repeatIfFinished(void);
    void repeatIfFinished(double);
    void finishTimer(void);
    void getStartTime(void);
    bool hasExpired(void)const;
};
