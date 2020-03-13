#pragma once

#include <functional>


class Timer {

public:
    ~Timer(); // _ZN5TimerD2Ev
    Timer(float, std::function<int (void)>); // _ZN5TimerC2EfSt8functionIFivEE
    void getTicks()const; // _ZNK5Timer8getTicksEv
    void getAlpha()const; // _ZNK5Timer8getAlphaEv
    void getTimeScale()const; // _ZNK5Timer12getTimeScaleEv
    void getTime()const; // _ZNK5Timer7getTimeEv
    void setTimeScale(float); // _ZN5Timer12setTimeScaleEf
    void advanceTime(float); // _ZN5Timer11advanceTimeEf
    void stepping()const; // _ZNK5Timer8steppingEv
    void advanceTimeQuickly(); // _ZN5Timer18advanceTimeQuicklyEv
    void skipTime(); // _ZN5Timer8skipTimeEv
    void stepTick(int); // _ZN5Timer8stepTickEi
    void resetTimePassed(); // _ZN5Timer15resetTimePassedEv
    void getLastTimestep()const; // _ZNK5Timer15getLastTimestepEv
};
