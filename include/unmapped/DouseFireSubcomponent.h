#pragma once

#include "./HitResult.h"
#include "../json/Value.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "./ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "./OnHitSubcomponent.h"
#include "../bedrock/util/BlockPos.h"


class DouseFireSubcomponent : OnHitSubcomponent {

public:
    virtual ~DouseFireSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    DouseFireSubcomponent();
    bool isPotionWater(Actor &, ProjectileComponent &, HitResult const&);
    void douseFire(BlockSource &, BlockPos const&);
};
