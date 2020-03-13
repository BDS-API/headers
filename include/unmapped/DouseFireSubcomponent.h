#pragma once

#include "OnHitSubcomponent.h"


class DouseFireSubcomponent : OnHitSubcomponent {

public:
    ~DouseFireSubcomponent(); // _ZN21DouseFireSubcomponentD2Ev
    virtual void readfromJSON(Json::Value &); // _ZN21DouseFireSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK21DouseFireSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN21DouseFireSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN21DouseFireSubcomponent19getSubcomponentNameEv
    DouseFireSubcomponent(); // _ZN21DouseFireSubcomponentC2Ev
    bool isPotionWater(Actor &, ProjectileComponent &, HitResult const&); // _ZN21DouseFireSubcomponent13isPotionWaterER5ActorR19ProjectileComponentRK9HitResult
    void douseFire(BlockSource &, BlockPos const&); // _ZN21DouseFireSubcomponent9douseFireER11BlockSourceRK8BlockPos
};
