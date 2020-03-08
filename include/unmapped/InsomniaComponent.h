#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class InsomniaComponent {

public:

    InsomniaComponent(InsomniaComponent&&);
    void restartTimer();
    bool hasInsomnia()const;
    void setInsomnia(int);
    void getInsomniaTimerTicks()const;
    void getTicksUntilInsomnia()const;
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void incrementTimeSinceRest();
};
