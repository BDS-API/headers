#pragma once



class BreathableComponent {

public:
    ~BreathableComponent(); // _ZN19BreathableComponentD2Ev
    BreathableComponent(BreathableComponent &&); // _ZN19BreathableComponentC2EOS_
    BreathableComponent(); // _ZN19BreathableComponentC2Ev
    void addAdditionalSaveData(CompoundTag &); // _ZN19BreathableComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN19BreathableComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void getAirSupply()const; // _ZNK19BreathableComponent12getAirSupplyEv
    void setAirSupply(short); // _ZN19BreathableComponent12setAirSupplyEs
    void getMaxAirSupply()const; // _ZNK19BreathableComponent15getMaxAirSupplyEv
    void setMaxAirSupply(short); // _ZN19BreathableComponent15setMaxAirSupplyEs
    void getSuffocateTime()const; // _ZNK19BreathableComponent16getSuffocateTimeEv
    void getInhaleTime()const; // _ZNK19BreathableComponent13getInhaleTimeEv
    void getAirRegenPerTick()const; // _ZNK19BreathableComponent18getAirRegenPerTickEv
    void updateBreathableState(Actor &); // _ZN19BreathableComponent21updateBreathableStateER5Actor
    bool canBreathe(Actor const&)const; // _ZNK19BreathableComponent10canBreatheERK5Actor
    bool canBreatheAir()const; // _ZNK19BreathableComponent13canBreatheAirEv
    bool canBreatheWater()const; // _ZNK19BreathableComponent15canBreatheWaterEv
    bool canBreatheLava()const; // _ZNK19BreathableComponent14canBreatheLavaEv
    bool canBreathSolids()const; // _ZNK19BreathableComponent15canBreathSolidsEv
    bool generatesBubbles()const; // _ZNK19BreathableComponent16generatesBubblesEv
    void getBreathableState(); // _ZN19BreathableComponent18getBreathableStateEv
};
