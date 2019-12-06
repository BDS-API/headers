#pragma once

class Timer {

public:

    void Timer(float, std::function<int ()(void)>);
    void getTicks(void)const;
    void getAlpha(void)const;
    void getTimeScale(void)const;
    void getTime(void)const;
    void setTimeScale(float);
    void advanceTime(float);
    void stepping(void)const;
    void advanceTimeQuickly(void);
    void skipTime(void);
    void stepTick(int);
    void resetTimePassed(void);
    void getLastTimestep(void)const;
};
