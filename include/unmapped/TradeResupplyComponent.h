#pragma once

#include "../bedrock/actor/Actor.h"
#include "./TradeResupplyComponent.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"


class TradeResupplyComponent {

public:

    TradeResupplyComponent(TradeResupplyComponent &&);
    TradeResupplyComponent();
    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
