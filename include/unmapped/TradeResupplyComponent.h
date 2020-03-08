#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class TradeResupplyComponent {

public:

    TradeResupplyComponent(TradeResupplyComponent&&);
    TradeResupplyComponent(void);
    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
