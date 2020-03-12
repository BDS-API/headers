#pragma once



class InsomniaComponent {

public:
    bool hasInsomnia()const;
    InsomniaComponent(InsomniaComponent &&);
    void restartTimer();
    void getTicksUntilInsomnia()const;
    void incrementTimeSinceRest();
    void addAdditionalSaveData(CompoundTag &);
    void setInsomnia(int);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getInsomniaTimerTicks()const;
};
