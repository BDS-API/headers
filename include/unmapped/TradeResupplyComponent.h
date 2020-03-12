#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/Actor.h"


class TradeResupplyComponent {

public:
    void initFromDefinition(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    TradeResupplyComponent(TradeResupplyComponent &&);
    void reloadComponent(Actor &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    TradeResupplyComponent();
};
