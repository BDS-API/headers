#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/BlockPos"
#include "../json/Value"


class DouseFireSubcomponent : OnHitSubcomponent {

public:
    virtual DouseFireSubcomponent::~DouseFireSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    DouseFireSubcomponent(void);
    bool isPotionWater(Actor &, ProjectileComponent &, HitResult const&);
    void douseFire(BlockSource &, BlockPos const&);
};
