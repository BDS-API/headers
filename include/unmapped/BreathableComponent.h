#pragma once

#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"


class BreathableComponent {

public:
    ~BreathableComponent();
    void addAdditionalSaveData(CompoundTag &);
    bool canBreatheLava()const;
    void getBreathableState();
    void getSuffocateTime()const;
    void getAirRegenPerTick()const;
    bool canBreathe(Actor const&)const;
    void getMaxAirSupply()const;
    bool generatesBubbles()const;
    bool canBreatheWater()const;
    void updateBreathableState(Actor &);
    void setAirSupply(short);
    bool canBreatheAir()const;
    bool canBreathSolids()const;
    void getInhaleTime()const;
    void setMaxAirSupply(short);
    BreathableComponent();
    void getAirSupply()const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    BreathableComponent(BreathableComponent &&);
};
