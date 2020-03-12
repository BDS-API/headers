#pragma once



class TradeResupplyComponent {

public:
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    TradeResupplyComponent(TradeResupplyComponent &&);
    void reloadComponent(Actor &);
    TradeResupplyComponent();
    void initFromDefinition(Actor &);
};
