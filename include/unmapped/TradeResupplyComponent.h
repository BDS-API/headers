#pragma once



class TradeResupplyComponent {

public:
    TradeResupplyComponent(TradeResupplyComponent &&); // _ZN22TradeResupplyComponentC2EOS_
    TradeResupplyComponent(); // _ZN22TradeResupplyComponentC2Ev
    void initFromDefinition(Actor &); // _ZN22TradeResupplyComponent18initFromDefinitionER5Actor
    void reloadComponent(Actor &); // _ZN22TradeResupplyComponent15reloadComponentER5Actor
    void addAdditionalSaveData(CompoundTag &); // _ZN22TradeResupplyComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN22TradeResupplyComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
};
