#pragma once

#include <functional>


class Timer {

public:
    void getTime()const;
    void getLastTimestep()const;
    void resetTimePassed();
    void getTimeScale()const;
    void advanceTimeQuickly();
    void getAlpha()const;
    ~Timer();
    void setTimeScale(float);
    void advanceTime(float);
    void stepTick(int);
    void skipTime();
    Timer(float, std::function<int (void)>);
    void getTicks()const;
    void stepping()const;
};
