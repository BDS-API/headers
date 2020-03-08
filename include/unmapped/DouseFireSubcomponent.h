#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class DouseFireSubcomponent : OnHitSubcomponent {

public:
    virtual DouseFireSubcomponent::~DouseFireSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    DouseFireSubcomponent(void);
    bool isPotionWater(Actor &, ProjectileComponent &, HitResult const&);
    void douseFire(BlockSource &, BlockPos const&);
};
