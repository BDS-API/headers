#pragma once

#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/level/Level.h"
#include "./TimerComponent.h"


class TimerComponent {

public:

    ~TimerComponent();
    TimerComponent(TimerComponent &&);
    TimerComponent();
    void initFromDefinition(Actor &);
    void getRandomTime(Actor &);
    void restartTimer(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getLooping()const;
    void getHasExecuted()const;
    void setHasExecuted(bool);
    void getTimeStamp(Level const&);
    void tryConvertToTimeStamp(Level const&);
};
