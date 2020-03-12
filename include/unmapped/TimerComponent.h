#pragma once



class TimerComponent {

public:
    void restartTimer(Actor &);
    TimerComponent(TimerComponent &&);
    void setHasExecuted(bool);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHasExecuted()const;
    void getLooping()const;
    TimerComponent();
    void addAdditionalSaveData(CompoundTag &);
    void getTimeStamp(Level const&);
    void initFromDefinition(Actor &);
    void tryConvertToTimeStamp(Level const&);
    void getRandomTime(Actor &);
    ~TimerComponent();
};
