#pragma once

#include "./DataLoadHelper.h"
#include "./Dimension.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "./HomeComponent.h"
#include "../bedrock/util/BlockPos.h"


class HomeComponent {

public:

    HomeComponent();
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHomePos()const;
    void getHomeDimension()const;
//  void setHome(BlockPos const&, AutomaticID<Dimension, int> const&); //TODO: incomplete function definition
    HomeComponent(HomeComponent &&);
};
