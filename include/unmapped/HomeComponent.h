#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/BlockPos"


class HomeComponent {

public:

    HomeComponent(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHomePos()const;
    void getHomeDimension()const;
    void setHome(BlockPos const&, AutomaticID<Dimension, int> const&);
    HomeComponent(HomeComponent&&);
};
