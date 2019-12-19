#pragma once

class BreathableComponent {

public:

    BreathableComponent(BreathableComponent&&);
    BreathableComponent(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getAirSupply(void)const;
    void setAirSupply(short);
    void getMaxAirSupply(void)const;
    void setMaxAirSupply(short);
    void getSuffocateTime(void)const;
    void getInhaleTime(void)const;
    void getAirRegenPerTick(void)const;
    void updateBreathableState(Actor &);
    bool canBreathe(Actor const&)const;
    bool canBreatheAir(void)const;
    bool canBreatheWater(void)const;
    bool canBreatheLava(void)const;
    bool canBreathSolids(void)const;
    void generatesBubbles(void)const;
    void getBreathableState(void);
};
