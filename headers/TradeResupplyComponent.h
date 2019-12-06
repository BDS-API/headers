#pragma once

class TradeResupplyComponent {

public:

    void TradeResupplyComponent(TradeResupplyComponent&&);
    void TradeResupplyComponent(void);
    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
