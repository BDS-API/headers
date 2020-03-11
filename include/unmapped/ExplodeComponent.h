#pragma once

#include "../bedrock/util/Vec3.h"
#include "./DataLoadHelper.h"
#include "../bedrock/definition/ExplodeDefinition.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "./ExplodeComponent.h"


class ExplodeComponent {

public:

    ExplodeComponent(ExplodeComponent &&);
    void initFromDefinition(Actor &, ExplodeDefinition const&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void explode(Actor &, Vec3 const&);
    void getFuseLength()const;
    void setFuseLength(int);
    void getInitialFuseLength()const;
    void getIsFuseLit()const;
    void setAllowUnderwater(bool);
    bool isFuseLit()const;
    ExplodeComponent();
};
