#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/BlockPos.h"
#include "Dimension.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "DataLoadHelper.h"


class HomeComponent {

public:
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void addAdditionalSaveData(CompoundTag &);
//  void setHome(BlockPos const&, AutomaticID<Dimension, int> const&); //TODO: incomplete function definition
    void getHomeDimension()const;
    void getHomePos()const;
    HomeComponent(HomeComponent &&);
    HomeComponent();
};
