#pragma once

class InsomniaComponent {

public:

    InsomniaComponent(InsomniaComponent&&);
    void restartTimer(void);
    bool hasInsomnia(void)const;
    void setInsomnia(int);
    void getInsomniaTimerTicks(void)const;
    void getTicksUntilInsomnia(void)const;
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void incrementTimeSinceRest(void);
};
