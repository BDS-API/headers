#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/level/Level"


class TimerComponent {

public:

    TimerComponent(TimerComponent&&);
    TimerComponent(void);
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
