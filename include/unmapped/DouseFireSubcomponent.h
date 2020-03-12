#pragma once

#include "HitResult.h"
#include "../bedrock/util/BlockPos.h"
#include "../json/Value.h"
#include "ProjectileComponent.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "OnHitSubcomponent.h"
#include "../bedrock/actor/Actor.h"


class DouseFireSubcomponent : OnHitSubcomponent {

public:
    virtual void writetoJSON(Json::Value &)const;
    ~DouseFireSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void readfromJSON(Json::Value &);
    bool isPotionWater(Actor &, ProjectileComponent &, HitResult const&);
    void getSubcomponentName();
    void douseFire(BlockSource &, BlockPos const&);
    DouseFireSubcomponent();
};
