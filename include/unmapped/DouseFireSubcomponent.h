#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockSource"


class DouseFireSubcomponent : OnHitSubcomponent {

public:
    DouseFireSubcomponent::~DouseFireSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    DouseFireSubcomponent(void);
    bool isPotionWater(Actor &, ProjectileComponent &, HitResult const&);
    void douseFire(BlockSource &, BlockPos const&);
};
