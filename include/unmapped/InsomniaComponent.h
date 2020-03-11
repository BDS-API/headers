#pragma once

#include "../bedrock/actor/Actor.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./InsomniaComponent.h"


class InsomniaComponent {

public:

    InsomniaComponent(InsomniaComponent &&);
    void restartTimer();
    bool hasInsomnia()const;
    void setInsomnia(int);
    void getInsomniaTimerTicks()const;
    void getTicksUntilInsomnia()const;
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void incrementTimeSinceRest();
};
