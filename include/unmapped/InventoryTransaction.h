#pragma once

#include <vector>


class InventoryTransaction {

public:
    void addItemToContent(ItemStack const&, int);
    void executeFull(Player &, bool)const;
    void getActions(InventorySource const&)const;
    void getAllActions()const;
    void getExecuteFunction(InventorySource const&)const;
    void resetBalance();
    void getSourceCount()const;
    InventoryTransaction();
    void _dropCreatedItems(Player &)const;
    void _logTransaction(bool)const;
    void recalculateBalance();
    void getVerifyFunction(InventorySource const&)const;
    void addAction(InventoryAction const&);
    void verifyFull(Player &, bool)const;
    ~InventoryTransaction();
    void reverse()const;
    InventoryTransaction(InventoryTransaction const&);
    InventoryTransaction(std::vector<InventoryAction> const&);
    void verifyBalance()const;
    void forceBalanceTransaction();
    void addActionToContent(InventoryAction const&);
};
