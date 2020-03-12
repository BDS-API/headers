#pragma once

#include <functional>


class Timer {

public:
    ~Timer();
    void getTicks()const;
    void setTimeScale(float);
    void getAlpha()const;
    void advanceTime(float);
    void resetTimePassed();
    void stepping()const;
    void skipTime();
    Timer(float, std::function<int (void)>);
    void getTimeScale()const;
    void getLastTimestep()const;
    void getTime()const;
    void stepTick(int);
    void advanceTimeQuickly();
};
