#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Actor"


class HomeComponent {

public:

    HomeComponent(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHomePos(void)const;
    void getHomeDimension(void)const;
    void setHome(BlockPos const&, AutomaticID<Dimension, int> const&);
    HomeComponent(HomeComponent&&);
};
