#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Actor"


class TradeResupplyComponent {

public:

    TradeResupplyComponent(TradeResupplyComponent&&);
    TradeResupplyComponent(void);
    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
