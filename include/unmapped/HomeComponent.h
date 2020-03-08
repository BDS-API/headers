#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/util/BlockPos"
#include "../bedrock/nbt/CompoundTag"


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
