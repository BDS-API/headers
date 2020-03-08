#pragma once

#include "../bedrock/definition/ExplodeDefinition"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/Vec3"
#include "../bedrock/nbt/CompoundTag"


class ExplodeComponent {

public:

    ExplodeComponent(ExplodeComponent&&);
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
    ExplodeComponent(void);
};
