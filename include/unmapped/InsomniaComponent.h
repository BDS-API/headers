#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/Actor.h"


class InsomniaComponent {

public:
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getInsomniaTimerTicks()const;
    bool hasInsomnia()const;
    void getTicksUntilInsomnia()const;
    void restartTimer();
    void addAdditionalSaveData(CompoundTag &);
    void incrementTimeSinceRest();
    void setInsomnia(int);
    InsomniaComponent(InsomniaComponent &&);
};
