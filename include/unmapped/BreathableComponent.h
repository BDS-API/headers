#pragma once



class BreathableComponent {

public:
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    BreathableComponent(BreathableComponent &&);
    void getBreathableState();
    bool canBreatheAir()const;
    void getAirSupply()const;
    void getInhaleTime()const;
    void getMaxAirSupply()const;
    void updateBreathableState(Actor &);
    void getSuffocateTime()const;
    bool canBreatheWater()const;
    bool canBreathe(Actor const&)const;
    void setMaxAirSupply(short);
    void addAdditionalSaveData(CompoundTag &);
    bool canBreathSolids()const;
    void setAirSupply(short);
    BreathableComponent();
    void getAirRegenPerTick()const;
    bool canBreatheLava()const;
    ~BreathableComponent();
    bool generatesBubbles()const;
};
