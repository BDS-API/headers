#pragma once



class TimerComponent {

public:
    ~TimerComponent(); // _ZN14TimerComponentD2Ev
    TimerComponent(TimerComponent &&); // _ZN14TimerComponentC2EOS_
    TimerComponent(); // _ZN14TimerComponentC2Ev
    void initFromDefinition(Actor &); // _ZN14TimerComponent18initFromDefinitionER5Actor
    void getRandomTime(Actor &); // _ZN14TimerComponent13getRandomTimeER5Actor
    void restartTimer(Actor &); // _ZN14TimerComponent12restartTimerER5Actor
    void addAdditionalSaveData(CompoundTag &); // _ZN14TimerComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN14TimerComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void getLooping()const; // _ZNK14TimerComponent10getLoopingEv
    void getHasExecuted()const; // _ZNK14TimerComponent14getHasExecutedEv
    void setHasExecuted(bool); // _ZN14TimerComponent14setHasExecutedEb
    void getTimeStamp(Level const&); // _ZN14TimerComponent12getTimeStampERK5Level
    void tryConvertToTimeStamp(Level const&); // _ZN14TimerComponent21tryConvertToTimeStampERK5Level
};
