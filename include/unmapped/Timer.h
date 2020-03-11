#pragma once

#include <functional>


class Timer {

public:

    ~Timer();
//  Timer(float, std::function<int (void)>); //TODO: incomplete function definition
    void getTicks()const;
    void getAlpha()const;
    void getTimeScale()const;
    void getTime()const;
    void setTimeScale(float);
    void advanceTime(float);
    void stepping()const;
    void advanceTimeQuickly();
    void skipTime();
    void stepTick(int);
    void resetTimePassed();
    void getLastTimestep()const;
};
