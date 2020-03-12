#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/definition/ExplodeDefinition.h"
#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"


class ExplodeComponent {

public:
    void setFuseLength(int);
    void setAllowUnderwater(bool);
    void explode(Actor &, Vec3 const&);
    bool isFuseLit()const;
    void getFuseLength()const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void initFromDefinition(Actor &, ExplodeDefinition const&);
    void addAdditionalSaveData(CompoundTag &);
    void getInitialFuseLength()const;
    ExplodeComponent(ExplodeComponent &&);
    void getIsFuseLit()const;
    ExplodeComponent();
};
