#pragma once



class InsomniaComponent {

public:
    InsomniaComponent(InsomniaComponent &&); // _ZN17InsomniaComponentC2EOS_
    void restartTimer(); // _ZN17InsomniaComponent12restartTimerEv
    bool hasInsomnia()const; // _ZNK17InsomniaComponent11hasInsomniaEv
    void setInsomnia(int); // _ZN17InsomniaComponent11setInsomniaEi
    void getInsomniaTimerTicks()const; // _ZNK17InsomniaComponent21getInsomniaTimerTicksEv
    void getTicksUntilInsomnia()const; // _ZNK17InsomniaComponent21getTicksUntilInsomniaEv
    void addAdditionalSaveData(CompoundTag &); // _ZN17InsomniaComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN17InsomniaComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void incrementTimeSinceRest(); // _ZN17InsomniaComponent22incrementTimeSinceRestEv
};
