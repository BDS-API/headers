#pragma once

#include "OnHitSubcomponent.h"


class DouseFireSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    ~DouseFireSubcomponent();
    void getSubcomponentName();
    bool isPotionWater(Actor &, ProjectileComponent &, HitResult const&);
    DouseFireSubcomponent();
    void douseFire(BlockSource &, BlockPos const&);
};
