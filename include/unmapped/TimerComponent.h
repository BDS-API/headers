#pragma once

#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/nbt/CompoundTag.h"


class TimerComponent {

public:
    TimerComponent(TimerComponent &&);
    void getRandomTime(Actor &);
    void restartTimer(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void getTimeStamp(Level const&);
    TimerComponent();
    ~TimerComponent();
    void initFromDefinition(Actor &);
    void tryConvertToTimeStamp(Level const&);
    void setHasExecuted(bool);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHasExecuted()const;
    void getLooping()const;
};
