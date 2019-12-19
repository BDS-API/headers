#pragma once

class TimerComponent {

public:

    TimerComponent(TimerComponent&&);
    TimerComponent(void);
    void initFromDefinition(Actor &);
    void getRandomTime(Actor &);
    void restartTimer(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getLooping(void)const;
    void getHasExecuted(void)const;
    void setHasExecuted(bool);
    void getTimeStamp(Level const&);
    void tryConvertToTimeStamp(Level const&);
};
